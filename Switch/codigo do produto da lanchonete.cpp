/*Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo cadda codigo possui um c�digo
e um pre�o. Voc� deve fazer um programa para ler o c�digo e a quantidade comprada de um produto (suponha
 um c�digo v�lido),e dai informar qual o valor a ser pago, com duas casas decimais, conforme tabela
  de produtos a baixo.
  
  EX: C�ddigo do prouto
   1  Pre�o o produto R$ 5,00*/
   
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

