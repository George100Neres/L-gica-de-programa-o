/*Faça um programa C que leia duas matrizes de
tamanho 3 x 3. Em seguida, compare os valores
das duas matrizes, nas respectivas posições, e
mostre quais números são iguais nas duas
matrizes, na mesma posição. Informe também a
posição.*/

#include<stdio.h>

main()
{
 int M,N,iguais;
 int vet[4] [4];
 
 for(M=0;M<4;M++){
  for(N=0; N<4; N++){
  	if(vet[M] [N] == vet[M] [N]);
  	iguais = vet[M] [N]++;
  	printf("matriz [%i %i]",iguais);
  }
}
 }
