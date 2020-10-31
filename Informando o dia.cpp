/*Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro*/
#include<stdio.h>
 main(){
 	
 	int dias;
 	
 	printf("Informe um dia da Semana de 1 a 7!");
 	scanf("%i",&dias );
 	
 	
 	switch (dias){
 		
 		case 1:
 		printf("Domingo");
 		break;
 		case 2:
 		printf("Segunda");
 		break;
 		case 3:
 		printf("Terça");
 		break;
 		case 4:
 		printf("Quarta");
 		break;
 		case 5:
 		printf("Quinta");
 		break;
 		case 6:
 		printf("Sexta");
 		break;
 		case 7:
 		printf("Sabado");
 		break;
 		
 		default:
 		printf("erro!");
 		break;
	 }
	 return 0;
 }
