

#include<stdio.h>
/* Leia um valor inteiro X. Em seguida mostra os ímpares de 1 até X,um valor por linha,inclusive o X,
se for o caso.*/

main()
{
  int x,soma,i;
  
  printf("Digite um valor de X:");
  scanf("%i",&x);
  
  for ( i=1; i<x; i++)
  {
    if ( i % 2 != 0)
	{	
    printf("%i\n",i);
    
    }
    
	}
	
}
