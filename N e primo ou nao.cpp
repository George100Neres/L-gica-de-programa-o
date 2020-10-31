/*Escreva um programa que determine se um dado número N (digitado pelo usuário) é
primo ou não.*/

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
