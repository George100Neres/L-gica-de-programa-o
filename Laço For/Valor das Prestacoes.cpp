/*  Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. Fa�a um
programa que receba o c�digo e o valor de quinze transa��es, calcule e mostre:
a. O valor total das compras � vista;
b. O valor total das compras a prazo;
c. O valor total das compras efetuadas; e
d. O valor da primeira presta��o das compras a prazo juntas, sabendo-se que ser�o
pagas em tr�s vezes. */

#include<stdio.h>

main(){
	
int N=15,i; // Valor das 15 presta��es.
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
