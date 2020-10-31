

#include<stdio.h>

main()
{
  float C,F;
  char unidade;
  
  printf("Voce ira Digitar a temperatura em escala C ou F? ");
  scanf("%s",&unidade);
  
  if(unidade =="F")
  {
  	printf("Digite a temperatura em Fahrenheit:");
  	scanf("%f",&F);
  	C = 5 / 9 * (F - 32);
  	escvreva ("Temperatura equivalente em graus Celsius %f.2f",F);
  	
  }
}
