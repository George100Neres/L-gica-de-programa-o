
#include<stdio.h>

main(){
	
 int cont,N,sm,resposta=0;
 
 printf("Digite o Valor:");
 scanf("%d",&N);
 
 for(cont=1; cont<=N; cont++){
   for(sm=1; sm<=N; sm++){
   	
   	if(cont % sm == 0){
   	 	
   	resposta = resposta + (cont / sm);	
	   }
   }  printf("%d\n",resposta);


 }

}
