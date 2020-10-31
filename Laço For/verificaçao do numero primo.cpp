/*Escreva um programa que faça a verificação do numero que o usuario digitou e primo.*/

#include<stdio.h>
 main(){


int numPrimo;
int numDivisor = 0;

printf("Digite um numero:");
scanf("%i",&numPrimo);

for(int i=1; i<=numPrimo; i++)

  if(numPrimo % i ==0){
  	numDivisor ++;
  	
  }

   if(numDivisor ==2){
   	printf("O numero digitado  e primo!");
   }else{
   	printf("O numero nao e primo!");
   }
   
  
  }
