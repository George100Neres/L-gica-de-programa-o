/* Escreva um programa que leia ddo numero 1 a 100 por extenso*/

#include<stdio.h>
#include<stdlib.h>

  main(){
  	int n,m,num;
  	char centena,dezena,unidade;
  	
  	printf("Digite um numero:");
  	scanf("%i",&num);
  	
  	
  	if(num >100){
  		m = n/100;
  		n = n%100;
  		printf("E uma centena:");
	  }
	  if(num >100){
	  	n = n%10,n%20;
	  
	  }
	  switch(m){
	  	case 1: printf("um");break;
	  	case 2: printf("dois");break;
	  	case 3: printf("tres");break;
	  	case 4: printf("quatro");break;
	  	case 5: printf("cinco");break;
	  	case 6: printf("seis");break;
	  	case 7: printf("sete");break;
	  	case 8: printf("oito");break;
	  	case 9: printf("nove");break;
	  	case 10: printf("dez");break;
	  	case 11:printf("onze");break;
	  }
	
	  	
	  	
	  }
	  
  
