
#include<stdio.h>

main(){
	
 int i,v[10],conttres=0,contquat=0,contcinc=0;
 
 
  
  for(i=0; i<10; i++){
  	printf("Informe un numero %i ",i + 1);
  	scanf("%i",&v[i]);
  	
  	 if(v[i]%3==0 ){
  	conttres= conttres + 1;
	}
	else if(v[i]%4 == 0){
	contquat = contquat +1;
	}
	else if(v[i]%5 ==0 ){
	contcinc= contcinc= + 1;;
	}
	
  }
  printf("\n %i são multiplos de tres!",conttres);
		printf("\n %i são multplos quatro !",contquat);
			printf("\n %i são multiplos cinco !",contcinc);
}
