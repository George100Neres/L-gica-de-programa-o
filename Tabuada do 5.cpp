/*Escreva um programa que represente a tabuada de 1 a 10 de acordo que o usuario escolheu.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
 int res,num;
 
 printf("Introduza um numero:");
 scanf("%d", &num);
 
 res =1;
 while (res <=11)
 
 {
  printf("%2d * %2d = %2d\n",num,res,num*res);
  res = res +1;
 }
 /* Passar a tabuaa prox*/
 res = res +1;
}
