/*Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles*/

#include<stdio.h>

main(){
	
	int num1,num2,quo,res;
	
	printf("\nDigite o primeiro numero inteiro:");
	scanf("%i", &num1);
	printf("\nDigite o segundo numero inteiro:");
	scanf("%i",&num2);
	
	quo= num1,num2;
	res= num1/num2;
	
	printf("\nO resto da divisao inteira e:%i",res);
	printf("\nO quaociente da divisao inteira e:%i",quo);
}

