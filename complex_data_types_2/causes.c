#include <stdio.h>

typedef struct participant
{
  char firstname[20];
  char secondname[20];
  char thirdname[20];
  char email[1000];
  char phone_number[20];
}Participant;

typedef struct answer
{
  Participant participant;
  enum
  {
    false,
    true
  }participance;
}Answer;

typedef struct cause
{
  char name[100];
  char description[1000];
  struct 
  {
    int date;
    enum
    {
      January = 1,
      February,
      March,
      April,
      May,
      June,
      July,
      August,
      September,
      October,
      November,
      December
    }month;
    int year;
    struct causes
    {
      int hour;
      double minutes;
    }hour_for_cause;
    
  }date_for_cause;
  Answer answers[100];
}Cause;

void print_cause(Cause variable)
{
  printf("\nThe name of the cause is:%s", variable.name);
  printf("\nThe description of the cause is:%s", variable.description);
}

void print_date_for_cause(Cause variable)
{
  printf("\nThe date of the cause is:%d", variable.date_for_cause.date);
  printf("\nThe month of the cause is:%d", variable.date_for_cause.month);
  printf("\nThe year of the cause is:%d", variable.date_for_cause.year);
}
void print_hour_for_cause(Cause variable)
{
  printf("\nThe hour of the cause is:%d", variable.date_for_cause.hour_for_cause.hour);
  printf("\nThe minutes of the cause are:%.2lf", variable.date_for_cause.hour_for_cause.minutes);
}

void print_the_data_for_the_participant(Cause variable, int i)
{
  printf("\nThe first name of the participant [%d]: %s", i+1, variable.answers[i].participant.firstname);
  printf("\nThe second name of the participant [%d]: %s", i+1, variable.answers[i].participant.secondname);
  printf("\nThe third name of the participant [%d]: %s", i+1, variable.answers[i].participant.thirdname);
  printf("\nThe email name of the participant [%d]: %s", i+1, variable.answers[i].participant.email);
  printf("\nThe phone number of the participant [%d]: %s", i+1, variable.answers[i].participant.phone_number);
}

void print_answer_of_the_participant(Cause variable, int i)
{
  printf("\nThe answer of the participant [%d]: %d", i+1, variable.answers[i].participance);
}

void main_function(Cause variable, int br_of_participants)
{
  print_cause(variable);
  print_date_for_cause(variable);
  print_hour_for_cause(variable);
  for(int i = 0; i<br_of_participants; i++)
  {
    print_the_data_for_the_participant(variable, i);
    print_answer_of_the_participant(variable, i);
  }
}

int main()
{
  Cause causes[2] = {
    [0] = {
    .name = "Ecology",
    .description = "This cause helps people to be ecologic.It learns them living a healthy life and not pollute the environment.",
    .date_for_cause = {
      .date = 12,
      .month = March,
      .year = 2024,
      .hour_for_cause = {
      .hour = 5,
      .minutes = 40
      }
      },
      .answers = {
        [0] = {
          .participant = {
            .firstname = "Martin",
            .secondname = "Angelov",
            .thirdname = "Georgiev",
            .email = "martin_a_g@gmail.com",
            .phone_number = "0899814844"
          },
          .participance = true
        },
        [1] = {
          .participant = {
            .firstname = "Angel",
            .secondname = "Marinov",
            .thirdname = "Penev",
            .email = "angel_m_p@gmail.com",
            .phone_number = "0882500238"
          },
          .participance = false
        },
        [2] = {
          .participant = {
            .firstname = "Gabriela",
            .secondname = "Dobreva",
            .thirdname = "Dobreva",
            .email = "gabriela_d_d@gmail.com",
            .phone_number = "0882500238"
          },
          .participance = true
        }
      }
    },
    [1] = {
    .name = "Animals",
    .description = "This cause helps people to start to love animals.It learns them living a pet loving life and gives homeless pets the love they deserve.",
    .date_for_cause = {
      .date = 25,
      .month = August,
      .year = 2025,
      .hour_for_cause = {
      .hour = 6,
      .minutes = 50
      }
      },
      .answers = {
        [0] = {
          .participant = {
            .firstname = "Ioan",
            .secondname = "Svetlozarov",
            .thirdname = "Kopchev",
            .email = "ioan_s_k@gmail.com",
            .phone_number = "0882435678"
          },
          .participance = true
        },
        [1] = {
          .participant = {
            .firstname = "Mariq",
            .secondname = "Simeonova",
            .thirdname = "Ilieva",
            .email = "mariq_s_i@gmail.com",
            .phone_number = "0889956432"
          },
          .participance = false
        }
    }
  }

  };
  main_function(causes[0], 3);
  main_function(causes[1], 2);
}