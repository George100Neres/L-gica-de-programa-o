/*Escreva um programa em C que apresente toda a parte da tabela ASCII (0.255 chars),escrevendo
em cada linha o código ASCII e o caractere correspondente.*/

#include<stdio.h>

main()
{

int i;

for(i=0 ; i<=255 ; i++)
  printf("%d  ->%c",i,(char) i);
}
