/* Escreva um programa que solicite ao usuario um numero e escreva simultaneamente a
sequencia crescente e decrescente entre 1 e esse numero.*/

#include<stdio.h>

main(){
 
 int i,j,n;

printf("Introd. um N:");
scanf("%d",&n);

j=n;

for(i=1; i<=n; i++, j-=3){
	printf("%d  %d\n",i,j);
}
} 
