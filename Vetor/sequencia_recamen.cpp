/*A sequencia de Recam�n � uma sequ�ncia, onde seus os termos s�o dados pela seguinte
rela��o:
? A0 = 0; para n > 0,
? An = An-1 � n, se o termo for positivo e j� n�o estiver na sequ�ncia,
An = An-1 + n, caso contr�rio.
Escreva um programa em C, que gere e armazene em um vetor de vinte posi��es, os 20
primeiros termos da s�rie (seu algoritmo dever� ser feito de forma a permitir a mudan�a
do tamanho do vetor com o m�nimo de impacto).
Exemplo da s�rie de Recam�n at� o nono termo: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21...*/

#include<stdio.h>
#include<stdlib.h>
int main () {

int An,n,termos;
int A[20];



   
for(n=0; n<0; n++) {

	if(An > 0 ) {
       	A[n]= An - 1 -n;
	}
	else
	A[n]= An - 1 -n;
}

 printf("%d/n",A[n]);
}

