/*. Em diversas situa��es, � �til o uso de d�gitos verificadores. D�gito
verificador ou algarismo de controle � um mecanismo de autentica��o utilizado para
verificar a validade e a autenticidade de um valor num�rico, evitando dessa forma fraudes
ou erros de transmiss�o ou digita��o. Uma das formas mais comuns de c�lculo de d�gito
verificadores � o m�todo conhecido por m�dulo 11. O c�lculo do DV no m�dulo 11 �
feito, � feito como se segue: para calcular o primeiro d�gito verificador, cada d�gito do
n�mero, come�ando da direita para a esquerda (do d�gito menos significativo para o
d�gito mais significativo) � multiplicado, na ordem, por 2, depois 3, depois 4 e assim
sucessivamente, at� o primeiro d�gito do n�mero. O somat�rio dessas multiplica��es
dividido por 11. O resto desta divis�o (m�dulo 11) � subtra�do da base (11), o resultado �
o d�gito verificador. O Banco do Brasil utiliza o c�digo m�dulo 11, substituindo por X o
valor do d�gito verificador quando este � 10. Escreva um programa que receba um
n�mero com os 4 primeiros d�gitos de uma ag�ncia e imprima o n�mero da ag�ncia
completo (numero � dv).*/

#include<stdio.h>
#include<math.h>
// div 11
// a ordem e seguida da seguinte forma (direita pra esquerda) 
// comeca multpiclando na ordem crescente ate o 1 digito.
 int main(){

	int digt4,digt3,digt2,digt1,resultdiv,resultmultdig,restdiv,ressubrtdiv;
	
	printf("Digite os 4 digitos da Agencia:");
	scanf("%i",&digt4,&digt3,&digt2,&digt1);
	
	resultmultdig = digt4*digt3*digt2*digt1/11;
	resultdiv = resultmultdig;
	restdiv = resultmultdig %11;
	ressubrtdiv = restdiv
	
	printf("O numero da agencia e :%i",ressbrtdiv);
	
	
	
}
