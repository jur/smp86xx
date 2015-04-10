/* gtkbuttonpeer.c -- Native implementation of GtkButtonPeer
   Copyright (C) 1998, 1999 Free Software Foundation, Inc.

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
#include "gnu_java_awt_peer_gtk_GtkButtonPeer.h"

static gboolean focus_in_cb (GtkWidget *widget,
                             GdkEventFocus *event,
                             jobject peer);
static gboolean focus_out_cb (GtkWidget *widget,
                              GdkEventFocus *event,
                              jobject peer);

static void block_expose_events_cb (GtkWidget *widget,
                                    jobject peer);

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_create
  (JNIEnv *env, jobject obj, jstring label)
{
  const char *c_label;
  GtkWidget *eventbox;
  GtkWidget *button;

  NSA_SET_GLOBAL_REF (env, obj);

  c_label = (*env)->GetStringUTFChars (env, label, NULL);

  gdk_threads_enter ();

  eventbox = gtk_event_box_new ();
  button = gtk_button_new_with_label (c_label);
  gtk_container_add (GTK_CONTAINER (eventbox), button);
  gtk_widget_show (button);

  gdk_threads_leave ();

  (*env)->ReleaseStringUTFChars (env, label, c_label);
  NSA_SET_PTR (env, obj, eventbox);
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_connectSignals
  (JNIEnv *env, jobject obj)
{
  void *ptr;
  jobject *gref;
  GtkWidget *button;

  ptr = NSA_GET_PTR (env, obj);
  gref = NSA_GET_GLOBAL_REF (env, obj);

  gdk_threads_enter ();

  button = gtk_bin_get_child (GTK_BIN (ptr));

  g_signal_connect (G_OBJECT (ptr), "event",
                    G_CALLBACK (pre_event_handler), *gref);

  g_signal_connect (G_OBJECT (button), "event",
                    G_CALLBACK (pre_event_handler), *gref);

  g_signal_connect (G_OBJECT (button), "focus-in-event",
                    G_CALLBACK (focus_in_cb), *gref);

  g_signal_connect (G_OBJECT (button), "focus-out-event",
                    G_CALLBACK (focus_out_cb), *gref);

  g_signal_connect_after (G_OBJECT (button), "pressed",
                          G_CALLBACK (block_expose_events_cb), *gref);

  g_signal_connect_after (G_OBJECT (button), "released",
                          G_CALLBACK (block_expose_events_cb), *gref);

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL 
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_gtkSetLabel
  (JNIEnv *env, jobject obj, jstring jtext)
{
  const char *text;
  GtkWidget *button;
  GtkWidget *label;
  void *ptr;

  ptr = NSA_GET_PTR (env, obj);

  text = (*env)->GetStringUTFChars (env, jtext, NULL);

  gdk_threads_enter ();

  button = gtk_bin_get_child (GTK_BIN (ptr));
  label = gtk_bin_get_child (GTK_BIN (button));
  gtk_label_set_text (GTK_LABEL (label), text);

  gdk_threads_leave ();

  (*env)->ReleaseStringUTFChars (env, jtext, text);
}

JNIEXPORT void JNICALL 
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_gtkWidgetModifyFont
  (JNIEnv *env, jobject obj, jstring name, jint style, jint size)
{
  const char *font_name;
  void *ptr;
  GtkWidget *button;
  GtkWidget *label;
  PangoFontDescription *font_desc;

  ptr = NSA_GET_PTR (env, obj);

  font_name = (*env)->GetStringUTFChars (env, name, NULL);

  gdk_threads_enter();

  button = gtk_bin_get_child (GTK_BIN (ptr));
  label = gtk_bin_get_child (GTK_BIN (button));

  font_desc = pango_font_description_from_string (font_name);
  pango_font_description_set_size (font_desc, size * dpi_conversion_factor);

  if (style & AWT_STYLE_BOLD)
    pango_font_description_set_weight (font_desc, PANGO_WEIGHT_BOLD);

  if (style & AWT_STYLE_ITALIC)
    pango_font_description_set_style (font_desc, PANGO_STYLE_OBLIQUE);

  gtk_widget_modify_font (GTK_WIDGET(label), font_desc);

  pango_font_description_free (font_desc);

  gdk_threads_leave();

  (*env)->ReleaseStringUTFChars (env, name, font_name);
}

JNIEXPORT void JNICALL 
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_gtkWidgetSetBackground
  (JNIEnv *env, jobject obj, jint red, jint green, jint blue)
{
  GdkColor normal_color;
  GdkColor prelight_color;
  GdkColor active_color;
  int prelight_red;
  int prelight_blue;
  int prelight_green;
  GtkWidget *button;
  void *ptr;

  ptr = NSA_GET_PTR (env, obj);

  normal_color.red = (red / 255.0) * 65535;
  normal_color.green = (green / 255.0) * 65535;
  normal_color.blue = (blue / 255.0) * 65535;

  /* This calculation only approximate the active color produced by
     Sun's AWT. */
  active_color.red = 0.85 * (red / 255.0) * 65535;
  active_color.green = 0.85 * (green / 255.0) * 65535;
  active_color.blue = 0.85 * (blue / 255.0) * 65535;

  /* There is no separate prelight color in Motif. */
  prelight_red = 1.15 * (red / 255.0) * 65535;
  prelight_green = 1.15 * (green / 255.0) * 65535;
  prelight_blue = 1.15 * (blue / 255.0) * 65535;

  prelight_color.red = prelight_red > 65535 ? 65535 : prelight_red;
  prelight_color.green = prelight_green > 65535 ? 65535 : prelight_green;
  prelight_color.blue = prelight_blue > 65535 ? 65535 : prelight_blue;

  gdk_threads_enter ();

  button = gtk_bin_get_child (GTK_BIN (ptr));

  gtk_widget_modify_bg (button, GTK_STATE_NORMAL, &normal_color);
  gtk_widget_modify_bg (button, GTK_STATE_ACTIVE, &active_color);
  gtk_widget_modify_bg (button, GTK_STATE_PRELIGHT, &prelight_color);

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL 
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_gtkWidgetSetForeground
  (JNIEnv *env, jobject obj, jint red, jint green, jint blue)
{
  GdkColor color;
  GtkWidget *button;
  GtkWidget *label;
  void *ptr;

  ptr = NSA_GET_PTR (env, obj);

  color.red = (red / 255.0) * 65535;
  color.green = (green / 255.0) * 65535;
  color.blue = (blue / 255.0) * 65535;

  gdk_threads_enter ();

  button = gtk_bin_get_child (GTK_BIN (ptr));
  label = gtk_bin_get_child (GTK_BIN (button));

  gtk_widget_modify_fg (label, GTK_STATE_NORMAL, &color);
  gtk_widget_modify_fg (label, GTK_STATE_ACTIVE, &color);
  gtk_widget_modify_fg (label, GTK_STATE_PRELIGHT, &color);

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_gtkActivate
  (JNIEnv *env, jobject obj)
{
  GtkWidget *button;
  void *ptr;

  ptr = NSA_GET_PTR (env, obj);

  gdk_threads_enter ();

  button = gtk_bin_get_child (GTK_BIN (ptr));
  gtk_widget_activate (GTK_WIDGET (button));

  gdk_threads_leave ();
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_gtkWidgetRequestFocus
  (JNIEnv *env, jobject obj)
{
  void *ptr;
  GtkWidget *button;

  ptr = NSA_GET_PTR (env, obj);

  gdk_threads_enter ();
  button = gtk_bin_get_child (GTK_BIN (ptr));
  gtk_widget_grab_focus (button);
  gdk_threads_leave ();
}

JNIEXPORT void JNICALL
Java_gnu_java_awt_peer_gtk_GtkButtonPeer_setNativeBounds
  (JNIEnv *env, jobject obj, jint x, jint y, jint width, jint height)
{
  GtkWidget *widget, *child;
  void *ptr;

  ptr = NSA_GET_PTR (env, obj);

  gdk_threads_enter ();

  widget = GTK_WIDGET (ptr);

  /* We assume that -1 is a width or height and not a request for the
     widget's natural size. */
  width = width < 0 ? 0 : width;
  height = height < 0 ? 0 : height;
  child = gtk_bin_get_child (GTK_BIN (widget));

  if (!(width == 0 && height == 0))
    {
      /* Set the event box's size request... */
      gtk_widget_set_size_request (widget, width, height);
      /* ...and the button's size request... */
      gtk_widget_set_size_request (child, width, height);
      /* ...and the label's size request. */
      gtk_widget_set_size_request (gtk_bin_get_child (GTK_BIN (child)), width,
						      height);
      if (widget->parent != NULL)
        gtk_fixed_move (GTK_FIXED (widget->parent), widget, x, y);
    }

  gdk_threads_leave ();
}

static gboolean
focus_in_cb (GtkWidget *widget __attribute((unused)),
             GdkEventFocus *event __attribute((unused)),
             jobject peer)
{
  gdk_threads_leave ();
  (*gdk_env())->CallVoidMethod (gdk_env(), peer,
                              postFocusEventID,
                              AWT_FOCUS_GAINED,
                              JNI_FALSE);
  gdk_threads_enter ();
  return FALSE;
}

static gboolean
focus_out_cb (GtkWidget *widget __attribute((unused)),
              GdkEventFocus *event __attribute((unused)),
              jobject peer)
{
  gdk_threads_leave ();
  (*gdk_env())->CallVoidMethod (gdk_env(), peer,
                              postFocusEventID,
                              AWT_FOCUS_LOST,
                              JNI_FALSE);
  gdk_threads_enter ();
  return FALSE;
}

static void
block_expose_events_cb (GtkWidget *widget, jobject peer)
{
  gdk_threads_leave ();
  (*gdk_env())->CallVoidMethod (gdk_env(), peer,
                              beginNativeRepaintID);
  gdk_threads_enter ();

  gdk_window_process_updates (widget->window, TRUE);

  gdk_threads_leave ();
  (*gdk_env())->CallVoidMethod (gdk_env(), peer,
                              endNativeRepaintID);
  gdk_threads_enter ();
}
