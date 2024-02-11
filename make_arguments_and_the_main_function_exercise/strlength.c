#include <stdio.h>
#include "mystrings.h"

int main(int argc, char ** argv)
{
  if(argc!=2) printf("There are wrong arguments.");
  else
  {
    int len;
    len=strlength(argv[1]);
    printf("Length:%d", len);
  }
}