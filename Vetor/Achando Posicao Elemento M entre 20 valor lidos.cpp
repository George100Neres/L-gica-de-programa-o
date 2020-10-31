/* Faça um programa em C que leia um vetor de 20 elementos e em seguida a posição do elemento e em seguida
ache a posição do elemento M (dado pelo usuáriono vetor.)Caso o elemento não exista no vetor informe ao usuario.*/
#include<stdio.h>

main(){
	
int i,m, v[20],c=0;

for(i=0; i<20; i++){
	
 printf("Digite o Valor da Posicao %i ",i); // Irá percorrer todas as posicoes 
 scanf("%d",&v[i]);
 
}
printf("\nDigite o Valor do Elemento: M");
scanf("%d ",&m);

for (i=0; i<20; i++){
	
 if(m==v[i]){
 	printf("\n O Elemento M se encontra na posicao do Vetor %i:",m,i);
 	
 } else {
 	c= c+1;
 }
 if(c==20){
 	printf("\n Não há Posicoes com o Valor do Elemento M");
 }
}
}
