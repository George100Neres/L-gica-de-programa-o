/* Escreva um programa que solicite ao usuario um n�mero.Em seguida escreva todos os n�meros inteiros
a partir desse n�mero, exceto os m�ltiplos de 3.Quando encontrar o primeiro m�ltiplo de 10 a execu��o termina.*/

#include<stdio.h>

main(){

int i,n;

printf("Introd. um N: ");
scanf("%d",&n);

for(i=n; i++){/* La�o Infinito*/
 if(i %10 ==0){/* Multiplo de 10*/
 break;
}
  else  if(i %3 == 0)

  continue;
  printf("%d\n",i);	
}
}

