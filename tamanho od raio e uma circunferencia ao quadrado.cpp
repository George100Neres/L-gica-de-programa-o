/*Dado o tamanho do raio de uma circunfer�ncia ao quarado , calcular a �rea e o per�metro da mesma.*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14       //uma contante da variavel PI
main(){
	
  float raio,area,perimetro;
  
  printf("\nInforme o valor do raio:");
  scanf("%f", &raio);
  
  perimetro = 2 *PI * raio;
  area =PI * raio * raio;

  
 	printf("Perimetro %f e a Area e:%f",area,perimetro);
}
