#include <stdio.h>
#include <limits.h>

int main()
{
  printf("%-4s %-10s   %-6s  %-4s  %-20s  %-20s  %-10s  %-4s\n\n", "num", "type", "format", "size", "max value", "min value", "format uns", "max unsigned");
  printf("%-4d %-10s - %-6s; %-4d; %-20d; %-20d; %-10s; %-4u\n", 1, "char", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%c", UCHAR_MAX);
  printf("%-4d %-10s - %-6s; %-4d; %-20hd; %-20hd; %-10s; %-4hu\n", 2, "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
  printf("%-4d %-10s - %-6s; %-4d; %-20d; %-20d; %-10s; %-4u\n", 3, "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
  printf("%-4d %-10s - %-6s; %-4d; %-20ld; %-20ld; %-10s; %-4lu\n", 4, "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
  printf("%-4d %-10s - %-6s; %-4d; %-20lld; %-20lld; %-10s; %-4llu\n", 5, "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);
}