#include<stdio.h>
#include<stdlib.h>
/*Ler um n�mero qualquer e veri=car se este n�mero � maior ou igual a 10. Para a
op��o verdadeira mostrar a palavra �Maior�, sen�o mostrar �Menor�.*/

int main(){
	
	int num;
	
	printf("Digite um numero:");
	scanf("%d",&num);
	
	if(num >=10){
	printf("O numero � maior que 10!");
}
 else{
 
 	if (num <10){
 	printf("O numero e menor que 10!");
 }
}
	system("pause");
}
