
#include<stdio.h>

struct rgAluno{
 char nome [50];
 float nota1;
 float nota2;
 
};

 int main(){
 	
 #define n 30
 struct rgAluno turma[n];
 int i;
 
 // Leitura dos Dados
 for(i=0; i<n; i++){
 	
 printf("%d O.aluno:\n",(i+1));
 
 printf(". Nome...");
 scanf("%[^\n]s",&turma[i].nome);
 
 printf("1. Nota...");
 printf("%f",&turma[i].nota1);
 
 printf("2. Nota...");
 printf("%f",&turma[i].nota2);
 
 
 }
 
 printf("\n");
 
  // Soma das medias.
  
  float media;
  
  for(i=0; i<n; i++){
  	
  media = (turma[i].nota1 + turma[i].nota2) /2;
  printf("%s(%.2f;  %.2f). Media  = %.2f",turma[i].nome,turma[i].nota1,turma[i].nota2,media);
   
   if(media >= 6.0) {
   	printf("APROVADO:");
   }
   else 
   printf("REPROVADO:");
  }
 }
