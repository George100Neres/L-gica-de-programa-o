/*Fazer um programa para ler um conjunto de N numero de alunos,bem como as notas que eles tiraram
no 1° e 2° semestres.Cada uma dessas informações deve ser armazenada em vetor.Depois,imprimir os
nomes dos alunos aprovados,considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0*/


#include<stdio.h>
#include<string.h>
main()
{
   int i,N;
   float media;
   char nome[99];
   float nota1[99];
   float nota2[99];
   
   printf("QUantos Alunos serao Digitados?");
   scanf("%i",&N);
   
   for(i=0; i<N; i++)
   {
   	printf("Digite o nome\n, a primeira nota\n e a segunda nota do aluno:",i +1);
   	scanf("%s",&nome);
   	scanf(" %f",&nota1[i]);
   	scanf(" %f",&nota2[i]);
   }
   
   printf("Alunos Aprovados:");
   
   for(i=0; i<N; i++)
   {
   	media = (nota1[i] + nota2[i])/2;
   	
   	if(media >=6 )
   	{
   	printf("%f",nome[i]);
	}
   }
}
