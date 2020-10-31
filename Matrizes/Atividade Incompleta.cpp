
#include<stdio.h>
#include<stdlib.h>

int main (){
	
int linA, linB,colA,colB;
int i,j;
printf("Produto de Matrizes A X B. \n \n ");
printf("Quantidade de Linhas de A = ");
scanf("%d",&linA);

printf("Quantidade de Colunas A = ");
scanf("%d",&colA);


printf("Quantidade de Linhas de B = ");
scanf("%d",&linB);

printf("Quantidade de Colunas B = ");
scanf("%d",&linB);

float A[linA] [colA], B[linB] [colB];

 if (colA!=colB){
 	
  printf("A multiplicacao nao pode ser realizada:");
  printf("A quantidade de colunas de A e diferente do numeros de linhas de  B.\n");

  return 0;
 }
 
 printf("CARREGAMENTO DA MATRIZ A:\n");
 
 for(i=0; i<linA; i++){
  for(j=0; j<colB; j++){
  	
   printf("A[%d][%d]=", i+1,j+1);
   scanf("%f",&A[i][j]);
   
  	}
  }
  
  printf("CARREGAMENTO DA MATRIZ B:\n");
 
 for(i=0; i<linA; i++){
  for(j=0; j<colB; j++){
  	
   printf("B[%d][%d]=", i+1,j+1);
   scanf("%f",&B[i][j]);
   
   
  }
 }
 
 // IMPRIMINDO A
 
  		printf("CARREGAMENTO DA MATRIZ A:\n");
 
 for(i=0; i<linA; i++){
  for(j=0; j<colA; j++){
  	
   if(j != (colA - 1))
    { // Se a coluna j for diferente da qtd de colunas da matriz.
   	
   	printf("%.2f", \t&A[i] [j]);
   } 
   else 
    {
    printf("%.2f \n",&B[i] [j]);
	}
  }
 }
}
