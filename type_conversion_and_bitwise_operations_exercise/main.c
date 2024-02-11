#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

int main()
{
  int a=0, b=3, c=4;
  if(a==0 && b==0)
  {
    findroots(a, b, c);
    printf("\n");
  }
  else
  {
    struct QuadraticRootsResult res=findroots(a, b, c);
    if(res.norealroots==0) printf("X1:%.2lf X2:%.2lf\n", res.x1, res.x2);
    else printf("There aren't real roots.\n");
  }
  
  float d=1.0, e=-4.000, f=-5;
  if(d==0 && e==0)
  {
    findroots(d, e, f);
    printf("\n");
  }
  else
  {
    struct QuadraticRootsResult res2=findroots(d, e, f);
    if(res2.norealroots==0) printf("X1:%.2lf X2:%.2lf\n", res2.x1, res2.x2);
    else printf("There aren't real roots.\n");
  }

  double g=1.0000, h=-8, i=15.00;
  if(g==0 && h==0)
  {
    findroots(g, h, i);
    printf("\n");
  }
  else
  {
    struct QuadraticRootsResult res3=findroots(g, h, i);
    if(res3.norealroots==0) printf("X1:%.2lf X2:%.2lf", res3.x1, res3.x2);
    else printf("There aren't real roots.");
  }
}