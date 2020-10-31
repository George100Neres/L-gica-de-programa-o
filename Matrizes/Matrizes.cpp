
#include<stdio.h>

main() {
	
	int M,N,i,j;
	int mat[4] [5];
	
	printf("Quantas linhas vai ter a matriz?");
	scanf("%d",&M);
	printf("Quantas colunas vai ter a matriz?");
	scanf("%d",&N);
	
	for(i=0; i<M; i++) { // i corresponde a linhas
		for(j=0; j<N; j++){  // j corresponde a colunas
	   printf("Elemento [%i],[%i]",i,j);
	   scanf( "%i",&mat[i] [j]);
	   
		}
	}
	
	printf("MATRIZ DIGITADA:");
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
	  printf("%d", mat[i] [j]);
		}
	}
}
