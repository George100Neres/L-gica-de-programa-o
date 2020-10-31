
#include<stdio.h>

main(){
	
float nota1, nota2,notafinal;

 printf("Digite a primeira nota:");
 scanf("%f",&nota1);
 
 printf("Digite a segunda nota:");
 scanf("%f",&nota2);
 
 notafinal = nota1 + nota2;
 
 if (notafinal >= 60.0){
 
 	printf("Aprovado %f",notafinal);
}
 else
 printf("Reprovado %f",notafinal);
 
 
}

