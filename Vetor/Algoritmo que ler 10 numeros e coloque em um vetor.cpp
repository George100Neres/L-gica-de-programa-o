/*Fa�a um algoritmo que leia 10 n�meros  e os coloque em um vetor. Ao final,apresenta na 
tela os valores armazenados nas posi��es pares.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
   int vetor[10];
   int i;
   
   for( i=0 ; i<10; i++)
   {
   	printf("Informe o valor da posi��o %i do vetor : ",i);
   	scanf("%i",&vetor[i]);          //Come�a do 0 e vai at� o 9.
   	
   }
     for (i=0 ; i <10 ; i+=2)
     {
     	printf("%d -", vetor[i]);
	 }
}
