 /* Bruninho est� programando um personagem virtual apra o pr�ximo desafio de um jogo de aventura
em que, numa das fases, o personagem tem que entrar em um corredor, percorrer algumas salas e depois
sair do corredor. Ele pode entrar apenas uma vez, e passar por cada sala apenas uma vez.Todas as salas
possuem uma porta de entrada e uma de sa�da. Ao passar por uma sala o jogador ganha um certo n�mero
de vidas (que pode ser negativo!)Por sorte,sempre existe ao menos uma sala onde se ganha um n�mero
positivo de vidas. EX:

  0	 /   1	/  2   /   3	/   4    /  5    /     6    // Colunas
  -2 /   5  /  -1  /    8   /   -11   /   7   /     3   // 
  
  No exempl acima, o personagem de Bruniho pode ganhar, no m�ximo, 12 vidas, por 
  emeplo,entrando pela sala 1 e saindo pela sala 3 (5-1+8 = 12). Voc� deve escrever um programa,
  que leia, o n�mero de vidas correspondentes a cada sala do corredor (o corredor possui 10 salas,
  calcule e imprima a quantidade m�xima de vidas que ser� poss�vel ganhar.
*/ 

#include<stdio.h>
main (){

int v[10], b[10],aux, maior=0, a, c;

for(a=0; a<10; a++){
	scanf("%d",&v[a]);
 } 
	for(a=0; a<10; a++){
		b[a] = v[a];
		
  for(c=a+1; c<10; c++){
  	
  	b[a] =b[a]+ v[c];
  	au
  }
}
}
