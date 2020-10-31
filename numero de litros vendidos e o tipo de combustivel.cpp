/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90.*/

#include<stdio.h>
#include<stdlib.h>

 main(){
 	float  numdlitros,tpdecomb,pgcliente;
  float alcool,tpgasolina=0,desc,precodolitro; //numero de combustivel,tipo de combustivel,desconto,litros.
 	
 	printf("Informe a quantidade de Alcool por listros:");
 	scanf("%f", &alcool);
 	printf("Informe a quantidade de Gasolina por litros:");
 	scanf("%f", &tpgasolina);
 	
 	if(tpgasolina == 1 && alcool > 25) {
 	 numdlitros = (alcool * 0.03 );
 	 precodolitro = 2.70;
 	 pgcliente = numdlitros + precodolitro;
 	 printf("O valor a ser pago pelo cliente foi %f", &pgcliente);
	 }
 }
