

#include<stdio.h>

main(){
	
 int i,N,j;
 int  maior =0;
 int mat[9] [9];
 
 printf("Qual a ordem da Matriz?");
 scanf(" %i",&N);
 
    for(i=0; i<N; i++){
 	for(j=0; j<N; j++){
 		printf("Elemento %i %i ",i,j);
 		scanf("%i",&mat[i] [j]);
	 }
 }
    printf("Maior Elemento de cada Linha:");
    
    for(i=0; i<N; i++){
    	maior = mat[i] [0];    //Acessar o 1 elemento da linha que eu tiver
    	
    for(j=1; j<N; j++){
    	if(mat[i] [j] > maior){
    		maior = mat[i] [j];
		}
	}
	
	printf("\n%i",maior);
}
}
