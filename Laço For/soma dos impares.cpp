/* Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números 
ímpares entre eles.*/

#include<stdio.h>

main() {
	
 int X,Y,troca,soma;
  
  printf("Digite dois numeros:");
  scanf("%d",&X);
  scanf("%d",&Y);
  
  // Ordem Crescente
  if (X > Y ) {
  	troca = X; // rece o valor de X
  	X = Y;
  	Y = troca;
  }
  soma = 0;
  
  for(int i=0; i>=1; i++) {
  	if(i % 2 != 0) {
  		soma = soma + i;
	  }
  }
  
  printf("SOMA DOS IMPARES = %d",soma);
}
