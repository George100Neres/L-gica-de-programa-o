/* Desenvolva em C que armazene o salário e 20 pessoas.Em seguida, calcule e armazene o novo salário
de cada pessoa sabedo-se que o reajuste foi de %8.Imprima ainda uma listagem com um salario antigo e o novo
salario de cada pessoa.*/

#include<stdio.h>

main(){
	
int i;
float s[20], r[20];

for(i=0; i<20; i++){
	printf("Digite o salario: %i:",i);
	scanf("%d",&s[i]);
	r[i] = s[i] * 1.08;
	// s= Salario e r= reajuste
}

for(i=0; i<20; i++){
	printf("O reajuste %i do %.2f reajustado para %.2f",i,s[i],r[i]);
}
}
