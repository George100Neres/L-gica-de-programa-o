 #include<stdio.h>
 
  main(){
  
  
 int i,N,M,j,cont;
 int mat [9] [9];
    int vet[9];
 
 printf("Qual a quantidade de linhas da Matriz?");
 scanf("%d",&N);
 
 printf("Qual a quantidade de colunas da Matriz?");
 scanf("%d",&M);
 
 for(i=0; i<N; i++){
 	printf("Digite os elementos de {%d}",i + 1,"da linha:");
 	for(j=0; j<M; j++) {
 		scanf("%d",&mat[i] [j]);
	 }	 
 }
 
 for(i=0; i<N; i++){
 	vet[i]=0;
 	
 	for(j=0; j<N; j++){
 		vet[i] = vet[i] + mat[i] [j]; // vet possicao i, soma linha + coluna.
	 }
 }
 
 printf("VETOR GERADO:");
 
 for(i=0; i<M; i++){
 	printf("%d/n",vet[i]);
 }
 
}
 
