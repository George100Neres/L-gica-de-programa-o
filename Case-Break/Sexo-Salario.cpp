/* Escreva um programa que calcule o imposto pago por mulheres e por homens, sabendo que as mulheres
pagam por 10% de impostos e que os homens pagam mais 5% do que as mulheres.*/

#include<stdio.h>

 main(){
 	
 float salario, imposto =0;
 char sexo;
 
 printf("Introduza o Salário: ");
 scanf("%f",&salario);
 printf("Qual o Sexo?");
 scanf(" %c",&sexo);
 
 switch (sexo){
 	
 	case 'f': 
	  case 'F':
 		imposto = 0.10;
 		break;
 		
 		case 'm':
 		case'M':
 		imposto = 0.15;
 		break;
 }
    salario = salario *imposto;
	
	printf("Valor do salario com Imposto e %.2f",salario);	
 
 }
