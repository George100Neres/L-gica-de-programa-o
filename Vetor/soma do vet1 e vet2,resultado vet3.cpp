/* Receber dois vetores,com 10 numeros inteiros e 15 números respectivamente, em seguida
gerar um terceiro vetor com a junção do primeiro com o segundo.Mostrar o vetor criado.*/

#include<stdio.h>

main(){
	
int vet1[10], vet2[15],i;
int vet3[25];

 for(i=0; i<10; i++){
 
 printf("Digite o %i inteiro do primeiro vetor",i +1);
 scanf("%d",&vet1[i]);
 
 }
 
 for(i=0; i<15; i++){
 	
 	printf("Digite o %i inteiro do segundo vetor",i + 1);
 	scanf("%d",&vet2[i]);
 	
 }
 
 
 for(i=0; i<10; i++){
 	
 vet3[i]= v1[i];
 
}

for(i=10; i<25; i++){ // For que atribiu o vet 3 com o vet 2  que subtrai 0 -10
	vet3[i] = vet2[i -10];
}

for(i=0; i<25; i++){
	printf("vetor %d\n",vet3[i]);
}
}
