/*Escreva um programa utilizando a linguagem C para cada um dos problemas abaixo:
1 - Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada. Na opção 1: receber duas notas, calcular e mostrar a
média aritmética. Na opção 2: receber três notas e seus respectivos pesos,
calcular e mostrar a média ponderada. Na opção 3: sair do programa.*/

#include<stdio.h>

main(){
 int opcao;
float medPon,MedArit,nota1,nota2,nota3,somNot;

 printf("Menu de Opcoes:\n");
 printf("1. Media Aritmetica:\n");
 printf("2. Media Ponhderada\n");
 printf("3. Sair:");
 
  scanf("%i",&opcao);
  
 switch(opcao)
 {
 	
case 1:
 printf("Digite o valor das 2 Notas:");
 scanf("%f",&nota1);
 scanf("%f",&nota2);
 
 somNot = nota1 + nota2;
 MedArit = somNot /2;
 
 printf("A media aritmetica entre duas notas E: %f",MedArit);
 
 	
case 2:
 printf("Digite o valor das 3 Notas:");
 scanf("%f",&nota1);
 scanf("%f",&nota2);
 scanf("%f",&nota3);
 
 somNot = (nota1 + nota2 + nota3)* 3;
 
 medPon = somNot /3;
 
 printf("Media Ponderada dos valores %.2f",medPon);
 
 case 3:
 
 printf("Sair do programa");
 }
 	
}
