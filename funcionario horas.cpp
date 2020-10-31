/* Fazer um programa para ler o nome de um funcionário, o valor que ele recebe por hora, e a quantidade
 dde horas, e a quantidade de horas trabalhadas por ele. Ao final, mostrar o valor do pagamento do funcionário
 com uma mensagem explicativa,conforme exemplo.*/

#include<stdio.h>
#include<string.h>

int main ()
{
	

char func[100];

 float valor_horas, horas_trabalhadas;
 float totalHoras;
 
 printf("Digite o nome do funcionario:");
 gets(func);
 setbuf(stdin,NULL);
 
 printf("Valor por Horas trabalhadas:");
 scanf("%f",&valor_horas);
 
 printf("Horas trabalhadas:");
 scanf("%f",&horas_trabalhadas);
 
 totalHoras = valor_horas * horas_trabalhadas;
 
 printf("O valor total %f:",horas_trabalhadas,"Do funcionario");

 
 
}

 
 
 
 
 
