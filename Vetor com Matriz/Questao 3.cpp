
#include<stdio.h>

main(){
	
int i,N,soma=0,smdiv=0,ele;		//ele: elemento

scanf("%i",&N);

for(i=0; i<N; i++){
	
 printf("Digite o %i do elemento",i +1);
 scanf("%i",&ele[i]);
 soma = soma + ele[i];
}

smdiv = soma /N;

printf("Somatorio Divisores:\n");
printf("%i",smdiv);

return 0;
}
