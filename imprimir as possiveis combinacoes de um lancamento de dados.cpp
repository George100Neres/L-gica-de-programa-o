/*Escreva um programa que leia um valor e imprima todas as possíveis combinações em
que o lançamento de um par de dados tenha como resultado da soma dos valores dos
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
imprimir as seguintes combinações:
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1*/

/*comb 1
 0 1
 1 0
 
 comb 2 
 1  3
 2  2
 3  1
 
 comb 3
 1   4
 2   3
 3   2
 4   1 
 
 comb 4
 1    5
 2    4
 3    3
 4    2
 5    1*/
 
#include<stdio.h>
#include<stdlib.h>

main(){
	
	int par1,par2,par3,par4,par5,par6,num,comb;
	
	printf("Informe uma combinacao do par de dados:");
	scanf("%i", &num);
	
	comb = 1,2,3,4,5;
	if (num ==1){ 
	
	     printf("A combinacao do par 1 e:\n0 1\n1 0 ",comb);
	 }
	 if (num ==2){
	 
	 printf("A combinacao do par 2 e:\n 1 3\n 2 3\n 3 1",comb);
	}  
	 if (num ==3){
	 
	 printf("A combinacao do par 3 e:\n 1 4\n 2 3\n 3 2\n 4 1",comb);
		}
	 if (num ==4){
	printf("A combinacao do par 4 e:\n 1 5\n 2 4\n 3 3\n 4 2\n 5 1 ",comb);
	 }	
	 
}


