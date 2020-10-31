/*Implemente um programa que calcule os aumentos de ordenado para o corrente ano.Se o ordenador
for > 1000 deve ser aumentado %5,se não deve ser aumentado 7%*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float salario;
 printf("Qual o Salario: ");
 scanf("%f", &salario);
 
if (salario > 1000)
  salario = salario * 1.05;
  
  
  else 
  
    salario = salario * 1.07;
    printf("Novo Salario %.2f\n",salario);
    
}
