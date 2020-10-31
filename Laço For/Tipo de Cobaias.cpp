/*Maria quer saber se no final do ano,quantas cobaias foram utilizadas no laboratório e o 
percentual de cada tipo de cobaia utilizada. Este laboratorio em especial utiliza três tipos 
de cobaias: Sapos, Ratos e Coelhos. Para obter essas informações ,ela sabe exatamente o número
de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas
e uma letra ('C','R','S'),indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).Apresente o total de cobaias
utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada  uma em relação ao total de
cobaias utilizadas, sendo que o percentual deve ser apresentado com dois digitos após o ponto.*/ 

#include<stdio.h>

main()
{
  int qtd=0,totalCobaias=0,totalsap=0,totalcoel=0,totalrat=0;
  int  pcoelhos,pratos,psapos;
  char tipocobaia,N,R,S,C; ;
  
 
  
  printf("Quantos casos de teste serao digitados?");
  scanf("%d",&N);
  
  for(int i=0; i<N; i++)
  {
  	printf("Quantidade de cobaias:");
  	scanf("%d", &qtd);
  	
  	printf("Tipo de cobaia:n");
  	scanf ("%d ", &tipocobaia);
  	setbuf (stdin,NULL);
  	
  	if(tipocobaia == R)
  	{
  	totalrat = totalrat + qtd;
	}
	else if (tipocobaia == S)
	{
		totalsap = totalsap + qtd;
	}
	else if (tipocobaia == C){
		totalcoel = totalcoel + qtd;
	}
	 
	
  }
  
  totalCobaias = totalrat + totalsap + totalcoel;
	  pcoelhos = (totalcoel / totalCobaias) * 100;
	pratos = (totalrat / totalCobaias )* 100;
	psapos = (totalsap / totalCobaias)* 100;
  
  printf("Relatorio final:");
  printf("Percentual: %d coelhos\n",pcoelhos);
  printf("Percentual: %d sapos\n",pratos);
  printf("Percentual: %d ratos\n",psapos);
  printf("Total de sapos: %d\n",totalsap);
  printf("Total de Ratos: %d\n",totalrat);
  printf("Total de Coelhos: %d\n",totalcoel);
}
