

#include<stdio.h>
/*  Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos
de telefone. Cada Minuto que exceder a franquia de 100 minutos custa R$2,00 .Fazer um programa 
para ler a quantidade  de minutos que uma pessoa consumiu, dai mostrar o valor a ser pago.*/


main()
{
  int minutos;
  float valorpago;
  
  printf("Digite a quantidade de minutos:");
  scanf("%i",&minutos);
  
  valorpago = 50.0;
  
  if(minutos >100 )
  {
  
  valorpago = valorpago + 2 *(minutos -100);
}

 	printf("Valor a pagar  = %.3f",valorpago);
 }

