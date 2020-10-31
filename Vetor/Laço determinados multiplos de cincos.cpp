
#include<stdio.h>

main(){
	
int i,vet1[10],vet2[10],somvet=0,totvet=0;

for(i=0; i<10; i++){

 
 printf("Digite um valor na posicao [%i]do primeiro vetor \n",i+1);
 scanf(" %d",&vet1[i]);
 vet2[i] = vet1[i] * 5;
 printf("\nValor do vetor da posicao [%i] do segundo vetor \n",vet2[i]);
 somvet =vet2[i]++;
}
totvet = somvet;
printf("Valor dos somatorios dos vetores %i",totvet);

}
