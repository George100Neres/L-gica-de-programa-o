/* Façca um programa que em C leia o número de matricula e a idade de 15 alunos e exiba os numeros
da matricula e as idades deloes ordenadas pela idade. */
#include<stdio.h>

main(){
	
int i,x,soma,aux,matr[15],id[15];

for(i=0; i<15; i++){
 printf("Digite o Número da Matrícula e a idade:");
 scanf("%d  %d",&matr[i],id[15]);
 
}

 for(i=0; i<15; i++){ // Comando Ordenação
 
 for(x=i+1; x<15; x++){
 	
 	if(id[i]> matr[x]){
 		aux = id[i];  // EX: Aux armazenou o valor da variavel id[i]
 		id[i] = matr[x];
 		matr[x] = aux;
 		
 		aux = matr[i];
 		matr[i]= matr[x];
 		matr[x] = aux;
	 }
 }
 
 }
 
  for(i=0; i<15; i++){
  	
printf("\nA idade  %i tem a matricula  %i ",id[i],matr[i]);
}
}
