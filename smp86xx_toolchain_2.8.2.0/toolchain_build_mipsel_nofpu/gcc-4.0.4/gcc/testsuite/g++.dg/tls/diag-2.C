/* Invalid __thread specifiers.  */

__thread extern int g1;		/* { dg-error "'__thread' before 'extern'" } */
__thread static int g2;		/* { dg-error "'__thread' before 'static'" } */
__thread __thread int g3;	/* { dg-error "duplicate '__thread'" } */
typedef __thread int g4;	/* { dg-error "multiple storage classes" } */

void foo()
{
  __thread int l1;		/* { dg-error "implicitly auto and declared '__thread'" } */
  auto __thread int l2;		/* { dg-error "multiple storage classes" } */
  __thread extern int l3;	/* { dg-error "'__thread' before 'extern'" } */
  register __thread int l4;	/* { dg-error "multiple storage classes" } */
}

__thread void f1 ();		/* { dg-error "invalid for function" } */
extern __thread void f2 ();	/* { dg-error "invalid for function" } */
static __thread void f3 ();	/* { dg-error "invalid for function" } */
__thread void f4 () { }		/* { dg-error "invalid for function" } */

void bar(__thread int p1);	/* { dg-error "(invalid in parameter)|(specified for parameter)" } */

struct A {
  __thread int i;		/* { dg-error "storage class specified" } */
};
