
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	
 char nome1[50],nome2[50];
 
 printf("DDigite o primeiror nome:\n");
 gets(nome1);
 
   printf("Digite o segundo nome:\n");
 gets(nome2);
 
 printf("Nomes em ordem alfabetica:\n\n");
 
 // Retorna -1 se a primeira string for menor que a segunda == -1
 // Retorna 1 se a string for maior que a segunda.
 // Retorna a 0 se a primeira string for igual a segunda 
 //        EX:ana e menor que andré
    if (strcmp(nome1, nome2) < 0){
    	
    printf("%s\n\n%s\n\n",nome1,nome2);
	}
	else {
   printf("%s\n\n%s\n\n",nome2,nome1);
	}
	
	printf("Valor da strcmp: %d",strcmp(nome1,nome2));
	
}
