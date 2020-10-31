/* Um número primo é um número que possui somente dois divisores: ele mesmo e o
número 1. Um número primo p é um número primo de Chen se o próximo número
ímpar (p + 2) é primo ou o produto de dois primos (subprimo).
Escreva um programa em C, que leia um número e verifique se ele é um número primo
de Chen. Por exemplo,
2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2).
3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.
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
