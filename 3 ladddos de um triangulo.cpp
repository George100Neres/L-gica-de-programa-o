/*Dado os tr�s lados de um tri�ngulo determinar o per�metro do mesmo. */
#include<stdio.h>

int main(){
	
	float lad1,lad2,lad3,per;
	
	printf("Digite os tres lados de um triangulo:");
	scanf("%f",&lad1,&lad2,&lad3);
	
	per= lad1+lad2+lad3;
	
	printf("O perimetro do trinagulo e %f:",per);
}


