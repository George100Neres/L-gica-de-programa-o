/* Criar um algoritmo que calcule as coorenadas os 2 pontos (A e B)
e retornar a istancia entre eles usano esses dois pontos.O algoritimo 
deve ler coordenadas X e Y um odds pontos e mostrar.*/
#include<math.h>
#include<stdio.h>
 
 float calculaistancia (int x1, int y1, int x2, int y2) {
 	return sqrt (pow(x2-x1,2 ) + pow (y2 -y1, 2));
 }
 
   main(){
   	
   	int x1,y1,x2,y2;
   	float distancia =0;
   	
printf("Informe as coordenadas do primeiro ponto");
scanf("%i %i",&x1,&y1 );
printf("Informe as coordenadas do segundo ponto");
scanf("%i %i",&x2,&y2 );

distancia = sqrt(pow(x2 - x1,2)+ pow(y2 - y1,2));

printf("Distancia: %f",distancia);

   }
