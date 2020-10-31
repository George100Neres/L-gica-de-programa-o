/*Uma função hash é um algoritmo que mapeia dados de comprimento variavel para
dados de comprimento fixo.Uma empresa definiu a forma de geração de uma string qualquer
da seguinte forma: */

#include<stdio.h>
#include<string.h>

char string[80];
int o,h,num,lim;
num=0;
printf("digite as letras\n");
gets(string);

printf("Digite a chave e limite\n");
scanf("%d",&lim);
h=0;

for(o =0; string[0] != '\0'; o++){
	
	if(string[0] > 'A' && string[o] < 'Z')
		num = string[0] - 'A';
	 else
	num = string[o] - 'a';
	num = num + o / lim + o % lim;
	h +=num;
	 
  }

h %=100;

printf("O hash sera %d\n",h);
retrun 0;

}
