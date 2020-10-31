/* Fazer um programa que leia as notas ás duas avaliações de um aluno. Calcule e imprima a
média semestral.Faca com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo[0,10].Cada nota deve ser validada separadamente.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
 float nota1, nota2, media;
 
 printf("Digite a primeira nota: ");
 scanf("%f",&nota1);
 
 while(nota1 < 0 || nota2 > 10 ){
 	printf("Valor inválido!Tente Novamente!");
 	scanf("%f",&nota1);	
 } 
 
 printf("Digite a segunda nota:");
 scanf("%f",&nota2);
 
 while(nota2 < 0 || nota2 > 10){
 	printf("Valor inválido!Tente Novamente!");
 }
 
 media = (nota1 + nota2)/ 2;
 
 printf("MEDIA %f",media);
}
