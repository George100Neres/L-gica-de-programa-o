 /*Uma locadora de vídeos tem guardado, em um vetor de 15 posições, o código dos seus clientes e,
 em outro vetor, tem guardado a quantidade de filmes retiradas por esses clientes durante o ano
 de 2014. Agora,está locadora está fazendo uma promoção e quer saber quais os 10 clientes que mais
 retiraram filmes em 2014. Faça um programa em C que leia, armazene e exiba as inforamções perdidas
 .Os vetores devem ser ordenadso. */
 
 #include<stdio.h>
 
 main(){
 	
int i,aux,qtd[15],cod[15],x;

 for(i=0; i<15; i++){
 	
  printf("\n Codigo:");
  scanf("%d",&cod[i]);
  printf(" Quantidade");
  scanf("%d",&qtd[i]);
  
 	if(qtd[i]<qtd[x]){
 		
// Codigo de Ordenação da quantidade
  aux =qtd[i];
  qtd[i]=qtd[x];
  qtd[x]=aux;
  // Ordenação do codigo do cliente
  aux= cod[i];
  cod[i]= cod[x];
  cod[x]=aux;
  
	 } else{
	 	
	 }
 }
 
  for(i=0; i<10; i++){ // Comando de Exibição ou Impressão i<10 = Clientes.
  	
printf("\n %i \t Código %i Quantidade  %i",i+1,cod[i],qtd[i]);
}
 }
