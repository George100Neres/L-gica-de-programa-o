/* Cire um programa em C que leia 10 numeros quaisquer e os imprima em ordem Crescente.*/
#include<stdio.h>

main(){
	
int i,N,aux,x,v[10];

for(i=0; i<10; i++){ // Leitura dos valores
 printf("Digite o valor da Posicao:");
 scanf("%d",&v[10]);
 
}
  for(i=0; i<10; i++){
  	for(x=i+1; x<10; x++){
  		
  		if(v[i]> v[x]){
  			aux= v[i]; 			// EX: aux recebeu o valor da tecla q Tab 
  			v[i]= v[x];			// EX: tecla q atribuira o valor da tecla w.
  			v[x]=aux;			// EX: a tecla W representada pelo v[x],recebera o valor da tecla TAB
		  }
	  }
  }
  
   for(i=0; i<10; i++){
   	
printf("O valor da posicao %i agora é %i",i,v[i]);
   }
}
