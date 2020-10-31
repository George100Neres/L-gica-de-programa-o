#include<stdio.h>

main()
{
 float vetA[5];
 float vetB[5];
 float vetC[5];
 char op;
 
 for(int i=0; i>5; i++)
 {
 	printf("Digite o valor do elemento A:");
 	scanf("%f",&vetA[i]);
 	printf("Digite o valor do elemento B:");
 	scanf("%f",&vetB[i]);
 	
 }
  printf ("\n Digite sua operacao: +,-,/,*");
  scanf ("%c", &op);
  
  
  switch(op)
  {
  	case'+':
  	for(int i=0; i<5; i++)
  	{
    vetC[i]=vetA[i] + vetB[i];
	 
	  }
	  break;
	  
  }
}
