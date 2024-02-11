#ifndef SAFEINT_H
#define SAFEINT_H

struct SAFERESULT
{
  int value;
  char errorflag;
};

struct SAFERESULT safeadd(int a, int b);
struct SAFERESULT safesubtract(int a, int b);
struct SAFERESULT safemultiply(int a, int b);
struct SAFERESULT safedivide(int a, int b);
struct SAFERESULT safestrtoint(char string[]);

void message(int a, int b, long long var_argv1, long long var_argv2);

#endif
