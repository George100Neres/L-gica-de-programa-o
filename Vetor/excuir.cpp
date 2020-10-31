#include <stdio.h>
#include <stdlib.h>
int main(){
 int i;
 char palavras[3][30];
 //captura palavras
 for(i=0;i<5;i++){
 printf("Informe palavra %d: ",i+1);
 gets(palavras[i]);
 }
 //EXIBE EM ORDEM INVERSA
 printf("\n::: Palavras em ordem inversa :::\n");
 for(i=4;i>=0;i--)
 printf("%s\n",palavras[i]);
 return 0;
}
