/*Permita que o usuario consulte o valor armazenado a partir de um indice.*/

#include<stdlib.h>
#include<stdio.h>

main()
{
   int vetor[5];
   int i;
   int indice;
    for(i=0 ; i<5; i++)
    
   printf("Informe o valor da posicao do indice %i vetor\n",i);
   scanf("%d",&indice);  
   
   while(indice>=0 && indice<5)
   {
   
   printf("O valor daquela posicao eh %d: ", vetor[indice]);
   
   printf("Informe um indice a ser consultado:");
    scanf("%i", &indice);
}
}
