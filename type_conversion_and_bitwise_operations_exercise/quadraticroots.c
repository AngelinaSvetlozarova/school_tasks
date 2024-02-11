#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c)
{
  double D;
  struct QuadraticRootsResult res;
  if(a!=0)
  {
    D=b*b-4*a*c;
    if(D>=0)
    {
      res.x1=((-b)-sqrt(D))/(2*a);
      res.x2=((-b)+sqrt(D))/(2*a);
    }
    else
    {
      res.norealroots=1;
      return res;
    }
  }
  else
  {
    if(b==0)
    {
      printf("x is every number");
    }
    else
    {
      if(c==0)
      {
        res.x1=0;
        res.x2=0;
      }
      else
      {
        res.x1=(-c)/b;
        res.x2=(-c)/b;
      }
    }
  }
  res.norealroots=0;
  return res;
}