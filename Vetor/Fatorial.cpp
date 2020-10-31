
#include<stdio.h>

main(){
	
 int i,N,x,qtdsub=0; 
 
 scanf("%d",&N);
 x=1;
 
 
  for (i=1; i<N; i++){
  	
  	x*= i;
  }
  
  printf("Subsequencias de %i e %i",N,x);
}
