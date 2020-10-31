
#include<stdio.h>

main(){
	
 int n,numb;
 n=1;
 
 printf("Introduza um numero da tabuada:");
 scanf("%d",&numb);
 
 while(n <= numb){
 	printf("%d * %d = %d\n",numb,n,numb * n);
 	n = n +1;
 }
}
