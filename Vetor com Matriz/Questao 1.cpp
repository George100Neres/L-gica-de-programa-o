
#include<stdio.h>
#include<stdlib.h>
int main () {

int A=0,n,l=5,sub=0;
int vet[10] = {1,0,2,2,0,0,8,5,3,2};


for(n=0; n<10; n++) {

   
   A = A + vet[n];
   
	if(A > l ) {
	
       	A = 0;

   
	if((A == l) || (vet[n] == l)) {
	
	sub ++;	
  
	
    if(vet[n +1]!= 0){
	
    A = 0;

	}
  }
}
}
 printf("%d",sub);
}
