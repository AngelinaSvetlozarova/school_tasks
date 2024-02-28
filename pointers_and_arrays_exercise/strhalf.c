#include <stdio.h>

void strhalf(char string[], char **pp)
{
  int len = 0;
  for(int i=0; *(string + i) != '\0'; i++)
  {
    len++;
  }
  *pp = string + len/2;
}

int main()
{
  char string[] = "Hello, world";
  char *p = string;
  strhalf(string, &p);
  printf("%s", p);
}