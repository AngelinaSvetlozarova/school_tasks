#include <string.h>
#include <stdio.h>
#include "transformation.h"

struct transformation print_num(char string[])
{
  struct transformation tmp;
  int FIRST=1;
  tmp.result=0;
  tmp.error[100]='\0';
  char sign;
  for(int i=0; string[i]!=0; i++)
  {
    if(FIRST==1)
    {
      if(((string[i]>='0')&&(string[i]<='9'))||(string[i]=='-')||(string[i]=='+'))
      {
        if((string[i]>='0')&&(string[i]<='9'))
        {
          tmp.result=(tmp.result*10)+(string[i]-'0');
        }
        else
        {
          sign=string[i];
        }
      }
      else
      {
        tmp.result=0;
        strcpy(tmp.error,"Invalid input string");
        break;
      }
      FIRST=0;
    }
    else
    {
       if((string[i]<'0')||(string[i]>'9'))
       {
          tmp.result=0;
          strcpy(tmp.error,"Invalid input string");
          break;
       }
       else
       {
          tmp.result=(tmp.result*10)+(string[i]-'0');
       }
    }
  }
  if (sign=='-') tmp.result=tmp.result*(-1);
  return tmp;
}