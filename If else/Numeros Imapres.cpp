/* Numeros ímpares.*/
#include<stdio.h>
#include<stdlib.h>
main(){

int x,i;

printf("Digite o valor de X:");
scanf("%i",&x);

for(int i=0; i<x; i++){
	if(i % 2 !=0){
		printf("%i\n",i);
	}
}

}
