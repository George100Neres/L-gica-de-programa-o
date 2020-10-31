/* Um comerciante deseja fazer um levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de vendas
das mesmas .Fazer um programa que leia tais dados e determine e escreva quantas mercadorias proporcionaram.
* lucro <10%
* 10% <= lucro <=20%
* lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.*/
#include<stdio.h>
#include<string.h>

 main () {

 int i,N,acima,entre,abaixo;
 char nomes[99];
 float lucro,percentualLucro,totVenda,totLucro,totCompra;
 float precoscompra[99];
 float precoVenda[99];
 
 printf("Serao digitados dados de quantos produtos?");
 scanf("%d",&N);
 
 for(i=0; i<N; i++){
 	
 printf("Produto %i",i+1);
 printf("Nome:");
 scanf(" %s",&nomes[i]);
 
 printf("Preco de Compra:");
 scanf("%f",&precoscompra[i]);
 
 printf("Preco de Venda ");
 scanf("%f",&precoVenda[i]);
 
 
 
 }
 
 abaixo =0;
 acima =0;
 entre=0;
 
 for(i=0; i<N; i++){
 lucro = precoVenda[i] - precoscompra[i];
 percentualLucro = lucro * 100/ precoscompra[i];
 
 if(percentualLucro <10){
 	abaixo = abaixo +1;
 }
 else if(percentualLucro <=20){
 	entre = entre +1;
 }
 else
 acima = acima +1;
 
 }
 
 totCompra =0;
 totVenda=0;
 
 for(i=0; i<N; i++){
totCompra = totCompra + precoscompra[i];
totVenda = totVenda + precoVenda[i];
 }
 
 totLucro = totVenda - totCompra;
 
 printf("Relatorio:");
 printf("Lucro abaixo de  %d\n",abaixo);
 printf("Lucro entre de 10 e 20 %d\n",entre);
 printf("Lucro acima de 20 %d\n",acima);
 printf("Valor total da compra %f\n",totCompra);
 printf("Valor total da venda %f\n",totVenda);
 printf("Lucro total %f",totLucro);
 return  0 ;
}
