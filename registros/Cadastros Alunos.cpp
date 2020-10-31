
#include<stdio.h>

int main(void){
	
 struct ficha_aluno {    // tipo de dado

 char nome[40];
 int numero;
 float nota;
 
}; // definição de nota

struct ficha_aluno aluno; // nome da variavel aluno é do tipo ficha aluno

printf("\n--------------------Cadastro de Aluno ------------------\n");

printf("Nome do aluno: ");
fgets(aluno.nome, 40, stdin);

printf("DIgite o numero do aluno:");
scanf("%d",&numero);

printf("DIgite a nota do aluno:");
scanf("%f",&nota);

printf("\n\n--------Lendo os dados da struct:-----------\n\n");

printf("Nome ------------%s",aluno.nome);
printf("Numero------------%d",aluno.numero);
printf("Nota --------------%.2f",aluno.nota);

return (0);

}

