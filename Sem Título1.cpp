/*Escreva um programa em C que leia uma variavel,e diga 
a qual numero ele e divisivel e o resto da divisao desse numero.*/
#include<stdio.h>
#include<stdlib.h>

main()
{
 
 int num1,div1;
 
 printf("Digite um numero");
 scanf("%d", &num1);
 
 div1 = (num1/4);
 
  
 if (num1%2==0)
 
 
 printf("O numero %d e divisivel  por 2:",div1);

else if (num1%4==1)
 printf("O numero %d e o resto da divisao",div1);

 }
