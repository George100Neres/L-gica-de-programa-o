/* /* Um individuo A possui o código genético GATTACTGAGTCA e o índividuo B possui o código genético
CATACAGT. Se aplicar um critério de parentesco de 62%, os individuos A e B devem ser considerados
parentes, pois a fita AGTCA é uma parte contígua da sequência dos dois indivíduos e possui comprimento
de tamanho 5,onde 5 >= 8 *62%. Observe, que a menor das sequencias é de tamanho 8 do individuo B. Observe
que as fitas são avaliadas em cadeias circulares (seguindo o último elemento da cadeia,está o primeiro).

Escreva um programa em C que leia as duas cadeias (o tamanho máximo da cadeia é 512) e o valor de P e indique
se os individuos são parentes.*/

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
