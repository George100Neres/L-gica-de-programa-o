/*Escreva um programa que determine se um dado n�mero N (digitado pelo usu�rio) �
primo ou n�o.*/

#include<stdio.h>
#include<stdlib.h>

 main(){
 	
 	int N,cont;
 	
 	printf("Digite algum valor: ");
 	scanf("%i",&N);
 	
 	
 	
 	if(N ==1){
 		printf("O numero e primo:",N);
	 }
	 else if (N> =2){
	 	printf("Nao e primo:",N);
	 }
 }
