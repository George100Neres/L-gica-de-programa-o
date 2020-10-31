

#include<stdio.h>

main()
{
  int i,M,N,j;
  int  mat [M] [N];							
  int  vet [9];
  
  printf("Qual a quantidade de linhas da matriz?:");
  scanf("%i",&M);							// M (linhas)
  
  printf("Qual a quantidade de colunas da matriz?");
  scanf("%i",&N);
  
  for(i=0; i<M; i++){
  	printf("Digite os elementos da {%i} posicao:",i + 1);
  	for(j=0; j<N; j++){
     scanf("%i",&mat[i] [j]);
	  }
  }
  
  for(i=0; i<M; i++){
  	vet[i] =0;                         //vetor linha 0 recebe 0
  	for(j=0; j<N; j++){
  		vet[i] = vet[i] + mat[i] [j];
	  }
  }
  
  printf("Vetor Gerado:");
  for(i=0; i<M; i++){
  	printf("%i",vet[i]);
  }
}
