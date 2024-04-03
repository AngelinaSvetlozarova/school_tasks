#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
{
  char name[16];
  int num;
  double avg;
} Student;

int main()
{
  int op, br = 0;
  Student *students = NULL;
  do
  {
    printf("\n\nThe options are:\n1.Add a student\n2.Show the students.\n3.Exit");
    do
    {
      printf("\nChoose an option:");
      scanf("%d", &op);
    } 
    while (op<1||op>3);
    switch(op)
    {
      case 1: br++;
              students = (Student*)realloc(students, br*sizeof(Student));
              if(students == NULL)
              {
                printf("\nOut of memmory.");
                exit(1);
              }
              do
              {
                printf("\nEnter the name of the student [%d] which contains 15 symbols max:", br);
                getchar();
                gets(students[br-1].name);
              } 
              while (strlen(students[br-1].name)>15);
              printf("\nEnter the number of the student [%d]:", br);
              scanf("%d", &students[br-1].num);
              do
              {
                printf("\nEnter the average grade of the student [%d]:", br);
                scanf("%lf", &students[br-1].avg);
              } 
              while (students[br-1].avg<2 || students[br-1].avg>6); 
              break;  
      case 2: printf("%-15s", "name");
              printf("%15s", "number");
              printf("%15s", "average grade");
              for(int i = 0; i<br; i++)
              {
                printf("\n\n%-15s", students[i].name);
                printf("%15d", students[i].num);
                printf("%15.2lf", students[i].avg);
              }
              break;
      case 3: free(students);
              exit(0);
              break;
    }
  } 
  while (1);
  


}