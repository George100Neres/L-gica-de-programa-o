
#include <stdio.h>
#include <conio.h>
   
  /*Criando a struct  */
  struct ficha_de_aluno
  {
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2;  
  };
  
  main()
{
printf("\n---------- Cadastro de aluno -----------\n\n\n");
   
  printf("Nome do aluno ......: ");
  scanf("%s", aluno.nome);
       
  printf("Disciplina ......: ");
  scanf("%s", &aluno.disciplina);
    
  printf("Informe a 1a. nota ..: ");
  scanf("%f", &aluno.nota_prova1);
   
  printf("Informe a 2a. nota ..: ");
  scanf("%f", &aluno.nota_prova2);  
   
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome ...........: %s\n", aluno.nome);
  printf("Disciplina .....: %s\n", aluno.disciplina);
  printf("Nota da Prova 1 ...: %.2f\n" , aluno.nota_prova1);
  printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota_prova2);
   
  getch();
} 
 

