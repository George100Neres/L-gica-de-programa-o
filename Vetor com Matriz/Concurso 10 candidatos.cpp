/* Crie um programa em C que leia o numero das inscri��es e as notas de 10 candidatos de um concurso
e exiba a inscri��o dos candidatos pela ordem de classifica��o no concurso ou seja (ordenadas pelas notas.)*/

#include<stdio.h>

main(){
	
 int i,x,aux;
 float insc[10],nt[10];  // insc: isncri��o , nt: notas.
 
 for(i=0; i<10; i++){
 	
 	printf("Digite a Inscri��o e a Nota do Candidato:");
 	scanf("%f  %f",&insc[i],&nt[i]);
 }
 
  for(i=0; i<10; i++){
  	
  	for(x=i+1; x<10; x++){
  		
  		if(nt[i] < nt[x]){
  			// Valor das notas 
  			aux= nt[i];
  			nt[i]= nt[x];
  			nt[i]= aux;
  			
  			// Mudar numero de Inscri��o
  			aux= insc[i];
  			incs[i]= insc[x];
  			insc[i]= aux;
  			
		  }
	  }
  }
  
  for(i=0; i<10; i++){
  	
  	printf("\n Nota %f e Inscricao %f",nt[i],incs[i]);
  }
} 
