#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int aleatorio,tentativa;
  srand(time(NULL));
  aleatorio = rand()%20;
  for(int i = 5; i > 0;i--){
  printf("tente adivinhar, %d chances restantes\n",i);
  scanf("%d",&tentativa);
    if(tentativa > aleatorio){
      printf("o numero é menor\n");
    }else if(aleatorio > tentativa){
      printf("o numero é maior\n");
    }else if(tentativa == aleatorio){
      printf("certa resposta");
      i = -15;
    }

    
  }
  return 0;
}