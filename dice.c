#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
  int A=0;
  int B=0;
  int total=0;
  char str[15];
  srand(time(NULL));
  printf("What is your name?\n");
  scanf("%s",str);
  printf("Hello,%s!\n",str);
  A = rand()%6+1;
  B = rand()%6+1;
  total = A+B;
  printf("Die 1:%d\n",A);
  printf("Die 2:%d\n",B);
  printf("Total :%d\n",total);
  
}
