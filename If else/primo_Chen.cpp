/* Um n�mero primo � um n�mero que possui somente dois divisores: ele mesmo e o
n�mero 1. Um n�mero primo p � um n�mero primo de Chen se o pr�ximo n�mero
�mpar (p + 2) � primo ou o produto de dois primos (subprimo).
Escreva um programa em C, que leia um n�mero e verifique se ele � um n�mero primo
de Chen. Por exemplo,
2 � um primo de Chen, pois 2+2 = 4 e 4 � subprimo (2*2).
3 � um primo de Chen, pois 3+2 = 5 e 5 � primo.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
	
 int i,p,N;

 int mult=0;
 

 
 
 scanf("%i",&N);
 
 if (N % 2 ) {
    mult =  p +2;
	
 	printf("O numero %i e primo de Chen, pois %i + %i primo",p,mult);
 } 
 else if (N % 3 ) {
 
 mult = p +1;
 
 printf("O numero %i e primo de Chen,pois %i +  subprimo",p,mult);
}


}
