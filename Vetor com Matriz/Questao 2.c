/* Um individuo A possui o código genético GATTACTGAGTCA e o índividuo B possui o código genético
CATACAGT. Se aplicar um critério de parentesco de 62%, os individuos A e B devem ser considerados
parentes, pois a fita AGTCA é uma parte contígua da sequência dos dois indivíduos e possui comprimento
de tamanho 5,onde 5 >= 8 *62%. Observe, que a menor das sequencias é de tamanho 8 do individuo B. Observe
que as fitas são avaliadas em cadeias circulares (seguindo o último elemento da cadeia,está o primeiro).

Escreva um programa em C que leia as duas cadeias (o tamanho máximo da cadeia é 512) e o valor de P e indique
se os individuos são parentes.*/

#include<stdio.h>
#include<string.h>
 
main(){
    
 int tam1[512], tam2[512]; tamCopia1, tamCopia2;
 int i,compr,contIguais,Copiastring1,Copiastring2;
 char str1,str2;
 
 
  printf("Informe a primeira String");
  scanf("%s ", &tam1);
 
 printf("Informe a segunda String");
 scanf("%s ", &tam2);
 
 tamCopia1 = str1; 
 tamCopia2 = str2;
 
 if(tam1 >= tam2) {
 
for( i = 0; i< tam1 - compr; i++) {
   for( j = 0; j < tamCopia2; j++){
       contIguais = 0;
      for(k = i, L = j, x = 0; x < compr; x++; k++; L++){
        if(str1 [k] == Copiastring2[L])
           contIguais++;
        if(contIguais== compr)
               break;
      }
      if(contIguais== compr)
               break;
   }
   if(contIguais== compr)
               break;
}
else
for( i = 0; i < tam2 - compr; i++) {
   for( j = 0; j < tamCopia1; j++){
       contIguais = 0;
      for(k = i, L = j, x = 0; x < compr; x++; k++; L++){
        if(str2 [k] == Copiastring1[L])
           contIguais++;
        if(contIguais== compr)
               break;
      }
      if(contIguais== compr)
               break;
   }
   if(contIguais== compr)
               break;
}

}
}
