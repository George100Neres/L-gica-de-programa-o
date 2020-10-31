/*Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de pulverização
dependem do tipo de praga e da área a ser contratada conforme a tabela:
• Tipo 1 – ervas daninhas R$ 50,00 por acre;
• Tipo 2 – gafanhotos R$ 100,00 por acre;
• Tipo 3 – broca R$ 150,00 por acre;
• Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%. Em adição,
qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que
ultrapassar os R$ 750,00. Caso ambos os descontos se apliquem, o da área é calculado antes. Fazer um
programa que leia: o tipo de pulverização (1 a 4) e área a ser pulveizada; e imprima o valor a ser
pago. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	
	char nomedofazendeiro;
	float tipo=0,area=0,pf=0,custofinal=0;
	
	printf("Nome do fazendeiro:");
	scanf("%c\n",&nomedofazendeiro );
	printf("Tipo de pulverizacao:");
	scanf("%f",&tipo);
	printf("Area a ser pulverizadad:");
	scanf("%f",&area);
	
	if(tipo==1 && area>=1000){
		pf=area*5;
		custofinal=-(pf*0.5);
	}
	else{
			pf=5*area;
		custofinal=pf;
	}
	
	if(tipo==2 && area>=1000){
		pf=area*100;
		custofinal =-(pf*0.5);
	}else{
	
		pf=100*area;
		custofinal=pf;
	}
	if(tipo==3 && area>=1000){
		pf=area*150;
		custofinal=-(pf*0.5);
	}
	else{
		pf=150*area;
		custofinal=pf;
	}
	if(tipo==4 && area>=1000){
		pf=area*250;
		custofinal=-(pf*0.5);
	}
	else{
		pf=250*area;
		custofinal=pf;
	}
	if(custofinal >=750){
		
		custofinal = custofinal-(custofinal*0,10);
	}
	 printf("\nO nome do fazendeiro e:  %c",nomedofazendeiro);
	 printf("\nO custo final de pulverizacao e: %f",custofinal);
	
}
