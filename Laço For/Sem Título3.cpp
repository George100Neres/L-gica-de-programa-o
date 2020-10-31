/*Escreva um programa que sejam escritas letras em cada nível,começando o nível inicila com a letra 'A'.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
 int l, c, j;
 scanf("%d",&l);
 
   for(c = 1 ; c <= l;  c= c+1)
   {
   	 for (j = 1 ; j<=c; j +1)
   	 printf("A");
   	 printf("\n");
   	 break;
   }
   return 0;
   
}
