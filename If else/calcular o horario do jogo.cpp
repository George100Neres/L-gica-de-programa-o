/*Leia a hora inicial e a hora final do jogo.A seguir calcule a dura��o ddo jogo,sabendo que o msm
pode come�ar em um dia e terminar em outro,tendo em dura��o minima de 1 hora e m�xima de 24 horas.*/

#include<stdio.h>

main()
{

int horainicial,horafinal,inicialreceb,finalreceb,duracao,dia;

printf("Hora inicial");
scanf("%i",&horainicial);

printf("hora final");
scanf("%i",&horafinal);



if (horainicial < horafinal)
{
  duracao = horafinal - horainicial;
}

 else if( horainicial > horafinal)
{
	dia = 24 - horainicial;
	duracao = dia + horafinal ;
}

printf("O Jogo Durou: %i horas",duracao);

}
