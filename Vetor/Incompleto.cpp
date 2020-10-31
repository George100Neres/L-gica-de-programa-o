
/* Fazer um programa para ler o nome e idade das duas pessoas. Ao final mostrar uma mensagem com os nomes
e a idade média entre essas pessoas, com uma casa decimal.*/

#include<stdio.h>

int main(){
	
 char nom1[50],nom2[50];
  int idade1,idade2;
  float idademedia;
  
  printf("Dados da primeira pessoa:");
  gets(nom1);
 
  printf("Idade?");
  scanf("%i",&idade1);
  
  printf("Dados da segunda pessoa: ");
  fseek(stdin, 0, SEEK_END);
  gets(nom2);
  printf("Idade?");
  scanf("%i",&idade2);
  
   idademedia = (idade1 + idade2) /2;
  
  printf("A idade media de %s e %s eh de %.1f anos",nom1,nom2,idademedia);  
  
  return 0;
}
