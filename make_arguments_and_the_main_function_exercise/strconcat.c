#include <stdio.h>
#include "mystrings.h"

int main(int argc, char ** argv)
{
  if(argc!=3) printf("There are wrong arguments.");
  else
  {
    if(strlength(argv[1])>50||strlength(argv[2])>50) printf("The maximum size of character strings passed as arguments must not exceed 50.");
    else
    {
      strconcat(argv[1], argv[2]);
      printf("New string:%s", argv[1]);
    }
  }
}