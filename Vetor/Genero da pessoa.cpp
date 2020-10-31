
#include<stdio.h>

int main(){
	
  int i,N;
  float alturas [99];
  char generos[3] = {'M','F'};
  
  printf("Quantas pessoas serao digitadas?");
  scanf("%i",&N);
  
  for(i=0; i<N; i++){
  	printf("Altura da [%i] Pessoa:",i + 1);
  	scanf("%f",&alturas[i]);
  	
  	
  	
  	printf("Genero da  Pessoa:");
  	scanf("%c\n", &generos[i]);
  	
  }
}
