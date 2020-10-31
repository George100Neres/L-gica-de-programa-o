/* Cria um vetor denominado com 10 posições do tipo int, prencher o vetor recebendo dados
via teclado e multiplicar o conteudo de cada elemento do vetor A por 10 armazenando o 
resultado desta multiplicação em outro vetor em B.*/

#include<stdio.h>

main()
{
 int A[10], B[10];
  int i;
  
  for(i=0; i<10; i++)
  {
  	printf(" %d - Digite os dados para o vetor A:",i);
  	scanf("%d",&A[i]);
  }
  
 printf("\nSaida dos dados do vetor A:\n");
 for (i=0; i<10; i++)
 {
 	printf("A[%d] = %d:  \n",i, A[i]);
 	
 }
 printf("\nSaida dos dados do vetor B:\n");
 for (i = 0; i< 10; i++)
 {
 	B [i] = A[i] * 10;
 	printf("B[%d] = %d:  \n",i,B[i]);
 	
 }
}
