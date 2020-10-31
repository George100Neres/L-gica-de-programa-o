/* Um número n é dito abundante se ele for um número inteiro positivo
para o qual a soma dos seus divisores excedo o seu dobro(2n).

Assim 10 não é abundante pois(1+2+5+10 =17 não é maior que 20 = 2*10),mas
12 é abundante pois(1+2+3+4+6+12=28 é maior que 24 = 2 *12).

Escreva um programa em C, que leia um valor K qualquer, e gere uma sequencia
com os primeiro K números abundantes.*/

#include<stdio.h>

main(){
	
 int k, soma =0,x,y=1,i=0;
 
 printf("Digite a quantidade de numeros abundantes desejadas.\n");
 
 scanf("%d",&k);
 
 while(i < k){
 	
 	for(x=1; x<=y; x++){
 		
 		if(y%x ==0){
 			
 			soma = soma +x;
		 }
	  if(soma >2 *y){
   printf("\nO numero %d e abundante",y);
    		i++;
	  }
	 }
	 
	 y++;
	 x=0;
	 soma =0;
	 
 }
 
 return 0;
 
}
