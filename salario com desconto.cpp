/*Escreva um	programa	 em	 C	 que	 calcule o	 desconto	 previdenci�rio	 de	 um	 funcion�rio.	
Dado	 um	 sal�rio,	 o	 programa	 deve	 imprimir o	 valor	 do	 desconto	 proporcional	 ao	
mesmo.	O	c�lculo	segue	a	regra:	o	desconto	�	de	11%	do	valor	do	sal�rio,	entretanto, o	
valor	m�ximo	de	desconto	�	570,88*/

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
