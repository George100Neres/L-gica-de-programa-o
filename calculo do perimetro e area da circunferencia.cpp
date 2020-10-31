/*Escreva um programa que calcule o perímetro e a área e uma circuferência*/

#include<stdio.h>
#include<stdlib.h>

 main(){
 	float raio,perimetro;
 	double Pi = 3.1415987, area;
 	
 	printf("Introuza o Raio da Circunferência: ");
 	scanf("%f", &raio);
 	area = Pi * raio * raio;
 	perimetro = 2 * Pi * raio;
 	
 	printf("Area = %f\nPerimetro = %f\n", area, perimetro);
 }
