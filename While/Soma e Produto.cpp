
/* Programa que que calcula a soma e o produto dos n primeiros números naturias.*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
 int n,produto=1,num;
 int soma =0;
 
 printf("Introduza um N:");
 scanf("%d",&num);
 
 for(int  n=produto; n<=num; n=n+1){
 	soma = soma +n;
 	produto = produto * n;
 }
 
 printf("SOma = %d\nProduto = %d\n",soma,produto);
}
