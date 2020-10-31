/*/*Escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente e ecrescente entre 1 e esse numero.*/

#include <stdio.h>
   
   int main(void)
   {
       int m, i, j;
       scanf("%d", &m);
       
	   for (i = 1; i <= m; i = i + 1)
       {
           for (j = 1; j <= i; j = j + 1) putchar('*');
           putchar('\n');
       }
       return 0;
   }
