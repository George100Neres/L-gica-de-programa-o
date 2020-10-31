/*Escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente e ecrescente entre 1 e esse numero.*/

#include<stdio.h>

main(){
 
 int i,n,j;
 
 printf("Introd. um N°: ");
 scanf("%d",&n);
 
   for(i=1 ,j=n ; i<=n ;i++, j--)
     printf("%d  %d\n",i,j);
}
