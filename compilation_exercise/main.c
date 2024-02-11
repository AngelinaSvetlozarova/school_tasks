#include <stdio.h>
#include "transformation.h"

int main(void)
{
  char string[100]="-12345";
  struct transformation tmp;
  tmp=print_num(string);
  printf("\nResult:%ld\nError:", tmp.result);
  puts(tmp.error);
}