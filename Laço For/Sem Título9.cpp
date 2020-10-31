/*Escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente e ecrescente entre 1 e esse numero.*/

#include<stdio.h>
#include<stdlib.h>
main()
 {
 
 int i,n;
 
 printf("Introd. um N°: ");
 scanf("%d",&n);
 
 for(i=1 ; i<=n ; i++)
   printf("%d    %d\n",i,n-1+1);
   
}
