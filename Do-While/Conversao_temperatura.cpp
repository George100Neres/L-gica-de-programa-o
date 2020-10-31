
/* Fazer um programa para ler uma temperatura em Celsius e mostrar o equivalente em Fareinth. Perguntar ao usuario
deseja repetir (s/n).Caso o usuario digite "s", repetir o programa,

Fórmula: F= 9C/5 + 32*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ( ) {

char s;
float C, F;
char resp;

resp = 's';
do 
{
	
 printf("Digite a temperatura em Celsius:");
  scanf("%f",&C);
  
  F = 9.0 * C / 5.0 + 32;
  
  printf("Equivalente em Farenheit: %3.0f",F);

  
  printf("Deseja repetir? (s/n)");
  scanf("%s",&resp);
}
  while (resp == 's');
  printf("Voce apertou outra tecla:");


}
