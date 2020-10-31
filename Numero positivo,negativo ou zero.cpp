/*Mostra se um numero qualquer e positivo, negativo ou zero*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	if(num>0){
		printf("O numero e positivo");
		
	}		
	else if(num<0){
			printf("O numero e negativo!");
		}
		else if (num==0){
			printf("O numero e zero!");
			
		}
			return 0;	
		
	}
	


