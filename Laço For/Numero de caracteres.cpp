/* Escreva um programa que solicite ao usuario um numero e um caractere.Em seguida, terá que preencher
n linhas, cada uma delas com n caracteres.*/

#include<stdio.h>

main(){
 
 int i,j,n;
 char ch;
 
 printf("Introduza um n: ");
 scanf("%d",&n);
 printf("Introduza um char ");
 scanf(" %c",&ch);
 
 for(i=1; i<=n; i++ ){
 }
for(j=1; j<=n; j++){
	putchar(ch);
	putchar('\n');
}
 }

