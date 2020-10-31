#include<stdio.h>
#include<stdlib.h>

/* Faça um programa que mostre o ano atual que vc nasceu até o dia atual*/
int main(){
	
	int  anos,meses,dias,nasc;
	 
	
	printf("Digite o ano que vc nasceu:");
	scanf("%d",&anos);
	printf("Digite o mes que vc nasceu:\n");
	scanf("%d",&meses);
	printf("Digite o dia que vc nasceu:\n");
	scanf("%d",&dias);
	
	nasc = dias+meses+anos;
	
	printf("Parabes vc nasceu:%d \n", nasc);
	
	system("pause");
	
}

