/*Faca um programa que para um vetor de 10 elementos, inteiros entrados via,
teclado,transforme  para zero todos os elementos negativos e imprima os valores.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  int X[10],cont;
  for(cont=0; cont<10; cont++)
  {
  	printf("Digite um valor numerico:");
  	scanf("%d",&X[cont]);
  	
  	if(X[cont <10]<0)
  	X[cont]=0;
  	
  	
  }
  for(cont=0; cont<10; cont++)
  {
  	printf("%d", X[cont]);
  	
  }
  
}
