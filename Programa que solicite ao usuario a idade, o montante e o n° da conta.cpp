/* Escreva um programa que solicite ao usuario a idade,o montante e o n° da conta
em que pretendde realizar o deposito*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
 short int idade;                        //variavel que possui 2 bytes
 int montante;
 long int n_conta;                       // variavel que possui 4 bytes
 
 printf("Qual a idade?");
 scanf("%hd", &idade);
 printf("Qual o montante a depositar: ");
 scanf("%d",&montante);
 printf("Qual o numero da conta a depositar?");
 scanf("%ld", &n_conta);
 
 printf("Uma pessoa com %hd depositou $%d na conta %ld\n",idade,montante,n_conta);   
}
