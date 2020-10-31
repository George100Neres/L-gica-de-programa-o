/*Escreva um programa que declare um vetor com n=10 numeros reais e coloque na i=enesima posição o resultado do i *(n-1)*/

#include<stdio.h>

const int n=10;
	
  main()
{
	float v[n];
	int i;
	for( i=0; i<n; i++)
	v[i] = i* (n-1);
	
	for(i=0; i<n; i++)
	printf("%f\n",v[i]);
	
}
