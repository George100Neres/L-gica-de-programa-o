/*Faça um algoritmo que leia 10 números  e os coloque em um vetor. Ao final,apresenta na 
tela os valores armazenados nas posições pares.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
   int vetor[10];
   int i;
   
   for( i=0 ; i<10; i++)
   {
   	printf("Informe o valor da posição %i do vetor : ",i);
   	scanf("%i",&vetor[i]);          //Começa do 0 e vai até o 9.
   	
   }
     for (i=0 ; i <10 ; i+=2)
     {
     	printf("%d -", vetor[i]);
	 }
}
