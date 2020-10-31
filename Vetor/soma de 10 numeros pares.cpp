/*Escreva um programa que permite ao usuario que digite o numero e que faça a multiplicação
do numero que o usuario digitou para o numero par.*/

#include<stdlib.h>

main()
{

 int v[10];
 
 for(i=0; i<10; i++)
 
  printf("Digite um numero inteiro:");
  scanf("%i",&v[i]);
}
  for(i=0; i<10; i++)
  
  
   if (v[i]= % 2 == 0){	// se o for numero par
   v[i] = v[i] * 3;

   }else{
   
   v[i] = v[1] + 1;	// se o numero for impar,ele soma +1 e fica par.

 }

 for (int i = 0;i<10; i++)
  printf("Vetor %d",v[i]);

}

 system("pause");
 
