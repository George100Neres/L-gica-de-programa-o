/* Escreva um programa que solicite ao usuario um número.Em seguida escreva todos os números inteiros
a partir desse número, exceto os múltiplos de 3.Quando encontrar o primeiro múltiplo de 10 a execução termina.*/

#include<stdio.h>

main(){

int i,n;

printf("Introd. um N: ");
scanf("%d",&n);

for(i=n; i++){/* Laço Infinito*/
 if(i %10 ==0){/* Multiplo de 10*/
 break;
}
  else  if(i %3 == 0)

  continue;
  printf("%d\n",i);	
}
}

