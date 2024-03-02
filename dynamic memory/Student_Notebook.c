#include <stdio.h>
#include <stdlib.h>
#define MISTAKE if (grades == NULL) \
              { \
                  printf("\nOut of memmory."); \
                  exit(1); \
              } \

int main()
{
  int num_of_grades = 0;
  float * avg = (float *)malloc(sizeof(float));
  float sum = 0;
  do
  {
    printf("Please, enter the number of student's grades:");
    scanf("%d", &num_of_grades);
  } 
  while (num_of_grades<0);
  
  float * grades = (float *)calloc(num_of_grades, sizeof(float));

  MISTAKE

  for(int i=0; i<num_of_grades; i++)
  {
    do
    {
      printf("\nPlease, enter the [%d] grade:", i+1);
      scanf("%f", &grades[i]);
    } 
    while (grades[i]<2||grades[i]>6);
    sum = sum + grades[i];
    
  }
  *avg = sum/num_of_grades;

  do
  {
    int op;
    printf("\nThe options are - \n1.Get the average grade\n2.Add a grade\n3.Delete a grade\n4.Exit");
    do
    {
      printf("\nChoose option:");
      scanf("%d", &op);
    } 
    while (op<1||op>4);

    switch(op)
    {
      case 1: if(num_of_grades>0) printf("\nThe average grade of student's grades is:%f", *avg);
              else printf("\nThere aren't grades.");
              break;
      case 2: num_of_grades = num_of_grades + 1;
              grades = (float *)realloc(grades, num_of_grades*sizeof(float));
              MISTAKE
              int i =  num_of_grades - 1;
              do
              {
                printf("\nPlease, enter the [%d] grade:", i+1);
                scanf("%f", &grades[i]);
              } 
              while (grades[i]<2||grades[i]>6);
              sum = sum + grades[i];
              *avg = sum/num_of_grades;
              break;      
      case 3: if(num_of_grades>0)
              {       
                num_of_grades = num_of_grades - 1;
                sum = sum - grades[num_of_grades];
                *avg = sum/num_of_grades;
                grades[num_of_grades] = 0;
                grades = (float *)realloc(grades, num_of_grades*sizeof(float));
                MISTAKE
              }
              else printf("\nThere aren't grades.");
              break;
      case 4: free(avg);
              free(grades); 
              exit(0);
              break;
    }
  } 
  while (1);
  
}