/*Escreva um programa que solicite ao usuario a idade, o montante a depositar e 
o n° a conta em que se realizar o depósito.*/

#include<stdio.h>
#include<stdlib.h>

 main(){
 	int idade,montante,n_conta;
 	
 	printf("Qual a Idade?");
 	scanf("%i", &idade);
 	printf("Qual o montante a depositar? ");
 	scanf("%i", &montante);
 	printf("Qual o numero da conta: ");
 	scanf("%i",&n_conta);
 	
 	printf("Uma pessoa de %i anos depositou %i$ na conta %i\n",idade,montante,&n_conta);
 }
