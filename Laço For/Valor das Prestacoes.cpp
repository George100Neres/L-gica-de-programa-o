/*  Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um
programa que receba o código e o valor de quinze transações, calcule e mostre:
a. O valor total das compras à vista;
b. O valor total das compras a prazo;
c. O valor total das compras efetuadas; e
d. O valor da primeira prestação das compras a prazo juntas, sabendo-se que serão
pagas em três vezes. */

#include<stdio.h>

main(){
	
int N=15,i; // Valor das 15 prestações.
float vista=0,prazo=0, total=0,val;
char tipo;

for(i=0;i<N; i++ ){
printf("Digite o Tipo:");
scanf(" %c", &tipo); // Ler o sexo	
printf("Digite o valor:");
scanf("%f",&val);
total += val; // Incrementa o Total.

if(tipo =='P'){
	prazo += val;
 if(tipo == 'V'){
 	vista += val;
 }
 
}

}

printf("Valor a vista R$ %.2f\n A vista",vista);
printf("Valor a prazo R$.2f\n A prazo",prazo);
printf("Valor total %.2f total",total);
printf("O valor da prestacao juntas %.2f\n",1.0 * prazo / 3);

}
