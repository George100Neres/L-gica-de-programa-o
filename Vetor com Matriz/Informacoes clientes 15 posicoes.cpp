 /*Uma locadora de v�deos tem guardado, em um vetor de 15 posi��es, o c�digo dos seus clientes e,
 em outro vetor, tem guardado a quantidade de filmes retiradas por esses clientes durante o ano
 de 2014. Agora,est� locadora est� fazendo uma promo��o e quer saber quais os 10 clientes que mais
 retiraram filmes em 2014. Fa�a um programa em C que leia, armazene e exiba as inforam��es perdidas
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
 		
// Codigo de Ordena��o da quantidade
  aux =qtd[i];
  qtd[i]=qtd[x];
  qtd[x]=aux;
  // Ordena��o do codigo do cliente
  aux= cod[i];
  cod[i]= cod[x];
  cod[x]=aux;
  
	 } else{
	 	
	 }
 }
 
  for(i=0; i<10; i++){ // Comando de Exibi��o ou Impress�o i<10 = Clientes.
  	
printf("\n %i \t C�digo %i Quantidade  %i",i+1,cod[i],qtd[i]);
}
 }
