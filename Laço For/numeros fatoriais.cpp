/*Fazer um programa para ler um numero fNatural N (valor máximo:15),e depois calcular e mostrar o N fatorial.*/

#include<stdio.h>

main()
{
	
 int i,N,fat;
 
	printf("Digite o valor de N:");
	scanf("%i",&N);
	
	fat =1;
	
  for(i=1; i<N; i++)
  {
  	fat = fat * i;
  }	
  
  printf("Fatorial %i",fat);
}
