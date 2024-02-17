#include <stdio.h>

int main()
{
  char name[255];
  fgets(name, 255, stdin);
  char *p = strchr(name, "\n");
  if(p != NULL)
  {
    *p = '\0';
  }
}