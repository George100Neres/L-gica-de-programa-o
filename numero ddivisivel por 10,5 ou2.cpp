/*Entrar com um n�mero e informar se ele � divis�vel por 10, ou � divis�vel por 5, ou � divis�vel por 2 ou se n�o � divis�vel por nenhum destes.*/

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
  	printf("n�o e divisivel por nenhum desses");
  }


return 0;
}
