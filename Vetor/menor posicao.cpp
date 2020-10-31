

#include <stdio.h>

main(){
	
 int N,i;
 float vet[99];
 float menor;
 
 printf("Quantos numeros vc vai digitar:");
 scanf("%d",&N);
 
 for(i=0; i<N; i++){
printf("Digite um numero:");
scanf("%f",&vet[i]);
 }
 
 menor = vet[0];
 
 for(i=0; i<N; i++){
 	
  if(vet[i] < menor) {
  	menor = vet[i];
  }
 }
 
 printf("MENOR VALOR %f",menor);
 
}
