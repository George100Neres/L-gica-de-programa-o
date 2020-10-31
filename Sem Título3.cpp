/* Escreva um programa em C que solicite um determinado numero real e mostre qual a
sua parte inteira e a sua parte fracionária*/

#include<stdio.h>
#include<stdlib.h>
main(){
 float x;
  int i;
  
  
 printf("Introduza um numero real:");
 scanf("%f", &x);
 printf("Introduza um numero em inteiro:");
 scanf("%d", &i);
 
 printf("Os numeros que foram representados em formato real e:\n%f e em inteiro e:%d\n",x,i);	
}
