/*inverter um numero com o resto do operador%*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int numero, cifra;
	
	printf("Digite um numero inteiro");
	scanf("%i", &numero);
	
	if(numero >= 0) {
		do {
		cifra = numero %10;
		printf("%i", cifra);
		numero /=10;
		} while(numero != 0);
		 printf("\n");
	}
	 
	  	
	  }
	
