

#include<stdio.h>

main()
{
  int i,N;
  int vetA[50],vetB[50],vetC[50];
  
  printf("Quantos valores vai ter cada vetor?");
  scanf("%i",&N);
  
  for(i=0; i<N; i++)
  {
  	printf("Digite os valores de A:");
  	scanf("%i",&vetA[i]);
  }
   for(i=0; i<N; i++)
  {
  	printf("Digite os valores de B:");
  	scanf("%i",&vetB[i]);
  }
   for(i=0; i<N; i++)
  {
    vetC[i] = vetA[i] + vetB[i];
  }
  
  printf("Vetor Resultante:");
   for(i=0; i<N; i++)
  {
  	printf("%i\n",vetC[i]);
  	
  }
}
