/*Faça um programa para ler um número inderterminados de dados,contendo cada um, a idade de um
indivíduo. O último dado,que não entrará nos cálculos,contém um valor de idfade negativa.Calcular
e imprimir a idade deste grupo de indíviduos . Se for entrando um valor negativo na primeira
vez, mostrar a mensagem "IMPOSSIVEL CALCULAR." */

#include<stdio.h>

main()
{
  int ida1,ida2,ida3,somaidades;
  float media;
  
  printf("Digite as idades:");
  scanf("%i \n%i  \n%i",&ida1,&ida2,&ida3);
 
  
  somaidades = ida1 + ida2 + ida3;
  
  while (somaidades != 0){
  	
  if (somaidades > 0 ){
  media = somaidades /3;
  
  printf("Media  %f",media);
}

  else if (somaidades <0){
  	media = somaidades /3;
  	printf(" %f IMPOSSIVEL CALCULAR:",media);
  }
  break;
}

}
