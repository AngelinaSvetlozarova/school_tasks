#include <stdio.h>

char **strhalf(char string[], char **pp)
{
  int len = 0;
  for(int i=0; string[i] != '\0'; i++)
  {
    len++;
  }
  int half_len = len/2;
  char *p = &(string[half_len]);
  pp = &p;
  return pp;
}

int main()
{
  char string[] = "Hello, world";
  char **pp;
  char **p = strhalf(string, pp);
  printf("%s", *p);
}