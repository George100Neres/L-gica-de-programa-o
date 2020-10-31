/* Desenvolver uma tabuada de 1 até 10.*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
   int i,N,produto;
	
  printf("Deseja a Tabuada para queal valor?");
  scanf("%i",&N);
  
   for(int i =1; i<N; i++){
   	
   	produto = N *i;
   	printf("%i\n",N,"%i",i,"%i",produto);
   	
   }
}
