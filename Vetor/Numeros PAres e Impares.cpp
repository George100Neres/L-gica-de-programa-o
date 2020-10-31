
#include<stdio.h>

int main(){
	
int i,vetA[30], vetB[30];

for(i=0; i<30; i++){
 printf("Informe un numero %i",i);
 scanf("%d",&vetA[i]);
 
 if(vetA[i]%2 ==0){
 	vetB[i]= vetA[i] *2;
 	
 	else  
 	vetB[i] = vetA[i] *3;
 
	 
 }
 
 printf("Valor B posicao %i = %i",i,vetB[i]);
}

}
