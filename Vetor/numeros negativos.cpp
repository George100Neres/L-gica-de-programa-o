/* Fazer um programa que leia um n�mero inteiro positivo N(m�ximo = 10)e depois N n�meros inteiros e
armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.*/

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
