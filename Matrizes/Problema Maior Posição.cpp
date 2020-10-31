
#include<stdio.h>
int main()
{
 float vet[99],maior;
 int i,N,posMaior;
 
 printf("Quantos numeros ira Digitar:?");
 scanf("%i",&N);
 
 for(i=0; i<N; i++){
 	printf("Digite um numero:");
 	scanf("%f",&vet[i]);
 }
 
 maior = vet[0];
 posMaior=0;
 
 for(i=1; i<N; i++) {
 	if (vet[i] > maior){
 		maior = vet[i];
 		posMaior =i;
	 }
 }
 
 printf("Maior Valor =%2.f",maior);
 printf("Posicao do Maior Valor =%i",posMaior);
}
