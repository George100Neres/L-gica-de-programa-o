/* Fazer um programa que para ler o salario de uma pessoa, dai mostrar 
qual o novo salário dessa pessoa depois do aumento, quando foi o aumento
e qual a porcentagem de aumento. 

EX:1
Digite o novo salario: 2500.00
Novo Salario:2875
Aumento = 375.00
Porcentagem = 15% */ 

#include<stdio.h>

main()
{

float salAtual,novSal,Aumento,porcentagem;

  printf("Digite o Salario da pessoa:");
  scanf("%f",&salAtual);
  
  if (salAtual <= 1000)
  {
  
  	porcentagem = 0.15;
   Aumento = salAtual * porcentagem ;
   novSal = salAtual + Aumento;
 }
     else if( salAtual <=3000)
     {
	 
   	porcentagem = 0.10;
   Aumento = salAtual * porcentagem ;
   novSal = salAtual + Aumento;
  }
  
  else if ( salAtual >= 8000)
   {
   
  	porcentagem = 0.20;
  }
   Aumento = salAtual * porcentagem ;
   novSal = salAtual + Aumento;


printf("Novo Salario R$ = %.2f\n",novSal);
printf("Aumento R$ = %.2f\n",Aumento);
printf("Porcentagem aumento R$ = %.2f",porcentagem,"%f");

return 0;
}
