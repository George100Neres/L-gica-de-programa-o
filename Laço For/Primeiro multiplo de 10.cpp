/*Escreva um prgrama que solicite ao usuario um numero.Em seguida todos os n�meros inteiros
a partir desse n�mero, exceto os m�ltiplos de 3.Quando encontrar o primeiro mult de 10 a execu��o termina.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  
  int i,n;
  
   printf("Introd.um N�: ");
   scanf("%d",&n);
   
     for (i=n;  ; i++) /* La�o infinito*/
     {
     	if (i%10 ==0)/*Multiplo de 10*/
     	  break;
     	  else if(i%3==0)
     	  continue;
     	    printf("%d\n",i);
	 }
}
