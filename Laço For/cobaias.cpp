
#include<stdio.h>

main()
{
  int qtd=0,totalCobaias=0,totalsap=0,totalcoel=0,totalrat=0,N;
  int  pcoelhos,pratos,psapos;
  char tipocobaia [3] 
  
 
  
  printf("Quantos casos de teste serao digitados?");
  scanf("%d",&N);
  
  for(int i=0; i<N; i++)
  {
  	printf("Quantidade de cobaias:");
  	scanf("%d", &qtd);
  	
  	printf("Tipo de cobaia:n");
  	scanf ("%c ", &tipocobaia);
  	
  	
  	if(tipocobaia == R)
  	{
  	totalrat = totalrat + qtd;
	}
	else if (tipocobaia == S)
	{
		totalsap = totalsap + qtd;
	}
	else if (tipocobaia == C ){
		totalcoel = totalcoel + qtd;
	}
	 
	
  }
  
  
  
  printf("Relatorio final:");
  printf("Percentual: %d coelhos\n",pcoelhos);
  printf("Percentual: %d sapos\n",pratos);
  printf("Percentual: %d ratos\n",psapos);
  printf("Total de sapos: %d\n",totalsap);
  printf("Total de Ratos: %d\n",totalrat);
  printf("Total de Coelhos: %d\n",totalcoel);
}
