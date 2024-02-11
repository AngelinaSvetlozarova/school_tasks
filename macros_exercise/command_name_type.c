#include <stdio.h>
#define COMMAND(NAME,TYPE) TYPE##_##NAME##_##command
#define DEFINE_COMMAND(NAME,TYPE) void COMMAND(NAME,TYPE)(void)
DEFINE_COMMAND(quit,external);
DEFINE_COMMAND(quit,internal);
int main()
{
  COMMAND(quit,external)();
  COMMAND(quit,internal)();
}
DEFINE_COMMAND(quit,external)
{
  printf("Hello!");
}
DEFINE_COMMAND(quit,internal)
{
  printf(" I am Andji.");
}
