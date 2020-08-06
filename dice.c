#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NAME_MAX 30

int main(){
  
  int i, heads = 0, tails = 0;
  char name[NAME_MAX];
  
  printf("Who are you?\n>");
  
  for(i = 0; i < NAME_MAX; i++)
  {
    scanf("%c",&name[i]);
    if(name[i] == '\n'){
      name[i] = '!';
      for(i = i + 1; i < NAME_MAX; i++){
        name[i] = '\0';
      }
    }
  }
  printf("Hello, %s\n",name);
  
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

    for(i = 0; i < NAME_MAX; i++){
      if(name[i] == '!')break;
      printf("%c",name[i]);
    }
    if(heads > tails)printf(" won!\n");
    else printf(" lost...\n");
  
  return 0;
}