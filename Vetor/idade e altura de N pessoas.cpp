  /*Fazer um programa para ler nome, idade e altura de N pessoas,conforme o exemplo.Depois,mostrar na tela
 a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,bem como
  o nome dessas pessoas se caso houver.*/
  
 #include<stdio.h>
 #include<string.h>
 
 int main()
 {
 	
 int N,menores;
 char nomes[N] [50];	// Vetor de N posiçoes,onde cada posição será um vetor de 50 char.
  double alturas[N];
  double soma,media,percentualMenores;
  int idades[N];
  
  printf("Quantas pessoas serao digitadas:?");
  scanf("%d",&N);
  
   for(int i=0; i<N; i++){
   
  
  printf("Nome: ");
  fseek (stdin, 0,SEEK_END); 
  gets(nomes[i]);
  printf("Idades:");
  scanf("%d", &idades[i]);
  printf("Altura: ");
  scanf("%f", &alturas[i]);
 }

 soma =0; 
 
 for(int i=0; i<N; i++){
 	
  soma = soma + alturas[i];
  
 }
   media = media / N;
   
    printf("Altura media %.2f",media);
    
    menores =0;
    
    for(int i=0; i<N; i++){
    	if(idades [i] < 16){
    		menores++;
		}
	}
	  // Aplica-se uma regra de três N - 100%
			//                       Cont - x%
	percentualMenores = menores * 100.0 / N;
	printf("Pessoas com menos de 16 anos: %.1f %%\n",percentualMenores);
	
	 // No C,para poder printar o sinal de porcetagem,temos que colocar 2%, um so apenas para placeholer.*/
	 for(int i=0; i<N; i++){
    	if(idades [i] < 16){
    	  printf("Nomes: %s\n",nomes[i]);
		}
	}
  }
  
  

