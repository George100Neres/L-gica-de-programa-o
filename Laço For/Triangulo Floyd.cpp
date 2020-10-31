/* Escreva um programa que dado um numero inteiro positivo N,
imprima N linhas do chamado Triangulo de Floyd:*/

#include<stdio.h>

int main(){
	
 int N =20;
  int i,j, c=0;
  for(i=1; i<N; i++){
  	for(j=1; j<i; j++){
  	c++;
  	printf("*",c);
	  }
	printf("\n");
  }
}
