/*Desenvolva o algoritmo que inicialize um vetor de 15 elementos com os valores de 3,6,9,12...,45
e,ao final, imprime o vetor no formato da tabela.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  int vetor[15];
  int i,j;
  
  for( i=0 ; i<15 ;i++)
  {
  	vetor[i] = (i + 1)  * 3; 
  }
   for( i=0 ; i < 15 ; i++)
   {
   	printf("%d %d\n", i,vetor[i]);
   }
}
