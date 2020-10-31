

#include<stdio.h>

main()
{
 int N,i,qtePares=0;
 int vet[50];
 
 printf("Quantos numeros ira Digitar?:");
 scanf("%i",&N);
 
 for(i=0; i<N; i++)
 {
 	printf("Digite o [%i] numero:",i +1);
 	scanf("%i",&vet[i]);
 }
 
 printf ("NUMEROS PARES:\n");
 
 for(i=0; i<N; i++)
 {
 	if(vet[i] %2 == 0) 
 	{
 	printf("%i\n",vet[i]);
 	qtePares = qtePares + 1; // contador de numeros Pares.
   }
   }
 	
 	printf("Quantidade de Pares: %i",qtePares);
}
