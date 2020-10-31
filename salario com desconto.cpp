/*Escreva um	programa	 em	 C	 que	 calcule o	 desconto	 previdenciário	 de	 um	 funcionário.	
Dado	 um	 salário,	 o	 programa	 deve	 imprimir o	 valor	 do	 desconto	 proporcional	 ao	
mesmo.	O	cálculo	segue	a	regra:	o	desconto	é	de	11%	do	valor	do	salário,	entretanto, o	
valor	máximo	de	desconto	é	570,88*/

// desconto previenciario %11 do funcionario
// valor maximo do desconto e 570,88
#include<stdio.h>
#include<stdlib.h>

  main(){
  	
  	float salario,desconto;
  	
  	printf("QUal o valor do salario?");
  	scanf("%f",&salario);
  	
  	if(salario <=570,88){
  		desconto = salario*0.50;
  		printf("O valor do salario e:%.2f",desconto);
	  }
  }
