/*Faça um programa que leia N números reais e armazenos em um vetor.Em seguido:
Imprimi todos os elementos dos vetores
Mostrar na tela a soma e a media dos vetores.*/

#include<stdio.h>
main()
{
 int  N,i;
 float soma=0,media;
 float vet[15];
 
 printf("Quantos numeros vc vai digitar?");
 scanf("%i",&N);
 
 for(i=0; i<N; i++)
 {
 	printf("Digite os numeros reais:");
 	scanf("%f\n",&vet[i]);
 }
 
   printf("Valores:");
 for(i=0; i<N; i++)
 {
 printf("%.2f  ",vet[i]);
 }
 
 for (i=0; i<N; i++)
 {
 	soma =soma + vet[i];
 }
 
 printf("SOMA =%.2f\n",soma);
 
 media = soma / N;
 
 printf("Media %3.f",media);
 
}
