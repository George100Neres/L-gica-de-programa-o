/*Escreva um programa que calcule o Salário Bruto,o Salário Líquido e o Imposto a se pagar:*/

#include<stdio.h>
#include<stdlib.h>


main()
{
 float salario,taxa,liquido;
 printf("Qual o salario?");
 scanf("%f", &salario);
 
 	salario * taxa;
 	liquido = taxa,salario * (1.0-taxa)
    
 if (salario < 1000)
 	taxa = .05;
 	
 else  (salario >= 5000)
 	taxa = .11;
 	
 else 
    taxa = .35;
    
    printf("Salario: %2f Imposto: %2f Líquido: %2.f\n",liquido);
}
