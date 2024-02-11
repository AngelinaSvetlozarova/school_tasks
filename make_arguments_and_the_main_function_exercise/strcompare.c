#include <stdio.h>
#include "mystrings.h"

int main(int argc, char ** argv)
{
  if(argc!=3) printf("There are wrong arguments.");
  else
  {
    int res;
    res=strcompare(argv[1], argv[2]);
    printf("Res:%d", res);
  }
}