
#include<stdio.h>
#include<stdlib.h>

int main(){
	
int N,M,i,j;
int vetA[9], vetB[9], vetC[9];

printf("Quantos linhas tera a matriz?:");
scanf("%d",&N);

printf("Quantos colunas tera a matriz?:");
scanf("%d",&M);

 printf("Digite os valores da matriz A:");
 for(i=0; i<N; i++) {
  for(j=0; j<M; j++) {
  	
  printf("Elemento [%d] [%d]",i,j);
  scanf("%d",&vetA[i,j]);
  }
 }
 
  printf("Digite os valores da matriz B:");
 for(i=0; i<N; i++) {
  for(j=0; j<M; j++) {
  	
  printf("Elemento [%d] [%d]",i,j);
  scanf("%d",&vetB[i,j]);
  }
 }
 // Calculo da Matriz C
 
 for(i=0; i<N; i++) {
  for(j=0; j<M; j++) {
  	
    vetC[i,j] = vetA[i,j] + vetB[i,j];
  }
 }
  // Exibindo o valor da matriz soma
 printf("MATRZ SOMA:");
 
 for(i=0; i<N; i++){
  for(j=0; j<M; j++){
  	
 printf("\n%d",vetC[i,j]);
  }
  
 }
 
}
