
#include<stdio.h>

int main(){
	
 int N;
  int i,j, c=0;
  
  printf("Digite quantos asteriscos ira aparecer na tela:");
  scanf("%d",&N);
  
  for(i=1; i<N; i++){
  	for(j=1; j<i; j++){
  	c++;
  	printf("*",c);
	  }
	printf("\n");
  }
}
