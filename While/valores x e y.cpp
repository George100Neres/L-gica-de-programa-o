

#include<stdio.h>

main()
{
   int x=2,y=0,soma;
    
    
 printf("Digite o valor da soma");
 scanf("%i",&soma);
    
	while(soma < 60)
	{
		
	soma = soma * x;
	 printf("%i\n ",soma);
	}
	
	printf("Fim!");
}

