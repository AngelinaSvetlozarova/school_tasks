#include <stdio.h>
#include "mystrings.h"

int strlength(char string1[])
{
  int len=0;
  for(int i=0; string1[i]!='\0';i++)
  {
    len++;
  }
  return len;
}

void strconcat(char string1[], char string2[])
{
  int len=strlength(string1);
  int i=len;
  for(int j=0;string2[j]!='\0';j++)
  {
    string1[i]=string2[j];
    i++;
  }
  string1[i]='\0';
}

int strcompare(char string1[], char string2[])
{
  int len1=strlength(string1);
  int len2=strlength(string2);
  int maxlen;
  if(len1>len2) maxlen=len1;
  else maxlen=len2;
  for(int i=0;i<maxlen;i++)
  {
      if(string1[i]>string2[i]) return 1;
      if(string1[i]<string2[i])  return -1;
  }
  return 0;
}