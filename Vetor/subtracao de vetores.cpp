#include<stdio.h>
#include<stdlib.h>

main()
{
 int i;
 int vet[10];

   
  
   for( i=0; i<10 ; i++)
        vet[i] = i;
         
   for(i=10-1; i>=0; i-=2)
   printf("%d\n",vet[i]);
         
}
