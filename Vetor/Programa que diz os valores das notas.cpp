/*Programa que diz os valores das notas.*/

#include<stdio.h>

main(){

float notas[4];
int i;

//entrada de dados
for(i=0; i<=3; i++)
{
	printf("Digite a nota do Aluno:");
	scanf("%f",&notas[i]);
	
}
// saida de dados
for(i=0; i<=3; i++)
{
	printf("Valor da nota %d:. %f \n",i,notas[i]);
	
}
}
