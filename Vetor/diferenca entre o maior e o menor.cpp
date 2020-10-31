/*Faça um programa que leia um vetor com 10 elementos reais e calcule a diferença 
entre o maior e o menor elemento existente, bem com as posições que os mesmos 
 ocupam no vetor.*/
 
 #include<stdio.h>
 
 main(){
  int A[10], maior,menor,posmaior,posmenor,cont=0,dif;
  
  printf("Digite um numero inteiro:");
  scanf("%d",&A[cont]);
  maior=A[cont];
  menor=A[cont];
  posmaior=cont;
  posmenor=cont;
  
  for(cont=1; cont<10;cont++)
  {
  	 printf("Digite um numero inteiro:");
  scanf("%d",&A[cont]);
  
  if(A[cont]>=maior)
  {
  	maior=A[cont];
  	posmaior=cont;
  	
  }
  if(A[cont]<=menor)
  menor=A[cont];
  posmenor=cont;
  
  }
  
  dif = maior-menor;
  
  printf("O maior e %d na posicao %d\n",maior,posmaior);
  printf("O menor e %d na posicao %d\n",menor,posmenor);
  printf("A diferenca = %d",dif);
 }
