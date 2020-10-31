
#include<stdio.h>
main(){
	

int N,i,soma,x;

printf("Qunatos numeros deseja Digitar?");
scanf("%i",&N);

soma = 0;

for(i=0; i<N; i++)
{

printf("Digite um Numero:");
scanf("%i",&x);

soma = soma +x;
}
printf("Soma =%i",soma);
}

