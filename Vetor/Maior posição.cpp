

#include<stdio.h>

main()
{
  int i,N,posMaior;
  float vet[99],maior;
  
  printf("Quantos numeros ira Digitar?:");
  scanf("%i",&N);
  
  for(i=0; i<N; i++)
  {
   printf("Digite um numero:");
   scanf("%f",&vet[i]);
  }
  
  maior = vet[0];
  posMaior =0;
  
  for(i=1; i<N; i++)
  {
  	if(vet[i] > maior){    // faz a compraração do vetor 1 se e maior que o vetro[0]
  		maior = vet[i];
  		posMaior = i;
	  }
  }
  
  printf("Maior Valor = %f",maior);
  printf("Posicao do Maior Valor = %i",posMaior);
}
