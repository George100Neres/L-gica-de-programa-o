/* Fa�a um programa em C que leia um vetor de 20 elementos e em seguida a posi��o do elemento e em seguida
ache a posi��o do elemento M (dado pelo usu�riono vetor.)Caso o elemento n�o exista no vetor informe ao usuario.*/
#include<stdio.h>

main(){
	
int i,m, v[20],c=0;

for(i=0; i<20; i++){
	
 printf("Digite o Valor da Posicao %i ",i); // Ir� percorrer todas as posicoes 
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
 	printf("\n N�o h� Posicoes com o Valor do Elemento M");
 }
}
}
