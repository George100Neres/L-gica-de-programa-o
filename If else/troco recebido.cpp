/* Fazer um programa que para calcular o troco no processo de pagamento de um produto de mercearia
O programa deve ler o preço únitario do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente.Se o dinheiro dado pelo cliente não for suficente, mostrar uma mensagem informando o 
valor restante conforme o exemplo.*/

#include<stdio.h>


main()
{
 float preco,troco,resto,dinheiro;
 int quantidade;
 
 printf("Preco unitario do produto:");
 scanf("%f",&preco);
 
 printf("Quantidade comprada do produto:");
 scanf("%i",&quantidade);
 
 printf("Dinheiro recebido do cliente:");
 scanf("%f",&dinheiro);
 
 if(dinheiro >= preco * quantidade)
 {
 
  troco = dinheiro - (preco * quantidade);
  printf("Troco = %.2f",troco);
}

else 
{
	 resto = preco * quantidade - dinheiro;
	printf("Dinheiro Insuficeinte, Faltam = %.2f Reais ",resto);
}
}
