/* Preencher um vetor com números inteiros (8unidades); solicitar um número do teclado.
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não
existir, imprimir MSG que não existe. */

#include<stdio.h>
main(){

int i,N=8,vet[10];
int posvet;


scanf("%d",&N);

for(i=0; i<N; i++){
printf("Digite um numero do teclado:");
 scanf("%d",&vet[i]);
}
posvet = 0;

  if(vet[i] <=N){
  
  for(i=0; i<N; i++){
	printf("Posicoes dos vetores %i  ",i +1);
	printf("%d \n",vet[i]);
}
}
  else if(vet[i] >N){
  	printf("Esse Numero nao existe.");
  }



}


