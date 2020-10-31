/*Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal,bem como o valor do metro quadrado do terreno com duas casas decimais.Em seguida,
o programa deve mostrar o valor da area do terreno,bem como o valor do preço do terreno,ambos com 
duas casas decimais,conforme o exemplo.*/

#include<stdio.h>

 main(){
  
 double comprimento,largura,preco,area,valor;
 
 printf("Digite a largura do Terreno:");
 scanf("%lf", &largura);
 
  printf("Digite o comprimento do Terreno:");
 scanf("%lf", &comprimento);
 
 printf("Digite o valor do metro quadrado:");
 scanf("%lf",&valor);
 
 area = largura * comprimento;
 preco = area * valor;
 
printf("Area do Terreno = %.2lf\n",area);
printf("Area do Terreno = %.2lf\n",preco);

}
