/*No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o
desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a
seguir: Calcula-se o percentual de passes completados em relação aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0, 
respectivamente). */

//percentual de passes completados (
#include<stdio.h>
#include<stdlib.h>

 main(){
 	
 	float percdepasses,passcomp;   //passcompl(pasees completos)
 	
 	printf("Informe a quantidade de passos que foi dado:");
 	scanf("%f", &percdepasses);
 	
 	percdepasses = (0.3)/0.2;
 	
 	if(percdepasses >0 && percdepasses <2.375){
 
 		printf("A quantidade de passos total foi:%f",percdepasses);
	 }
	 else if(percdepasses <0 ){
	 	printf("O valor foi diferente:%f",percdepasses);
	 }
 }
