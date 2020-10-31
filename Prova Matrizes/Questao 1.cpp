
#include<stdio.h>
#include<stdlib.h>

int main(){
	
 int i,j,N;
 
 printf("Informe a quantidade de linhas e colunas:");
 scanf("%d",&N);
 
 int mat[N][N];
 
 /*  {0,0,0,1,0},
   {1,0,0,0,0},
   {0,1,0,4,0},
   {0,0,1,0,0},
   {0,0,0,0,1} } ;// linhas e colunas */
 
 for( i=0; i<N; i++){
  for( j=0; j<N; j++){
  	
   printf("Elemento [%d, %d]",i,j);
     scanf("%d",&mat[i] [j]);
  }
 }
 
  		// Verificação de linhas igual a 1
  int verlin, vercol, linmaior=0,colmaior=0;
 
  
 for(i=0; i<N; i++) {
 	verlin=0;
	 vercol=0;
	 
   for(j=0; j<N; j++){
  
    verlin += mat[i][j];

    vercol += mat[j][i];
    
    
	}
	
	if(verlin >1 || verlin < 1) {
	 	 
	 	 linmaior=1;
	 	 
	}
	 if(vercol >1 || vercol <1) {
	 	
	 	colmaior =1;
	 }
	
  }
  	
  	if(colmaior ==1 || linmaior == 1) {
  		
  		printf("Nao e matriz de permutacao:");
	  } else {
	  	
	 printf("Essa matriz e permutação:");
	  } 
 	 
}
