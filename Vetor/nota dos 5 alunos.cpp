/*Escvreva um programa em C que calcule a nota dos 5 Alunos Atraves de Vetores.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  float notas [5] = {4,2,3,5};
   float total = 0;
   float media = 0;
   
   printf("Insira as 5 notas:\n");
   scanf("%d",&notas[5]);
   
   
   for(int i = 0; i < 5; i++)
       total =notas[i];
       
       media = total/5;
       
  printf("A media do aluno e: %f",notas);
  
}
