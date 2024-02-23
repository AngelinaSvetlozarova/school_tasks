#include <stdio.h>

int len_array(char *p)
{
  int len=1;
  while(*p != '\0') 
  {
    len++;
    p++;
  }
  return len;
}

int main()
{
  char first_name[] = "Mariana";
  char * p = first_name;
  int len = len_array(p);
  printf("The length of the array is {%d}.", len);
}