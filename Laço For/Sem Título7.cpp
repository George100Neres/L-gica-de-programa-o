/*Escreva um programa que apresente toda a tabela do ASCII(0.255chars) escrevendd
em cada linha o codigo ASCII e o caractere correspondente*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  int i;
  
  
   for(i=0 ; i<=255 ; i++)
   printf("%d -> %c\n",i, (char) i);
}
