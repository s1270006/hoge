#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  
  int i, heads = 0, tails = 0;
  
  printf("Tossing a coin...\n");
  srand((unsigned)time(NULL));
  
  for(i = 1; i <= 3; i++)
  {
    if(rand()%2 == 0)
    {
      printf("Round %d: Heads\n",i);
      heads++;
    }
    else
    {
      printf("Round %d: Tails\n",i);
      tails++;  
    }
  }
  printf("Heads: %d,Tails: %d\n",heads,tails);
  
  return 0;
}