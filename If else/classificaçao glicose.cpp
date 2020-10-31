/*Fazer um programa que verifique a quantidade de glicose
que tem no sangue de uma pessoa e depois mostrar na tela a
classficação desta glicose de acordo com a tabela.*/

  /*  EX (normal) Até 100 mg
      (Elevador)maior que 100 até 140 mg
      (Diabetico) Maior que 140 mg.*/
      
#include<stdio.h>

main()
{
  float glicose;
  
  printf("Digite o nivel de glicose:");
  scanf("%f",&glicose);
  
  if(glicose <=100)
  {
  	printf("O Nivel de glicose esta normal:");
  }
  else if(glicose >100 && glicose <=140)
  {
  
  printf("O Nivel de glicose esta Elevado:");
}
  else if (glicose >140)
  {
  	printf("Voce esta Diabetico:");
  }
}
