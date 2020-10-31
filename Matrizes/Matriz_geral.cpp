/* Ler uma matriz de ordem N(Máximo =10), contendo números reais. Em seguida, fazer as
seguintes ações: 
a)calcular e imprimir a soma de todos os elementos da matriz.
b) fazer a leitura do indice de uma linha da matrix, e dai, imprimir todos
os elementos desta linha.
c) fazer a leitura do indice da matriz e,dai, imprimir todos os elementos desta coluna
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os numeros negativos da mesma. Em seguida
imprimir a matriz alterada. */

#include<stdio.h>
#include<stdlib.h>

int main(){
 int j,i,N,M,linha,coluna;
 float soma, mat[9];
  printf("Qual a ordem da matriz:");
  scanf("%d",&N);
  
 for(i=0; i<N; i++){
 for(j=0; j<N; j++){
  	
 printf("Elemento [%d] [%d]",i,j);
 scanf("%f",&mat[i,j]);
 }
}
 soma =0;
  // VErificação de Numeros Positivos
  for(i=0; i<N; i++){
 for(j=0; j<N; j++){
 	
 if(mat[i,j] > 0 ){
 	soma = soma + mat[i,j];
 }
 }
 }
  
  printf("SOMA DOS POSITIVOS: %f",soma);
  
  // Seleção Das Linhas.
 printf("Escolha uma linha:");
 scanf("%d",&linha);
 
 for(j=0; j<N; j++){
 	printf("%f",mat[linha,j]);
 }
 
 printf("Escolha uma coluna:");
 scanf("%d",&coluna);
 
 for(i=0; i<N; i++){
 	
 printf("%f",mat[i,coluna]);
 }
 
 printf("Diagonal Principal:");
  for(i=0; i<N; i++){
  	printf("%d",mat[i,i]); //Linha i,Coluna i
  }
  
  // Elevar os numeros ao quadrado somente os numeros Negativos
  for(i=0; i<N; i++){
 for(j=0; j<N; j++){

 if(mat[i, j] < 0) {
 	 mat[i, j] = mat[i, j] * mat[i, j];
 }
 }
 }
 printf("MATRIZ ALTERADA:");
 
  for(i=0; i<N; i++){
 for(j=0; j<N; j++){
 	
 printf("%f",mat[i,j]);
 
 }
}
}
