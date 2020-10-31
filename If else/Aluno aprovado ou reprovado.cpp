/*Fazer um programa que leia as duas notas que um aluno obteve no primeiro e segundo semestre
 de uma disciplina aunal. Em seguida, mostrar a nota final que o aluno obteve(com uma casa decimal)
 no ano juntamente com um texto explicativo. Caso a nota seja inferior a R$60,00,mostrar a 
 mensagem "REPROVADO",conforme exemplos.*/
 
 #include<stdio.h>
 
 main()
 {
  float nota1, nota2, notaFinal;
  
  printf("Digite a 1 nota:");
  scanf("%f",&nota1);
  
   printf("Digite a 2 nota:");
  scanf("%f",&nota2);
  
  notaFinal = nota1 + nota2;
  
  if(notaFinal <60)
  {
  	printf("%.1f  Aluno Reprovado!",notaFinal);
  }
  if(notaFinal >= 60)
  {
  	printf("%.1f  Aluno Aprovado!",notaFinal);
  }
 }
