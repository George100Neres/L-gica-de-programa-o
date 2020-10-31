/*Escreva um programa que coloque na tela as cinco primerias tabuadas,parando a tela
depois de cada uma delas ser escrita*/

#include<stdio.h>
#include<stdlib.h>

main()
{
 int i,j;
 
  for (i=1 ; i<=5 ; i=i+1)
  {
  	 for (j=1 ; j<=10 ; j=j+1)
  	  printf("%2d * %2d = %2d\n", i,j,i*j);
  	  
  	  if(i != 5)  /* para não parar na ultina */
  	  {  printf("Pressione <ENTER> para continuar...");
  	  getchar();
		}
  }
}
