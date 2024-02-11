#include <stdio.h>

int main()
{
  int a=18, b=12, PROSTO=1, res=1;
  int i=2;
  while(a!=1||b!=1)
  {
    PROSTO=1;
    for(int br=2;br<i;br++)
    {
      if(i%br==0)
      {
        PROSTO=0;
        break;
      }
    }
    if(PROSTO==1)
    {
      if((a%i==0)||(b%i==0))
      {
        res=res*i;
        if((a%i==0)&&(b%i==0))
        {
          a=a/i;
          b=b/i;
        }
        else
        {
          if(a%i==0) a=a/i;
          else  b=b/i;
        }
      }
    }
    if((a%i!=0)&&(b%i!=0)) i++;
  }
  printf("%d",res);
}