/* Um individuo A possui o c�digo gen�tico GATTACTGAGTCA e o �ndividuo B possui o c�digo gen�tico
CATACAGT. Se aplicar um crit�rio de parentesco de 62%, os individuos A e B devem ser considerados
parentes, pois a fita AGTCA � uma parte cont�gua da sequ�ncia dos dois indiv�duos e possui comprimento
de tamanho 5,onde 5 >= 8 *62%. Observe, que a menor das sequencias � de tamanho 8 do individuo B. Observe
que as fitas s�o avaliadas em cadeias circulares (seguindo o �ltimo elemento da cadeia,est� o primeiro).

Escreva um programa em C que leia as duas cadeias (o tamanho m�ximo da cadeia � 512) e o valor de P e indique
se os individuos s�o parentes.*/

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
