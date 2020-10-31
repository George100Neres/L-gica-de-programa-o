/*Escreva um programa em C que solicite ao usuaroi uma determinada datae a mostre em seguida
em formato ddd/mm/aaa.*/

#include<stdio.h>
#include<stdlib.h>

main()
{

int ano,mes,dia,convres,result;

printf("Qual e o ano em que estamos hoje?");
scanf("%d",&ano);
printf("Qual e o mes em que estamos hoje?");
scanf("%d",&mes);
printf("Qual e o dia em que estamos hoje?");
scanf("%d",&dia);



printf("O resultado da conversao desta data e: %d/  %d/  %d ",dia,mes,ano);
}


