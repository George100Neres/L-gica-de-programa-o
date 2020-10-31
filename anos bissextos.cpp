/*Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366
dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é
divisível por 4. Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas, se ele for 
divisível por 400, ele volta a ser bissexto.
a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038*/

#include<stdio.h>
#include<stdlib.h>
// um ano e bissexto se for divisivel por 4
// se divisel por 100,ele nao e
// se for divisivel por 400 ele volta a ser bissexto
main (){
	
	int anobiss,naobiss,anosextra,dias,numdiv1,numdiv2,numdiv3,res1,res2;
	
	printf("Digite o dia: ");
	scanf("%i", &dias);
	
	printf("Digite o ano atual:");
	scanf("%i", &anobiss);
	
	
	
	numdiv1 = dias + anobiss /4==4;
	numdiv2 = dias + anobiss /100==100;
	numdiv3 = dias + anobiss /400==400;
	res1 = numdiv1;
	res2 = numdiv2;
	
	if( numdiv1 >=res1 ){
		printf("Sao anos bissextos os: 1600,1996,2000,2004,2008,2012,2016,%i ",res1);
	}
	else if(numdiv2 < res1){
		printf("Nao sao bissextos %i", res2);
	}
	
	
	
}
