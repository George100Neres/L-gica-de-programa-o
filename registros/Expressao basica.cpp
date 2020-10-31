#include<stdio.h>
#include<stdlib.h>

 // definindo uma estrutura
struct pessoa {
 char nome[50], rua[50];
 int idade,numero;
 
};

int main(){
// declaração de variaveis
 char nome[50],rua[50];
 int idade,numero;
 
 // declaracao de uma variavel struct
 struct pessoa p;
 p.idade =31; // comando de atribuição
 scanf("%d",&p.numero); // comando de leitura
 gets(p.nome); // comando de leitura
 
 p.numero = p.numero + p.idade - 100; //expressão
 
 printf("O resultado da expressao e: %d",p.numero);
}
