
#include<stdio.h>

int main(){
	
struct horario 
{
  int horas;
  int minutos;
  int segundos;
};

struct horario agora;

agora.horas =20;
agora.minutos = 15;
agora.segundos = 10;

printf("%i %i %i\n",agora.horas,agora.minutos, agora.segundos);
}
