

#include<stdio.h>
#include<stdlib.h>

int main() {

int numeros,soma;

printf("Digite o primeiro numero");
scanf("%d",&numeros);

soma=0;

while (numeros != 0)
{

 soma = soma + numeros;
printf("Digite outro numero:");
 scanf("%d",&numeros);
 
}

printf("Resultado final da Soma %d",soma);

return 0;

}

