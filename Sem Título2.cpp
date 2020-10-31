/* Escreva um programa que apresente em qual unidade ele pertence*/

#include<stdio.h>
#include<stdlib.h>

  main(){
  	
  	int num;
  	
  	printf("Digite algum numero:");
  	scanf("%i",&num);
  	
  	if(num <= 9) {
  		printf("Esse numero pertence a  classe unidade:%i",num);
	  }
	  else if(num <=99) {
	  	num = 100/10;
	  	printf("Esse numero pertence a classe  dezena:%i",num);
	  }
	  else if(num <=999){
	  	num = 1000/10;
	  	printf("Esse numero pertence a classe centena:%i",num);
	  }
	  else 
	     num = 10000/10;
	     printf("Esse numero pertence a classe milhar:%i",num);
  }
