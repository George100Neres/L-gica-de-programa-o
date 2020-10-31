

#include<stdio.h>

main()
{
  int N,i,M,j,cont;			// M (linhas) N (Colunas)
  int mat[9] [9];
  
  printf("Qual a ordem da Matriz?");
  scanf("%i",&N);
  
  for(i=0; i<N; i++){
  	for(j=0; j<N; j++){
  		printf("Elemento [%i,%i]",i,j);
  		scanf("%i",&mat[i] [j]);
	  }
  }
  
  printf("Diagonal Principal:");
   for(i=0; i<N; i++){
   	printf("%i",mat[i] [i]);
   }
   
   cont =0;
   
   for(i=0; i<N; i++){
   	for(j=0;j<N;j++){
   		if(mat[i][j] < 0)
   		{
   		 cont = cont + 1;
		  }
	   }
   }
   
   printf("Quantidade de Negativos:%i/n",cont);
}
