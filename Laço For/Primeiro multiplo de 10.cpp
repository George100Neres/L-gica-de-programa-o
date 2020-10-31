/*Escreva um prgrama que solicite ao usuario um numero.Em seguida todos os números inteiros
a partir desse número, exceto os múltiplos de 3.Quando encontrar o primeiro mult de 10 a execução termina.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  
  int i,n;
  
   printf("Introd.um N°: ");
   scanf("%d",&n);
   
     for (i=n;  ; i++) /* Laço infinito*/
     {
     	if (i%10 ==0)/*Multiplo de 10*/
     	  break;
     	  else if(i%3==0)
     	  continue;
     	    printf("%d\n",i);
	 }
}
