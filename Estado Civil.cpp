/*Escreva um programa que aplique uma taxa de juros de imposto 10% aos solteiros e 9% aos casados*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float salario;
	char estacivil;
	
  printf("Qual o valor do Salario?");
  scanf("%f",&salario);	
  
 printf("Qual o estado civil?");
 scanf("%c", &est_civil);
 
 if (est_civil =='C' || est_civil=='c')
   printf("Imposto %2f\n",salario * 0.09);
   
   else if (est_civil =='S' || est_civil=='s')
   printf("Imposto %2f\n",salario * 0.10);
   
  return est_civil;
}


