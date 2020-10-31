/* Faça um programa para ler dois vetores A e B. contendo N elementos cada.Em seguida, gere um 
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentesde A e . Imprima
o vetor C gerado.*/

# include<stdio.h>
# include<stdlib.h>

int main() {
	
 int N, i;
  int A[99];
  int B[99];
  int C[99];
  
  printf("QUantos valores vai ter cada vetor:?");
  scanf("%i",&N);
  
	  printf("Digite os valores de A:");
	  for( i=0; i<N; i++) {
	  scanf("%i/n",&A[i]);
	}
	
	 printf("Digite os valores de B:");
  	for( i=0; i<N; i++) {
  	scanf("%i/n",&B[i]);
  }
  
   for(i=0; i<N; i++) {
   	
   	C[i] = A[i] + B[i];
   }
   
   printf("VALOR RESULTANTE:");
   for(i=0; i<N; i++) {
   
   printf("%i\n", C[i]);
	}
	
}
