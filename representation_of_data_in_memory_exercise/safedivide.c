#include <stdio.h>
#include "safeint.h"
#include <stdlib.h>

int main(int argc, char ** argv)
{
  int int_argv1 = atoi(argv[1]);
  int int_argv2 = atoi(argv[2]);
  long long var_argv1=atoll(argv[1]);
  long long var_argv2=atoll(argv[2]);
  struct SAFERESULT res=safedivide(int_argv1, int_argv2);
  if(res.errorflag==0 && int_argv1==var_argv1 && int_argv2==var_argv2) printf("Res:%d",res.value);
  else message(int_argv1, int_argv2, var_argv1, var_argv2);
}
