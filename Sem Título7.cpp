/* Escreva em C que verifique se um ano é bissexto ou não*/


// Passo verifica se ele e multiplo ddde 100 ou 400
#include<stdio.h>
#include<stdlib.h>

main()
{

int anobissext,ano1,ano2,mult4,mult400,mult100;

printf("Digite o primeiro ano:");
scanf("%d", &ano1);
printf("DDigite o seguno ano:");
scanf("%d", &ano2);

mult4 = (ano2/4)-(ano1/4);

if (ano2%4 == 0)
{
	mult4 = mult4 - 1;
	
}
mult100 = (ano2/100 == 0)-(ano1/400);


 if (ano2% 100 ==0)
 {
 
  mult100 = mult100 -1;
}

mult400 = (ano2/400) - (ano1/400);
printf("Entre %d ate %d temos %d anos bissextos",ano1,ano2,anobissext);
}
