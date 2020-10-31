/* Dado a base e a altura de um retângulo ,construir um algoritmo
que calcule e informe seu perimetro e sua area*/
#include<stdio.h>
main(){
	
	float base,lado,perimetro,altura,area;
	
	printf("Informe o valor do da base e a altura de um triangulo:");
	
	printf("\nBase:");
	scanf("%f",&base);
	
	printf("\nAltura:");
	scanf("%f", &altura);
	
	perimetro = 2 * base + 2 * altura;
	area = base * altura;
	
	printf("Perimetro e: %.2f e Area %.2f \n\n", perimetro,area);
}

