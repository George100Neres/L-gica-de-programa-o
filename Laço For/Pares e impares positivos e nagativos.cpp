

#include<stdio.h>

main()
{
  int N,i,valor;
  
  printf("Quantos numeros voce vai digitar?");
  scanf("%i",&N);
  
  for(i=1; i<N; i++)
   {
  	printf("Digite um numero\n:");
  	scanf("%i",&valor);
  	
  	
  	
  	
  	if(valor %2 == 0)
  	{
  	printf("Par Positivo %i\n",valor);
	}
	else if(valor %3 == 0)
	{
	printf("Impar Positivo %i\n",valor);
	}
	else if(valor %2 < 0)
	{
		printf("Par Negativo %i\n",valor);
	}
	else if(valor %3 < 0)
	printf("Impar negativo %i\n",valor);

	
	}
  }

