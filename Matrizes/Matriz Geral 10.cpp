
 /* Ler uma matriz quadrada de ordem N (máximo =10), contendo números reais. Em seguida, 
 fazer as seguintyes açoes:
 
 a) calcular e imprimir a soma de todos os elementos da matriz.
 b) fazer a leitura do indice de uma linha da matriz e,dai, imorimir todos os elementos desta linha.
 c) fazer a leitura do índice de uma coluna da matriz e,dai,imprimir todos os elementos desta coluna.
 d) imprimir os elementos da diagonal principal da matriz.
 e) alterar a matriz elevando ao quadrado todos so números negativos da mesma. Em seguida imprimir
 a matriz alterada.*/
  #include<stdio.h>
  
  int i,N,j,linha,coluna;
  int mat[9] [9];
  float soma;
  
  main(){
  
 printf("Qual a ordem da matriz?");
 scanf("%f",&N);
 
 for(i =0; i<=N; i++){
 	for(j=0; j<=N; j++){
 	 printf("Elemento [%i  %i]",i,j);
 	 scanf("%i %i",&mat[i] [j]);
 
	 }
 }  
 
 soma =0;
 
 printf("SOMA DOS POSITIVOS:");
 scanf("%2.f",&soma);
 
 printf("Escolha uma linha:");
  scanf("%i",&linha);
  printf("Linha Escolhida:");
  
  for(j=0; j<=N; j++){
 printf("%i %i",mat[linha] [j]);
}

printf("Escolha uma coluna:");
  scanf("%i",&coluna);
  printf("Coluna Escolhida:");
  
  for(j=0; j<=N; j++){
 printf("%i %i",mat[i] [coluna]);

  }
  printf("Diagonal Principal:");
	 for(i=0; i<N; i++){
	 	printf("%d [%i  %i]",mat[i] [i]);			//msm linha e coluna.
	 }
 
 for(i =0; i<=N; i++){
 	for(j=0; j<=N; j++){
 	if(mat[i] [j] < 0){
 		mat[i] [j] = mat[i] [j] * mat[i] [j];
	 }
 
	 }
 }  
 
 printf("MATRIZ ALTERADA:");
   for(i=0; i<=N; i++){
   	for(j=0; j<=N; j++){
   	printf("%i  %i",mat[i] [j]);
	   }
   } 
    
}
