
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
  char personagem;
  printf("Escolha qual dos personagens Do Valorant vc gosta Mais");
  printf("Sage\n");
  printf("Raze\n");
  printf("Sova\n");
  printf("Reyna apl\n");
  printf("Brimstone\n");
  printf("Omen\n");
  
   printf("Faca a sua escolha soldado:");
   scanf("%c",&personagem);
   
   
  if (personagem == 'S'){
  	printf("Sage");
  }
  
  else if (personagem == 'R'){
  	printf("Raze");
  }
  
  else if ( personagem == 'O'){
  	printf("Omen");
  }

  else 
  
  printf("Nehum dos campeos");
return 0;

}
