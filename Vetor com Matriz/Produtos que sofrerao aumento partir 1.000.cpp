/* Elabore um programa que carregue dois vetores com dez posicoes cada um. O primeiro vetor com os c�digos
de dez produtos e a segundo vetor com os precos dos produtos.Mostre um relatorio do codigo,o preco e o novo
preco dos produtos. Mostre um relat�rio com o c�digo, o preco e o novo preco dos produtos ordenado por ordem
crescente de preco.Sabe-se que os produtos que sofrer�o aumento s�o aqueles que possuem c�digo por ou preco 
superior a R$1.000. Sabe-se que ainda que se o produto satisfaz as duas condicoes acima (codigo e preco)
o aumento de preco ser� de 20%, se satisfazer apenas a condicao de c�digo o aumento ser� de 15%,se satisfaz
apenas a condicao do preco o auemnto sera de 10%.*/

#include<stdio.h>

main(){
	
int i,x,co[10];
float aux,pr[10],prp;  // prp: primeiro pre�o

for(i=0; i<10; i++){
	
 printf("Digite o c�digo e o Preco:");
 scanf("%d  %f",&co[i],&pr[i]);
 
 // Comando de Leitura de Fluxo.
 prp[i] = pr[i]
  if((pr[i]> 1000))  && ((co[i]%2 == 1)){
  	pr[i]=pr[i] * 1.10;  // Reajuste do preco de 10%
  	
  } else if((co[i]%2==0)) && ((pr[i]<=1000)){
  	pr[i]= pr[i] * 1.15; // Reajuste do preco de %15
  	
  } else if(pr[i]> 1000) && ((co[i]%2 ==0)){
  	pr[i]= pr[i] * 1.20;
  	printf("\t%i  = %.2f",co[i], pr[i]);
  }
}

for(i=0; i<10; i++){  // COmando de ORdena��o
	
for(x=i+1; x<10; x++){
   
   if(pr[i] > pr[x]]){
   	aux = pr[i]; pr[i]= pr[x]; pr[x] = aux;
   	aux=co[i]; co[i]= co[x]; co[x] = aux;
   	aux = prp[i]; prp[i] = prp[x]; prp[x] = aux;
   }
}

for(i=0; i<10; i++){
	
	printf("\nCodigo %i\t Preco %.2f  \tAumento %.2f",co[i],prp[i],pr[i]);
}
}

}
