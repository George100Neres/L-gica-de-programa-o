/* Programa que coloque na tela as cinco primeiras tabuadas,parando a tela depois de
cada uma delas ser escrita.*/

#include<stdio.h>

main(){
 
 int i,j;
 
 for( i=1; i<=5; i = i+1){
 	for(j=1;j <=10; j=j+1 ){
      printf("%d * %d = %d\n",i,j,i*j);
      
      if(i != 5 )// Para não parar na ultima 
      printf("Pressione <ENTER>para continuar!....");
      getchar();
	 }
 }
}
