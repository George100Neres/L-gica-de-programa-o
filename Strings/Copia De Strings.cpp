
#include<stdio.h>
#include<string.h>

main(){
	
   char nome1[15]= "Pedro";
   char nome2[15] = "Marcio";
   

   
   printf("Nome = %s \n", nome1);
   
   strcpy(nome2,nome1);
   // strcpy(nome_destino para nome_origem)
   
   printf("Nome = %s \n",nome1);
   
}
