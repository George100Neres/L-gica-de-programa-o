
#include<stdio.h>
#include<string.h>

main(){
	
 char nome_cliente[50]= "Fulano de Tal ";
 int i,cont=0;
 //char nome_cliente[3] ='\0';
 /*
 for(i=0; i<6; i++){
 	
 printf("Valor da  elemento %d da string %c ",i,nome_cliente[i]);
 }*/
 
 for(i=0; nome_cliente[i]!= '\0'; i++){
 	
 printf("\nValor da  elemento %d da string %c \n",i,nome_cliente[i]);
 cont++;
 }
}
