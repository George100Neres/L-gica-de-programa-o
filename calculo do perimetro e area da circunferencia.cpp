/*Escreva um programa que calcule o per�metro e a �rea e uma circufer�ncia*/

#include<stdio.h>
#include<stdlib.h>

 main(){
 	float raio,perimetro;
 	double Pi = 3.1415987, area;
 	
 	printf("Introuza o Raio da Circunfer�ncia: ");
 	scanf("%f", &raio);
 	area = Pi * raio * raio;
 	perimetro = 2 * Pi * raio;
 	
 	printf("Area = %f\nPerimetro = %f\n", area, perimetro);
 }
