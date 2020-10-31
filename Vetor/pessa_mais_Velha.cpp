/* Problema mais velho.
 Fazer um programa para ler um conjunto de nomes e pessoas e suas respectivas idades. Os nomes
 devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome 
 da pessa mais velha.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 int main () {
 	
  char Nome[100];
  int N, Idade,posMaior;
  
  printf("Quantas pessoas serao digitadas?");
  scanf("%i",&N);
  
  for(int i=0; i<N; i++) {
  
  printf("Dados da %i pessoa",i + 1);
  scanf("%s/n",&Nome[i]);
  printf("Idade?/n");
  scanf("%i/n",&Idade);
}
 
posMaior = Nome[0];

for(int i=1; i<N; i++) {
  if (Nome[i] > posMaior || Nome[i] == posMaior){
  
 
  posMaior = i;
  }
 }

printf("Pessoa Mais Velha eh %s/n e %s\n",Nome);
 }
 
