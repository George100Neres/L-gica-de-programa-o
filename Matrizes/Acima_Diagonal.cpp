 /* Ler um Número inteiro N (máximo =10)e uma matriz quadrada de ordem N
 contendo numeros inteiros .Mostrar a soma dos elementos acima da diagonal 
 principal . Um exemplo de números acima da diagonal principal e mostrado
 ao lado(no caso as células com fundo cinza.)*/
 
 #include<stdio.h>
 
 main(){
 	
 int N,i,j,soma;
 int mat[9] [9];
 
 
 printf("QUal a Ordem da Matriz?");
 scanf("%i",&N);
 
  for(i=0; i<N; i++){
  	for(j=0; j<N; j++){
  	printf("Elemento [%i  %i]",i,j);
  	scanf("[%i]",&mat[i] [j]);
	  }

  }
  
  soma =0;
  
  
  for(i=0; N<=i; i++){
  	for(j=0; j<=i; j++){
      soma = soma + mat[i] [j];
	  }
  }
  
  printf("Soma dos Elementos Principais %i",soma);
 }
 
