
#include<stdio.h>

main()
{
   int i,N,j,linha,coluna;
   float soma;
   float vet[9] [9];
   
   printf("QUal a ordem da Matriz:?");
   scanf("%i",&N);
   
   for(i=0; i<N; i++){
   	for(j=0; j<N; j++){
   		printf("Elemento [%i %i]",i,j);
   		scanf("%f",&vet[i][j]);
	   }
   }
   
   soma=0;
   
   for(i=0; i<N; i++){
   	for(j=0; j<N; j++){
   	  if(vet [i][j] > 0 )
		 soma = soma + vet[i][j];
	   }
   }
   
   printf("Soma dos Positivos:%2.f\n ",soma);
   
   printf("Escolha uma Linha:");
   scanf("%i",&linha);
     for(j=0; j<N; j++){
     	printf("%f [%i %i]",vet[i] [j]);
	 }
	 
	  
   printf("Escolha uma Coluna:");
   scanf("%i",&coluna);
     for(i=0; i<N; i++){
     	printf("%f [%i %i]",vet[i] [j]);
	 }
	 
	 printf("Diagonal Principal:");
	 for(i=0; i<N; i++){
	 	printf("%f [%i  %i]",vet[i] [i]);			//msm linha e coluna.
	 }
}
