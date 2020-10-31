/*Faça um programa que faça a decrementação dos 15 vetores em ordem decrescente.*/

#include<stdio.h>

main()
{
int v[15];

for (i=0; i<15; i++){


printf("Digite um numero\n:");
scanf("%i",&v[i]);
}

for (i=14; i>-1; i--){

printf("%i",v[i]);

}
system("pause");

