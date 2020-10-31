
#include<stdio.h>

main(){
	
 int N,X[N],i,co=0,sm=0,k,j;
 
 for(i=0; i<N; i++){
 	
 printf("Digite um numero:");
 scanf("%d",&N);
 
 printf("Digite um valor de X:");
 for(i=0; i<N; i++){
 	
 	scanf("%d",&X);
 }
 
 for(i=0; i<N; i++){
  for(j=i; j<N; j++){
  	 
 if(X[i]==X[j]){
 	k = co++;
 	break;
  }
  } else{
  	
  	k =0;
  }
 }
}

printf("%d",k);
}
