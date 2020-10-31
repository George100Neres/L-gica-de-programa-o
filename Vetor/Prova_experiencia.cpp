
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {

int i,N,qtd,totalCobaias,totalSapo,totalCoelho,totalRato;
float percentrato, percentcoelho, percentsapo;
char tipcob[10];

	

printf("Qunatos casos serao digitados?");
scanf("%d",&N);

for(i=0; i<N; i++) {
  printf("Qunatidade de Cobaias:");
  scanf("%i",&qtd);
  printf("Tipo de Cobaia:");
  scanf("%s",&tipcob);
  
  if (tipcob[i] == 'R') {
  	totalRato = totalRato + qtd;
  }
  
  else if(tipcob[i]=='S')	{
  	totalSapo = totalSapo + qtd;
  }

}

 
totalCobaias = totalRato + totalSapo + totalCoelho;

// Regra de Tres N______________100%
 	//             cont___________X
percentcoelho = totalCoelho /totalCobaias * 100;
percentrato = totalRato / totalCobaias * 100;
percentsapo = totalSapo / totalCobaias * 100;

 printf("RELATORIO FINAL");
 
 printf("Total %i/n",totalCobaias);
printf("Total de coelhos %i/n",totalCoelho);
printf("Total de ratos %i/n",totalRato);
printf("Total de sapos %i",totalSapo);
printf("Percentual de Coelhos %f/n",percentcoelho);
printf("Percentual de Ratos %f", percentrato);
printf("Percentual de Sapo %f", percentsapo );



}
