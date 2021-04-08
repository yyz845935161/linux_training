#include"ProcBar.h"

void process_bar()
{
  char char1[NUM]={0};
  const char* char2 = "|/-\\";
  int i=0;
  while(i<101)
  {
    printf("[%-100s][%-3d%%][%c]\r",char1,i,char2[i%4]);
    fflush(stdout);
    char1[i++]='#';
    usleep(60000);

  }
  printf("\n");
}
