#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
char nomes[5][10];
int cont;
for (cont=0;cont<5;cont++)
{
printf ("\nInforme o nome %d: ", cont);
gets(nomes[cont]);
}
for (cont=0;cont<5;cont++)
printf ("\nO nome armazenado na posicao %d eh %s",
cont, nomes[cont]);
system("pause");
}
