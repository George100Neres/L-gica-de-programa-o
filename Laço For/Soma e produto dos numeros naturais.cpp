/*Escreva um programa que calcule a soma e o produto dos n primeiros numeros naturias.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
int n,soma,produto,num;

 printf("Introduza.um N°:");
 scanf("%d", &num);
 
 for (soma =0, n=produto=1; n <= num ; n=n+1)
 {
 	soma = soma +n;
 	produto = produto * n;
 }
 
 printf("Soma =%d\nProduto=%d\n",soma,produto);
 } 
