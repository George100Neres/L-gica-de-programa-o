
#include<stdio.h>

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
   	scanf("%d",&nome);
   	scanf("%f",&nota1);
   	scanf("%f",&nota2);
   }
   
}
