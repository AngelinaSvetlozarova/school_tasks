#include <stdio.h>
#include "safeint.h"
#include <stdlib.h>

void message(int a, int b, long long var_argv1, long long var_argv2)
{
  if (a!=var_argv1||b!=var_argv2)
  {
    if(a!=var_argv1) printf("The first number exceeds the permissible values.\n");
    if(b!=var_argv2) printf("The second number exceeds the permissible values.\n");
  }
  else printf("There is overflow or underflow.\n");
}