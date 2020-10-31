#include<stdio.h>
#include<stdlib.h>

int main(){ //p = perimetro, l = lado, a = area
	
	float p,l,a;
	
	printf("Por Favor,Informe o valor ddo lado o quadrado:");
	scanf("%f", &l);
	
	p = 4 * l;
	a = l * l;
	
	printf("Perimetro %.2f . Area %.2f\n\n",a,p);
	
}
