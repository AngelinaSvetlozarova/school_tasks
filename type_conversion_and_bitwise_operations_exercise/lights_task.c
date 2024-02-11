#include <stdio.h>

int main()
{
  unsigned char lights = 0;

  //unsigned char light1 = 1 << 0;
  //unsigned char light2 = 1 << 1;
  //unsigned char light3 = 1 << 2;
  //unsigned char light4 = 1 << 3;
  //unsigned char light5 = 1 << 4;
  //unsigned char light6 = 1 << 5;
  //unsigned char light7 = 1 << 6;
  //unsigned char light8 = 1 << 7;

  int op;
  do
  {
    printf("\nChoose option:\n1.Switch lights.\n2.Print state.\n3.Exit.");
    printf("\nOption:");
    scanf("\n%d", &op);
    switch(op)
    {
      int light, is_the_light_on;
      case 1:
        printf("Which light do you want to switch on/off?");
        scanf("%d", &light);
        is_the_light_on = (lights & (1<<(light-1))) == (1<<(light-1));
        if(is_the_light_on == 0)  lights = (1<<(light-1)) | lights;
        else lights = lights & (~(1<<(light-1)));
        break;
      case 2:
        printf("The light is on in rooms:");
        for (int i=7; i>=0; i--)
        {
          if(((lights<<i) & 128) == 128) printf(" %d", 8-i);
        }
        break;
      case 3:
        return 0;
    }
  }
  while(1);
}