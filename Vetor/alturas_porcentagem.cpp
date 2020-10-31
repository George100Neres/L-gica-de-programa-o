/* Fazer um programa para ler o nome, idade e alturas de N pessoas, conforme exemplo.Depois, mostrar na 
tela a altura média das pessoas, e mostrar na tela a porcentagem de pessoas com menos de 16 anos, bem
como os nomes dessas pessoas caso houver. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {

char Nomes[50];
int i,N,idade[20],cont;
float alturas [5];
float soma,media,porcentagem;

printf("Quantas pessoas serao digitadas?");
scanf("%d",&N);

for(i=0; i<N; i++) {
  printf("Dados da %i pessoa\n",i +1);
  scanf(" %s",&Nomes[i]);
  printf("Idade?");
  scanf("%d",&idade[i]);
  printf("Altura?");
  scanf("%f",&alturas[i]);
}
  soma = 0;
  
  for(i=0; i<N; i++) {
  	soma = soma + alturas[i];
  	
  }
  
  media = soma / N;
  cont=0;
  
  for( i=0; i<N; i++) {
  	if (idade[i] < 16 ) {
  		cont = cont +1;
	  }
  }
  
  /* Aplicase a Formula da porcentagem ad Regra de 3 
Formula: N __________100%
 	   cont__________ X
 	   Res: X= cont * 100 / N*/
 	   
  porcentagem = cont * 100 /N;
  printf("Pessoas com menos de 16 anos:%f/n ",porcentagem);
 	   
  for(i=0; i<N; i++) {
  	if (idade[i] < 16) {
  	  printf(" %s/n",Nomes);
	  }
  }
}




