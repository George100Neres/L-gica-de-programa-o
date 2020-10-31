/*Ler 5 valores, calcular e mostrar a média aritmética destes valores. Se o resultado
for maior que 100, mostrar a palavra “Maior”, senão mostrar “Menor”.*/
#include <stdio.h>
 #include <stdlib.h>
 
 int main(){
 	
 	float valor1, valor2, valor3, valor4, valor5,res;
 	   
 	   
 	   printf ("================= Media dos valores=================\n\n");
 	   printf ("Digite a sua 1 valor bimestral:\n ");
 	   scanf ("%f", &valor1 );
 	   printf ("Digite a sua 2 valor bimestral:\n ");
 	   scanf ("%f", &valor2 );
 	   printf ("Digite a sua 3 valor bimestral:\n ");
 	   scanf ("%f", &valor3);
 	   printf ("igite a sua 4 valor bimestral:\n ");
 	   scanf ("%f", &valor4);
 	   printf ("igite a sua 5 valor bimestral:\n ");
 	   scanf ("%f", &valor5 );
 	   
 	      res = (valor1 + valor2 + valor3 + valor4 + valor5)/5;
 	          
 	    printf("A media dos valores obtidos foi:%f",res);
 	      
 	      if(res >=100){
 	      	printf("A media e maior:\n");
		   }
		   
		   else{
		   if(res < 100){
		   
		   printf("A media e menor:\n");
		   }
 	  }
 	     system("pause"); 
 	 }
