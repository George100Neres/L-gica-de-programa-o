/*Leia a hora inicial e a hora final do jogo.A seguir calcule a duração ddo jogo,sabendo que o msm
pode começar em um dia e terminar em outro,tendo em duração minima de 1 hora e máxima de 24 horas.*/

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
