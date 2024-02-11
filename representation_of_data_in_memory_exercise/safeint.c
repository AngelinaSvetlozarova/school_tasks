#include <stdio.h>
#include "safeint.h"
#include <limits.h>

struct SAFERESULT safeadd(int a, int b)
{
  struct SAFERESULT res;
  res.value=a+b;
  if((a>0&&b>0)&&res.value<0) res.errorflag=1;
  else
  {
    if((a<0&&b<0)&&res.value>0) res.errorflag=1;
    else res.errorflag=0;
  }
  return res;
}
struct SAFERESULT safesubtract(int a, int b)
{
  struct SAFERESULT res;
  res.value=a-b;
  if((a<0&&b>0)&&res.value>0) res.errorflag=1;
  else
  {
    if((a>0&&b<0)&&res.value<0) res.errorflag=1;
    else res.errorflag=0;
  }
  return res;
}
struct SAFERESULT safemultiply(int a, int b)
{
  struct SAFERESULT res;
  if(a==INT_MIN&&b==-1) res.errorflag=1;
  else
  {
    res.value=a*b;
    if((a!=0 && (res.value/a)!=b) || (b!=0 && (res.value/b)!=a)) res.errorflag=1;
    else res.errorflag=0;
  }
  return res;
}
struct SAFERESULT safedivide(int a, int b)
{
  struct SAFERESULT res;
  if((a==INT_MIN&&b==-1)||b==0) res.errorflag=1;
  else
  {
    res.value=a/b;
    res.errorflag=0;
  }
  return res;
}
struct SAFERESULT safestrtoint(char string[])
{
  struct SAFERESULT res, var;
  int i;
  res.value=0;
  for(i=0; string[i]!='\0'; i++)
  {
    if(string[i]>='0'&&string[i]<='9')
    {
      var=safemultiply(res.value, 10);
      if(var.errorflag==1)
      {
        res.errorflag=1;
        break;
      }
      else
      {
        res.value=res.value*10;
        var=safeadd(res.value, (string[i]-'0'));
        if(var.errorflag==1)
        {
          res.errorflag=1;
          break;
        }
        else
        {
          res.value=res.value+(string[i]-'0');
          res.errorflag=0;
        }
      }
    }
  }
  return res;
}