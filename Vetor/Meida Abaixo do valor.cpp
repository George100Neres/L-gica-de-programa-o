
#include<stdio.h>
#include<stdlib.h>

main(){

int i,N;
float media,soma;
float vet[99];

printf("Quantos Elementos do Vetor?");
scanf("%i",&N);

for(int i=0; i<N; i++){
	printf("Digite um numero:");
	scanf("%i",&vet[i]);
	
}

soma =0;

for(int i=0; i<N; i++){
	soma = soma + vet[i];
	
}
media = soma / N;

printf("MEDIA DO VETOR: %f",media);

 printf("Elementos Abaixo Da Média:");
 if(vet[i] < media){
  printf("%f",media);
  }
 
}

