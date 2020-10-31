/* Escreva um programa que faça a verificação se o numero for 
e maior que 20,imprima "E um numero maior" se nao,imprima,"e um numero menor".*/

#include<stdio.h>
#include<stdlib.h>

main()
{
 int x,valor;
 
printf("Digite um valor qualquer:");
scanf("%d",&x);


valor = x;

if (valor >=20)
  printf("E um numero maior que 20");
  else
  printf("E um numero menor!");
}
