/*Escreva um programa em C que efetue a leitura sucessiva de valores numéricos e
apresente no final o somatório,a média e a quantidade de valores lidos.O programa 
deve continuar lendo os números até que seja fornecido um número negativo.Esse número
negativo não deve entrar nos cálculos.*/

#include<stdio.h>

main()
{
int i,numero,maior;
	
	for(int i=1; i<10; i++)
	{
		printf("\nInforme o %d numero: ",i);
		scanf("%d",&numero);
		
		if(i == 1 || numero > maior) {
			maior = numero;
			
		}
	}
	printf("\n O maior numero digitado eh: %d ",maior);
	return 0;
	
}
