

#include<stdio.h>
#include<stdlib.h>

int main ( ){
	

int segundos,segundo_horas,segundo_minutos,segundo_segundo;

printf("Digite a duracao em segundos:");
scanf("%i",&segundos);

segundo_horas= (segundos)/3600;

segundo_minutos= (segundos /60);

segundo_segundo = segundo_minutos / 60;

printf("%i: %i : %i", segundo_horas, segundo_minutos,segundo_segundo);
return 0;
}

