/*Escreva um programa que leia um n�mero inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de n�mero 1. Se o n�mero n�o corresponder a um
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
 		printf("Ter�a");
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
