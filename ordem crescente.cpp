/* Ecreva um programa que leia dois numeros e os apresente por ordem decrescente.*/

#include<stdio.h>
#include<stdlib.h>
 
  main(){
  	int x,y,ordcr;
  	
  	printf("Introduza um dos numeros N° S:");
  	scanf("%d %d ",&x,&y);
  	
  	if (x < y){
  		ordcr = x;
  		x = y;
  		y = ordcr;
	  }
	  printf("%d %d \n",x,y);
  }
