/* Fazer um programa que leia as notas �s duas avalia��es de um aluno. Calcule e imprima a
m�dia semestral.Faca com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao
intervalo[0,10].Cada nota deve ser validada separadamente.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
 float nota1, nota2, media;
 
 printf("Digite a primeira nota: ");
 scanf("%f",&nota1);
 
 while(nota1 < 0 || nota2 > 10 ){
 	printf("Valor inv�lido!Tente Novamente!");
 	scanf("%f",&nota1);	
 } 
 
 printf("Digite a segunda nota:");
 scanf("%f",&nota2);
 
 while(nota2 < 0 || nota2 > 10){
 	printf("Valor inv�lido!Tente Novamente!");
 }
 
 media = (nota1 + nota2)/ 2;
 
 printf("MEDIA %f",media);
}
