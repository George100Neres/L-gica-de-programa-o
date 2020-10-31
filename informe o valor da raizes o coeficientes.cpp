/*Perguntar os coeficientes de uma equação de segundo grau (a, b e c) e:
• Se delta for maior que zero – imprima as duas raízes;
• Se delta for igual a zero – imprima apenas única raiz existente;
• Se delta for menor que zero – imprima a mensagem “Não existem raízes reais” */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

	float a,b,c,delta,x1,x2;
	
	
     printf("Digite o valor e a:");
     scanf("%f",&a);
     printf("Digite o valor e b:");
     scanf("%f",&b);
   	 printf("Digite o valor e c:");
     scanf("%f",&c);
    
    delta= (b*b) - 4*a*c;
     
     if(delta > 0){
     	x1 = (-b + sqrt (delta))/(2*a);
     	x2 = (-b - sqrt(delta))/(2*a);
     	printf("As duas raízes são :%f %f",delta);
     	printf("x1 =%f\n", x1);
     	printf("x2 =%f\n", x2);
	 }
	

}

