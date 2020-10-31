/* /* Um individuo A possui o c�digo gen�tico GATTACTGAGTCA e o �ndividuo B possui o c�digo gen�tico
CATACAGT. Se aplicar um crit�rio de parentesco de 62%, os individuos A e B devem ser considerados
parentes, pois a fita AGTCA � uma parte cont�gua da sequ�ncia dos dois indiv�duos e possui comprimento
de tamanho 5,onde 5 >= 8 *62%. Observe, que a menor das sequencias � de tamanho 8 do individuo B. Observe
que as fitas s�o avaliadas em cadeias circulares (seguindo o �ltimo elemento da cadeia,est� o primeiro).

Escreva um programa em C que leia as duas cadeias (o tamanho m�ximo da cadeia � 512) e o valor de P e indique
se os individuos s�o parentes.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 512
 
int main(void){

 
 int i,j;
 char str1[TAM], str2[TAM];
 
 
  printf("Informe a primeira String");
  scanf("%s", str1);
 
 printf("Informe a segunda String");
 scanf("%s", str2);
 
 
 for(i = 0; i != '\0'; i++){ 
 	
 	if(str1[i] >= 'a' &&  str1[i] <= 'z' ){
 		
 		str1[i] = str1[i] - 32;
	 }
 	
 	if(str2[i] >= 'a' &&  str2[i] <= 'z' ){
 		
 		str2[i] = str2[i] - 32;
 	}
 	
 }

 
for(i = 0; i != '\0'; i++){
	
	printf("%c", str1[i]);
	
}


for(i = 0; i != '\0'; i++){
	
	printf("%c",str2[i]);
	
} 


}
