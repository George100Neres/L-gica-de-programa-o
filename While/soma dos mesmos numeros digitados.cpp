/* Fa�a um programa que solicite valores ao usuario e fa�a a soma
 dos mesmos at� que o n�mero digitado seja 0. O resultado deve ser 
 exibido no monitor.*/
 
 #include<stdio.h>
 
 main()
 {
int valor;
int soma;


printf("Digite um valor:");
scanf("%i",&valor);

while(valor!= 0)
{
soma = valor +=2;

printf("o valor da eh %i\n",soma);
getchar();
}

 }
