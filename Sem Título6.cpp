/*Escreva um programa que indique quantos segundos tem um determinado número de horas.*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
  int n_horas;
  long res;
  char tipo;
  
  puts("Numero de Horas:");
  scanf("%d",&n_horas);
  
  printf("O que mostrar? (m/s/d)");
  scanf(" %c", &tipo);
  
  if (tipo == 'm' || tipo=='M')
     res = n_horas<0 ? 0 : n_horas * 60L;
	 else if
	 	(tipo == 's' || tipo=='S')
     	res = n_horas<0 ? 0 : n_horas * 3600L;
     	else if
     	(tipo == 'd' || tipo=='D')
        res = n_horas<0 ? 0 : n_horas * 36000L;
      
     printf("%d horas --> %ld%c ", n_horas,res,tipo);
 }

