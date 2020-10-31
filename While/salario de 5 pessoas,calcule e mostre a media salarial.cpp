/*Faça um programa em C que receba o salario 
de 5 pessoas ,calcule e mostre a média salarial deles.*/

#include<stdio.h>

main()
{
 int i;
 float salario,media,soma;
 
 for(i=1; i<=5; i++)
 {
 
 printf("Informe o %i salario ",i);
 scanf("%f",&salario);

  soma = soma + salario; 
}
  media = soma /  (i-1);  // media = soma /5
  printf("\n A media dos salariso eh %.2f",media);
  
}
