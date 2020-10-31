
#include<stdio.h>

main(){
	
 int i,N[10],contsom=0,max_atual=0, max_total= -1;
 
 
 for(i=0; i<10; i++){
 	
 	scanf("%d",&N);
 	max_atual = max_atual + N[i];
 	
 	if(max_atual < 0){
 		max_atual =0; 
	 }else if(max_atual > max_total) {
	 	max_total = max_atual++;
	 }
 }
 
printf("Soma maxima dos subsequentes: %d",max_total);
}
