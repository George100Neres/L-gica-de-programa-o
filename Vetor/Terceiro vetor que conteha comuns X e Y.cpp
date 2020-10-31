/* Dados os Vetores X e Y de 10 elementos inteiros entrada via teclado,criar um terceiro
vetor z que contenha comuns a X e Y.Imprimir então este vetor.*/

#include<stdio.h>

main()
{
  int X[10],Y[10],Z[10],comum,cont,z=0;
  
  for(cont=0; cont<10; cont++)  // 1° for
  {
  printf("Digite um numero inteiro para o vetor x: ");
  scanf("%d",&X[cont]);
  }
  
  for(cont=0; cont<10; cont++)  // 2 ° for
  {
  	printf("Digite um numeto inteiro para o vetor y:");
  	scanf("%d",&Y[cont]);
  }
  
  for(cont=0; cont<10; cont++)  // 3° for
  {
   if (X[cont] == Y[cont])
   Z[z] = X [cont];
   z++;
   break;

  }
  for(cont =0; cont<z ; cont++)
  {
  	printf("%d ",Z[cont]);
  	
  }
  
  getchar();
}
