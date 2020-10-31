
#include<stdio.h>

main(){

int i,N;
int vetA[99];
int vetB[99];
int vetC[99];

printf("Quantos valores vai ter cada cada vetor:");
scanf("%d",&N);

printf("Digite os valores de A:");
for(i=0; i<N; i++){
scanf("%d",&vetA[i]);
}

printf("Digite os valores de B:");
for(i=0; i<N; i++){
scanf("%d",&vetB[i]);
}



for(i=0; i<N; i++){
	vetC[i] = vetA[i] - vetB[i];
}

printf("Vetor Resultante:\n");
for(i=0; i<N; i++) {
	printf("%d\n",vetC[i]);
}
}
