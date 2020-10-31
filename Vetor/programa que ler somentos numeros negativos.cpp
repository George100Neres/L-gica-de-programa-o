/*Fazer um programa que leia*/

#include<stdio.h>

main()
{
 int N,i;
 int vet[9];
 
 printf("Digite quantos numeros vc ira digitar:");
 scanf("%d",&N);
 
 for(i=0; i<N; i++)
 {
 	printf("Digite um numero:");
 	scanf("%i",&vet[i]);
 }
 printf("Numeros negativos:");
 
 for(i=0; i<N; i++)
 {
 	if (vet[i] < 0 ){
 		printf("%i",vet[i]);
	 }
 }
 
}
