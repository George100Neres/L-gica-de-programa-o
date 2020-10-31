/* Leia os valores das coordenadas  X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante pertence o ponto.
(Q1, Q2, Q3,Q4).Se o ponto estiver na origem,escreva a mensagem
"Origem". Se o ponto estiver sobre um dos eixos escreva 
"EIXO X" ou "EIXO Y",conforme a situação.*/

#include<stdio.h>

main()
{
  float X,Y,Q1,Q2,Q3,Q4;
  
  printf("Valor das coordenadas de X");
  printf("Valor das coordenadas de Y");
  
  scanf("%f %f",&X,&Y);
  
  if (X > 0 && Y > 0)
  {
  	printf("o valor das das coordenadas pertence ao quadrante Q1",X,Y);
  }
  
  else if (X < 0 && Y > 0)
  {
  	printf("o valor das das coordenadas pertence ao quadrante Q2",X,Y );
  }

 else if (X < 0 && Y < 0)
 {
 	printf("o valor das das coordenadas pretence ao quandrante Q3",X,Y );
 }
 
 else if(X > 0 &&  Y < 0)
 {
 	printf("o valor das das coordenadas pretence ao quandrante Q4",X,Y );
 }
  else if ( X == 0 && Y ==0)
  {
  	printf("O valor das coordenadas esta na origem.");
  }
}
