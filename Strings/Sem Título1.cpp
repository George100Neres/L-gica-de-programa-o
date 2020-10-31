
#include<stdio.h>

int main(void)
{
 
   char variavel,alfabetico;
   char nome[20];
   printf("Digite uma palavra:");
   scanf("%s",nome);
   
   int i=0;
   
   while(nome [i]!= '\0'){
   	alfabetico = (nome[i]);
   	i++;
   }
   
   if ((variavel >='a' && variavel <='z')) || ((variavel >='A' && variavel <='Z')){
   	printf("E uma letra:");} 
	   else
    {
   printf("Nao e uma letra:");
     }
   return 0;
}
