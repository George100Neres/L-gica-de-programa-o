

#include<stdio.h>

main()
{
  int i,N;
  float vet[N];
  
  printf("Qunatos numeros voce vai digitar?:");
  scanf("%i",&N);
  
  for(i=0; i<N; i++)
  {
  	printf("Digite um numero:");
  	scanf("%f",&vet[i]);
  }
  
  printf("Numeros Digitados:\n");
   for(i=0; i<N; i++)
   {
   	printf("%f",vet[i]);
   }
}
