/* ValueOfNode.java -- 
   Copyright (C) 2004 Free Software Foundation, Inc.

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

package gnu.xml.transform;

import javax.xml.namespace.QName;
import javax.xml.transform.TransformerException;
import org.w3c.dom.Document;
import org.w3c.dom.Node;
import org.w3c.dom.Text;
import gnu.xml.xpath.Expr;

/**
 * A template node representing an XSLT <code>value-of</code> instruction.
 *
 * @author <a href='mailto:dog@gnu.org'>Chris Burdess</a>
 */
final class ValueOfNode
  extends TemplateNode
{

  final Expr select;
  final boolean disableOutputEscaping;

  ValueOfNode(TemplateNode children, TemplateNode next, Expr select,
              boolean disableOutputEscaping)
  {
    super(children, next);
    this.select = select;
    this.disableOutputEscaping = disableOutputEscaping;
  }

  TemplateNode clone(Stylesheet stylesheet)
  {
    return new ValueOfNode((children == null) ? null :
                           children.clone(stylesheet),
                           (next == null) ? null :
                           next.clone(stylesheet),
                           select.clone(stylesheet),
                           disableOutputEscaping);
  }

  void doApply(Stylesheet stylesheet, QName mode,
             Node context, int pos, int len,
             Node parent, Node nextSibling)
    throws TransformerException
  {
    Object ret = select.evaluate(context, pos, len);
    String value = Expr._string(context, ret);
    //System.err.println("value-of: "+context+" "+ select + " -> "+ value);
    if (value != null && value.length() > 0)
      {
        Document doc = (parent instanceof Document) ?
          (Document) parent : parent.getOwnerDocument();
        Text textNode = doc.createTextNode(value);
        if (disableOutputEscaping)
          {
            textNode.setUserData("disable-output-escaping", "yes", stylesheet);
          }
        if (nextSibling != null)
          {
            parent.insertBefore(textNode, nextSibling);
          }
        else
          {
            parent.appendChild(textNode);
          }
      }
    // value-of doesn't process children
    if (next != null)
      {
        next.apply(stylesheet, mode,
                   context, pos, len,
                   parent, nextSibling);
      }
  }

  public String toString()
  {
    StringBuffer buf = new StringBuffer(getClass().getName());
    buf.append('[');
    buf.append("select=");
    buf.append(select);
    if (disableOutputEscaping)
      {
        buf.append(",disableOutputEscaping");
      }
    buf.append(']');
    return buf.toString();
  }
  
}
