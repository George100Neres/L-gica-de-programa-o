#include<stdio.h>
#include<stdlib.h>
/*Ler um número qualquer e veri=car se este número é maior ou igual a 10. Para a
opção verdadeira mostrar a palavra “Maior”, senão mostrar “Menor”.*/

int main(){
	
	int num;
	
	printf("Digite um numero:");
	scanf("%d",&num);
	
	if(num >=10){
	printf("O numero é maior que 10!");
}
 else{
 
 	if (num <10){
 	printf("O numero e menor que 10!");
 }
}
	system("pause");
}
