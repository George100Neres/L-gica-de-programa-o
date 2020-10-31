
#include<stdio.h>
#include<stdlib.h>
main(){
	
 int i,cs=0,co=0,N=1, V[50], k,j;
 
 printf("\nEscolha um valor entre 0 e 50\n");
 scanf("%d",&N);
 
 printf("Digite uma sequencia de numeros de acordo com a quantidade escolhida:");
 
 for(i=0; i<N; i++){
 	scanf("%d",&V[i]);
 		
	 }
	 
  	for(i=0; i<N; i++){
  	for(j=0; j<N; j++){
  		
  	if(V[i]==V[j]){
  		if(co==k){
  		cs++;
  	    break;
      	 }
		  } else{
		  	break;
		  }
	  }
	 
  }
   
   printf("%d",co);
 }

