/*Escreva um programa em C que efetue a leitura sucessiva de valores num�ricos e
apresente no final o somat�rio,a m�dia e a quantidade de valores lidos.O programa 
deve continuar lendo os n�meros at� que seja fornecido um n�mero negativo.Esse n�mero
negativo n�o deve entrar nos c�lculos.*/

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
