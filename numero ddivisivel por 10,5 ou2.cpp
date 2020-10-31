/*Entrar com um número e informar se ele é divisível por 10, ou é divisível por 5, ou é divisível por 2 ou se não é divisível por nenhum destes.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
 int num =0;
 
 printf("Digite um numero:");
 scanf("%d",&num);
 
 if(num %10==0){
 	printf("%d e didvisivel por 10\n",num);
 }
  else if(num%5==0){
  	printf("%d e divisivel por 5",num);
  }
  else if(num%2==0){
  	printf("%d e divisivel por 2",num);
  }
  else{
  	printf("não e divisivel por nenhum desses");
  }


return 0;
}
