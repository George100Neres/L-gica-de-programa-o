#include<stdio.h>
int main()
{
	float distancia, volumelitros, media;
 	printf("Digite a distancia percorrida");
	scanf("%f",&distancia);
	printf("Digite a quantidade de listros gasta:");
    scanf("%f",&volumelitros);
 
    media = distancia / volumelitros;
 
    printf("O CONSUMO MEDIO = %.2fKM/L\n %f",media);
 
    return 0;
}
