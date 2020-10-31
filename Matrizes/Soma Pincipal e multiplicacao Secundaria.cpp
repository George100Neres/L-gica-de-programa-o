
#include<stdio.h>


main () {

	
int matr [3] [3];
int li,co,som=0,mult=1;

for(li=0; li<=3; li++){ // Comando de LEitrua Linhas 

for(co=0; co<=3; co++){ // Comando de Leituras de Colunas 
  printf("Digite o valor da linha [%i] coluna[%i] da Matriz M: ");
  scanf("%d",&matr[li] [co]);
}
}

for(li=0;li=3; li+){ // Comando de Exibição e Soma da Diagonal Principal.
	
  printf("Valor da Diagonal Principal %i",matr[li] [co]);
  som = som +matr[li] [co];
}

for(li=0; li=3; li++){// Comando de Exibição da Diganoal Secundaria.
	
 for(li=0; li=3; li++){
 
 	
if((li + co)==2) {
	

printf("\n Valor da Diagonal Secundaria %i",matr[li] [co]);
  mult = mult * matr[li] [co];
}
 }
}
 printf("A soma principal da Diagonal e %i\n e a Multiplicacao da Diagonal Secundaria e %i",som,mult);
}

