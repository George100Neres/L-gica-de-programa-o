

#include<stdio.h>

main()
{
 int n,x,i,dentro=0,fora=0;
 
 printf("Quantos numeros voce vai digitar?");
 scanf("%i",&n);
 
 for(i=1; i<n; i++)
 {
 	printf("Digite um numero:");
 	scanf("%i",&x);
 	
 	if(x>=10 && x<=20)
 	{
 		dentro = dentro + 1;
	 }
	 else 
	 {
	 	fora = fora +1;
	 }
 }
 printf("dentro %i\n",dentro);
printf("fora %i",fora);
}

