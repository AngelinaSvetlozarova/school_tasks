#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * readstring() 
{
  char temp[100];
  gets(temp);
  int len = strlen(temp);
  if(len >= 15)
  {
    printf("The maximum size of names/subjects is 15! Please enter the name/subject again.\n");
    return NULL;
  }
  char * string = NULL;
  string = (char *)realloc(string, len * sizeof(char));
  if (string == NULL) 
  {
    printf("Error allocating memory\n");
    exit(1);
  }
  strcpy(string, temp);
  return string;
}

int main()
{
  int br, br_st = 0;
  char **students = NULL;
  float **grades = NULL;
  do
  {
    printf("Number of subjects:");
    scanf("%d", &br);
  } 
  while (br<0);
  getchar();
  char ** subjects = (char **)malloc(br*sizeof(char*));
  if (subjects == NULL) 
  {
    printf("Error allocating memory\n");
    exit(1);
  }
  for(int i=0; i<br; i++)
  {
    printf("The [%d] subject is:", i+1);
    char *result = readstring();
    if(result != NULL)
    {
      subjects[i] = result;
    }
    else i--;
  }
  do
  {
    int op;
    printf("\nThe options are:\n1.Add a student\n2.Print the diary\n3.Exit");
    do
    {
      printf("\nChoose an option:");
      scanf("%d", &op);
    } 
    while (op<1||op>3);
    getchar();
    switch(op)
    {
      case 1: br_st++;
              students = (char**)realloc(students, br_st*sizeof(char*));
              if (students == NULL) 
              {
                printf("Error allocating memory\n");
                exit(1);
              }
              char *result;
              do
              {
                printf("The student [%d] is:", br_st);
                result = readstring();
                students[br_st-1] = result;
              } 
              while (result == NULL);
              grades = (float **)realloc(grades, sizeof(float *) * br_st);
              if (grades == NULL) 
              {
                printf("Error allocating memory\n");
                exit(1);
              }
              grades[br_st-1] = (float *)malloc(sizeof(float) * br);
              if (grades[br_st-1] == NULL) 
              {
                printf("Error allocating memory\n");
                exit(1);
              }
              printf("\n");
              for(int j=0; j<br; j++)
              {
                printf("The grade in %s is:", subjects[j]);
                scanf("%f", &grades[br_st-1][j]);
              }
              break;
      case 2: printf("%15s", " ");
              for(int i=0; i<br; i++)
              {
                printf("%15s", subjects[i]);
              }
              for(int i=0; i<br_st; i++)
              {
                printf("\n%-15s", students[i]);
                for(int j=0; j<br; j++)
                {
                  printf("%15.2f", grades[i][j]);
                }
              }
              break;
      case 3: for (int i = 0; i < br_st; i++) 
              {
                free(grades[i]);
                free(students[i]);
              }
              free(grades);
              free(students);
              for (int i =0; i < br; i++) 
              {
                free(subjects[i]);
              }
              free(subjects);
              exit(0);
              break;
    }
  } 
  while (1);
  
}