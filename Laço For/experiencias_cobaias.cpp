
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	
 int N,i,qtd, totalCobaias, totalSapos, totalCoelhos, totalRatos;
 float percentratos, percentsapos, percentcoelhos;
 char tipCobaia;
 
 totalSapos = 0;
 totalCoelhos = 0;
 totalRatos = 0;
 
 printf("QUnatas cobaias de teste serao digitadas?");
 scanf("%i",&N);
 
 for( i=0; i<N; i++) {
 	
 	printf("Quantidade de Cobaias:");
 	scanf("%i",&qtd);
 	printf("Tipo de Cobaia:");
 	scanf("%s",&tipCobaia);
 	
 	if (tipCobaia == 'R') {
 		totalRatos = totalRatos + qtd;
	 }
	 
	 else if (tipCobaia == 'S') {
	 	totalSapos = totalSapos + qtd;
	 }
	 
	 else 
	 totalCoelhos = totalCoelhos + qtd;
	 
 }
 
   totalCobaias = totalRatos + totalCoelhos + totalSapos;
   
   percentcoelhos = totalCoelhos /  totalCobaias  * 100;
   percentratos = totalRatos / totalCobaias * 100;
   percentsapos = totalSapos / totalCobaias * 100;
   
   printf("RELATORIO FINAL");
   printf("Total Cobaias %i",totalCobaias);
   printf("Total de Coelhos %i",totalCoelhos);
   printf("Total de Sapos %i",totalSapos);
   printf("Percentual de Sapos %3.f",percentcoelhos);
   printf("Percentual de Ratos %3.f",percentratos);
   printf("Percentual de Coelhos %3.f",percentsapos);
   
   return 0;
}
