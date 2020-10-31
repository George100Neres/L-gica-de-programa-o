/* Crair um vetor denominado A com 10 posicoes do tipo int, preencher o vetor recebendo dados
via teclado e multiplicar o conteudo de cada elemento do vetor A por 10 armazenando o
resultado desta multiplicação em outro vetor denominado B.*/

#include<stdio.h>

main(){
 
 int A[10],i,B[10];
 
 for(i=0; i<10; i++){
  printf("Vetor %d ",i +1);
  scanf("%d",&A[i]);
  
 }
 printf("Saida de dados do vetor A:");
 
 for(i=0; i<10; i++){
  printf("A[%d] = %d: \n",i,A[i]);
  
 }
 printf("\nSaida de dados do vetor B:");
for(i=0; i<10; i++){
	
	B[i]= A[i] * 10;
	printf("B[%d]= %d: \n",i,B[i]);
}
 

}
