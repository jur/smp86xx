/* gtkframepeer.c -- Native implementation of GtkFramePeer
   Copyright (C) 1998, 1999, 2002 Free Software Foundation, Inc.

   This file is part of GNU Classpath.

   GNU Classpath is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GNU Classpath is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GNU Classpath; see the file COPYING.  If not, write to the
   Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.

   Linking this library statically or dynamically with other modules is
   making a combined work based on this library.  Thus, the terms and
   conditions of the GNU General Public License cover the whole
   combination.

   As a special exception, the copyright holders of this library give you
   permission to link this library with independent modules to produce an
   executable, regardless of the license terms of these independent
   modules, and to copy and distribute the resulting executable under
   terms of your choice, provided that you also meet, for each linked
   independent module, the terms and conditions of the license of that
   module.  An independent module is a module which is not derived from
   or based on this library.  If you modify this library, you may extend
   this exception to your version of the library, but you are not
   obligated to do so.  If you do not wish to do so, delete this
   exception statement from your version. */

#include "gtkpeer.h"
#include "gnu_java_awt_peer_gtk_GtkFramePeer.h"

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_removeMenuBarPeer
  (JNIEnv *env, jobject obj)
{
  void *ptr;
  void *mptr;
  void *fixed;
  GList* children;

  ptr = NSA_GET_PTR (env, obj);

  gdk_threads_enter ();

  fixed = gtk_container_get_children (GTK_CONTAINER (ptr))->data;
  children = gtk_container_get_children (GTK_CONTAINER (fixed));

  while (children != NULL && !GTK_IS_MENU_SHELL (children->data))
  {
    children = children->next;
  }

  /* If there's a menu bar, remove it. */
  if (children != NULL)
    {
      mptr = children->data;

      /* This will actually destroy the MenuBar. By removing it from
         its parent, the reference count for the MenuBar widget will
         decrement to 0. The widget will be automatically destroyed by
         GTK. */
      gtk_container_remove (GTK_CONTAINER (fixed), GTK_WIDGET (mptr));  
    }

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_setMenuBarPeer
  (JNIEnv *env, jobject obj, jobject menubar)
{
  void *ptr;
  void *mptr;
  void *fixed;

  ptr = NSA_GET_PTR (env, obj);
  mptr = NSA_GET_PTR (env, menubar);

  gdk_threads_enter ();

  fixed = gtk_container_get_children (GTK_CONTAINER (ptr))->data;
  gtk_fixed_put (GTK_FIXED (fixed), mptr, 0, 0);
  gtk_widget_show (mptr);

  gdk_threads_leave ();
}

JNIEXPORT jint JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_getMenuBarHeight
  (JNIEnv *env, jobject obj __attribute__((unused)), jobject menubar)
{
  GtkWidget *ptr;
  GtkRequisition requisition;

  ptr = NSA_GET_PTR (env, menubar);

  gdk_threads_enter ();

  gtk_widget_size_request (ptr, &requisition);

  gdk_threads_leave ();

  return requisition.height;
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_setMenuBarWidth
  (JNIEnv *env, jobject obj __attribute__((unused)), jobject menubar, jint width)
{
  GtkWidget *ptr;
  GtkRequisition natural_req;

  ptr = NSA_GET_PTR (env, menubar);

  gdk_threads_enter ();

  /* Get the menubar's natural size request. */
  gtk_widget_set_size_request (GTK_WIDGET (ptr), -1, -1);
  gtk_widget_size_request (GTK_WIDGET (ptr), &natural_req);

  /* Set the menubar's size request to width by natural_req.height. */
  gtk_widget_set_size_request (GTK_WIDGET (ptr),
                               width, natural_req.height);

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_gtkFixedSetVisible
  (JNIEnv *env, jobject obj, jboolean visible)
{
  void *ptr;
  void *fixed;

  ptr = NSA_GET_PTR (env, obj);

  gdk_threads_enter ();

  fixed = gtk_container_get_children (GTK_CONTAINER (ptr))->data;

  if (visible)
    gtk_widget_show (GTK_WIDGET (fixed));
  else
    gtk_widget_hide (GTK_WIDGET (fixed));

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_nativeSetIconImageFromDecoder
  (JNIEnv *env, jobject obj, jobject decoder)
{
  void *ptr;
  GdkPixbufLoader *loader = NULL;
  GdkPixbuf *pixbuf = NULL;

  ptr = NSA_GET_PTR (env, obj);

  loader = NSA_GET_PB_PTR (env, decoder);
  g_assert (loader != NULL);

  gdk_threads_enter ();

  pixbuf = gdk_pixbuf_loader_get_pixbuf (loader);
  g_assert (pixbuf != NULL);

  gtk_window_set_icon (GTK_WINDOW (ptr), pixbuf);

  gdk_threads_leave ();
}

static void
free_pixbuf_data (guchar *pixels, gpointer data __attribute__((unused)))
{
  free(pixels);
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkFramePeer_nativeSetIconImageFromData
  (JNIEnv *env, jobject obj, jintArray pixelArray, jint width, jint height)
{
  void *ptr;
  GdkPixbuf *pixbuf;
  jint *pixels;
  int pixels_length, i;
  guchar *data;

  ptr = NSA_GET_PTR (env, obj);

  pixels = (*env)->GetIntArrayElements (env, pixelArray, 0);
  pixels_length = (*env)->GetArrayLength (env, pixelArray);

  data = malloc (sizeof (guchar) * pixels_length);
  for (i = 0; i < pixels_length; i++)
    data[i] = (guchar) pixels[i];

  gdk_threads_enter ();

  pixbuf = gdk_pixbuf_new_from_data (data,
                                     GDK_COLORSPACE_RGB,
                                     TRUE,
                                     8,
                                     width,
                                     height,
                                     width*4,
                                     free_pixbuf_data,
                                     NULL);

  gtk_window_set_icon (GTK_WINDOW (ptr), pixbuf);

  gdk_threads_leave ();

  (*env)->ReleaseIntArrayElements(env, pixelArray, pixels, 0);
}
