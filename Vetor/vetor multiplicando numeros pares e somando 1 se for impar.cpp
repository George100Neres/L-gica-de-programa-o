/* REceber um vetor de 10 números inteiros,em seguida alterar o vetor multiplicando
todos os numeros pares por 3 e somando 1 aos numeros impares.Mostrar o valor alterado.*/

#include<stdio.h>

main(){
	
 int N,i,vet[10];
 
 for(i=0; i<10; i++){
 	printf("Digite uo %i inteiro:",i + 1);
 	scanf("%d",&vet[i]);
 	
 }
 int som=0;
 int par=0;
 
 for(i=0; i<10; i++){
 	if(vet[i] % 2 == 0){
 	 vet[i] = vet[i] * 3;
	  	
	 } else {
	 	vet[i] = vet[i] + 1;
	 }
}
	 
	for(i=0; i<10; i++){
		printf("%d\n",vet[i]);
	}
 
 
}
