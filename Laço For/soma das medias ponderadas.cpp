/* Leia um Valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso
de teste considere de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada,
sendo que o primeiro peso tem 2, o segundo valor tem 3 e o terceiro tem peso 5.É a soma de todos 
os valores multiplicados pelo respectivo peso,dividida pela soma dos pesos.*/

#include<stdio.h>

int N,i;
float a,b,c,media;

 main() {
 
printf("Quantos casos vc vai digitar?");
scanf("%d",&N);

for (i=0; i<N; i++) {
printf("Digite tres numeros:");

scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

media = (a * 2 + b * 3 + c * 5)/ 10;
printf("media = %1.0f",media);

}

}
