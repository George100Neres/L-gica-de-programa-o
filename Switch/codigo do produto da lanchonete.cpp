/*Uma lanchonete possui vários produtos. Cada produto possui um código cadda codigo possui um código
e um preço. Você deve fazer um programa para ler o código e a quantidade comprada de um produto (suponha
 um código válido),e dai informar qual o valor a ser pago, com duas casas decimais, conforme tabela
  de produtos a baixo.
  
  EX: Códdigo do prouto
   1  Preço o produto R$ 5,00*/
   
#include<stdio.h>

main()
{
  int codigo,quantidade;
  float Valorpago;
  
  printf("Codigo do produto comprado ");
  scanf("%d",&codigo);
  
  printf("Insira a quantidade comprada.");
  scanf("%d",&quantidade);
  
  switch (codigo)
  {
  
  
   case 1:
  	Valorpago = 5.0 * quantidade;
  	printf("Valor a ser pago %.2f",Valorpago);
  	break;
  	
  	case 2:
  	Valorpago = 8.0 * quantidade;
  	printf("Valor a ser pago %.2f",Valorpago);
  	break;
  	
  	 case 3:
  	Valorpago = 7.0* quantidade;
  	printf("Valor a ser pago %.2f",Valorpago);
  	break;
  	
  	 case 4:
  	Valorpago = 8.0* quantidade;
  	printf("Valor a ser pago %.2f",Valorpago);
  	break;
  	
  	 case 5:
  	Valorpago = 15.0 * quantidade;
  	printf("Valor a ser pago %.2f",Valorpago);
  	
  	break;
  	
  }
  	printf("Codigo Invalido!");
  }

