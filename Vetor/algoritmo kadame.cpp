
#include<stdio.h>

main(){

int i,N[10],qtdsub=0;
int max_atual=0, max_total =0, X;

for(i=0; i<10; i++){

printf("Digite a sequencia de numeros %i ",i +1);
scanf("%d",&N[i]);

X  = 1;

if(X < N){
	max_atual =0;
} else if (max_atual > max_total){
	max_total = max_atual;
}
}



 printf("Quantidade de inteiros subsequentes %d\n",max_total);
}
