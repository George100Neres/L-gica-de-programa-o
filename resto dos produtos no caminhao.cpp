/*Escreva um programa em C que solicite a quantidade de produtos 
que foram mandados pro caminhao,depois escreva o resto da quantidade
que ficaram de fora do caminhao*/

#include<stdio.h>

main()
{
 float prodt,restdiv,list,div;
 
 printf("Informe a quantidade de produtos que estavam na lista:");
 scanf("%f", &list);
 printf("Informe a quantidade de produtos que foram no caminhao:");
 scanf("%f", &prodt);
 
 div = list / prodt;
 restdiv =   div ;
 
 printf("O resto dos produtos que não foram e:%f",restdiv);
}
