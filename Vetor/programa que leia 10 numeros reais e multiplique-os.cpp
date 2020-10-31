/* Escreva um programa que leia 10 numeros reias,e um vetor qualquer X.
Determine e imprima o vetor resultante da multiplicação de X pelo vetor lido.*/

#include<stdio.h>

main()
{
 float reais[10],X;
 int cont;
 
 printf("Digite um numero para que X multiplique com o vetor:");
 scanf("%f",X);
 for(cont=0; cont<10; cont++)
 {
 
 printf("Digite um numero real: ");
 scanf("%f",&reais[cont]);
 reais[cont] = reais[cont] * X;
}


for(cont=0; cont<10; cont++)
{

  printf("%.2f",reais[cont]);
}
}

