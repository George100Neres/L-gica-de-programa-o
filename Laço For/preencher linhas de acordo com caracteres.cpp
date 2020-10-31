/*Escreva um programa que solicite ao usuario um numero e um caractere.Em seguida,terá que preencher n linhas,cada uma delas com n caracteres.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
   int i,n,j;
   char ch;
  
  printf("Introduza um Numero:");
  scanf("%d",&n);
  
  printf("Introduza um Char: ");
  scanf(" %c",&ch);
  
  for (i=1 ; i<=n ; i++)
  {
  	  for(j=1 ; j<=n ; j++)
  	    putchar(ch);
  	    printf ("\n");
  }
}
