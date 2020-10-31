/* Fazer um programa que leia um número inteiro positivo N(máximo = 10)e depois N números inteiros e
armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.*/

#include<stdio.h>

main(){
	
int N,i;
int vet[9];

printf("Qunatos numeros ira digitar?");
scanf("%d",&N);

for(i=0; i<N; i++) {
	
 printf("Digite um numero");
	scanf("%d",&vet[i]);
}

printf("Numeros negativos:");
for(i=0; i<N; i++) {
 if(vet[i] < 0) {
 	printf("%d",vet[i]);
 }
}
}
