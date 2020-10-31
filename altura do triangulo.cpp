
/* Fazer um programa para ler as medidas da base e altura do retangulo.Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com 4 casas decimais,conforme exemplos.*/

#include<stdio.h>
#include<math.h>

int main(){

float base,altura,area,perimetro,diagonal;

 printf("Digite o valor da base:");
 scanf("%f",&base); 
 printf("Digite o valor da altura:");
 scanf("%f",&altura);
 
 area = base * altura;
 perimetro = 2 * (base +   altura);
 
 diagonal = sqrt(pow(base,2.0) + pow(altura,2.0));
 
 printf ("Area = %4.f\n ",area);
 printf("Perimetro = %4.f\n",perimetro);
 printf("Diagonal = %4.f\n",diagonal);
 
 return 0;
}
