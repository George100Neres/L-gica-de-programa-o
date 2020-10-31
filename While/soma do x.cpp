/*Faça um programa que faça as operações enquanto o numero for diferente de 0*/

#include<stdio.h>

main()
{
 int x, soma=0;
 
 printf("Digite o primeiro numero:");
 scanf("%i",&x);
 
  while (x !=0 )
  {
  	soma = soma + x;
  	printf("Digite outro numero:");
  	scanf("%i",&x);
  	
  	printf("Soma %i",soma);
  }
}
