#include <stdio.h>

enum Weekday 
{
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

int main()
{
  printf("\n1 - Monday\n2 - Tuesday\n3 - Wednesday\n4 - Thursday\n5 - Friday\n6 - Saturday\n7 - Sunday");
  int num_day;
  do
  {
    printf("\nChoose number between 1 and 7 to choose the weekday you want:");
    scanf("%d", &num_day);
  } 
  while (num_day<1||num_day>7);
  switch(num_day)
  {
    case MONDAY: printf("\nIt is Monday."); break;
    case TUESDAY: printf("\nIt is Tuesday."); break;
    case WEDNESDAY: printf("\nIt is Wednesday."); break;
    case THURSDAY: printf("\nIt is Thursday."); break;
    case FRIDAY: printf("\nIt is Friday."); break;
    case SATURDAY: printf("\nIt is Saturday."); break;
    case SUNDAY: printf("\nIt is Sunday."); break;
  }

}