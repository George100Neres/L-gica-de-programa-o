/* Leia um numero positivo do usuario, entao,calcule e imprima a sequencia fibonnaci até o primeiro numero
superior ou lido. Exemplo: Se o usuario iniformou o 30, a sequencia a ser impressa sera: 0 1 1 2 3 5 8 13 21 34.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
	
int num,f1,f2,f3;

if (num < 0) {
	
 scanf("%d",&num);
printf("Numero Invalido:");
}
else {
	
	printf("0 - 1");
	
	while(f2 < num) {
		
		f3 =f2 +f1;
		printf("- %d",f3);
		f1 =f2;
		f2 = f3;
		
	}
	
	printf("/n");
	return 0;
}
}
