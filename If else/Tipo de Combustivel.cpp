/*Um posto de Gasolina deseja determinar qual de seus produtos tem prefer�ncia de seus clientes.
Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma :
1.�lcool, 2.Gasolina, 3.Diesel, 4.Fim). Caso o usu�rio informe um c�digo inv�lido (fora da faixa de
1 a 4) deve ser solicitado um novo c�digo (at� que seja v�lido). O programa ser� encerrado quando o 
c�digo informado for o n�mero 4,devendo ent�o mostrar a mensagem "MUITO OBRIGADO",bem como as 
quantidades de cada combust�vel.*/

#include<stdio.h>
#include<stdlib.h>
main(){
	

int codigo,alcool,gasolina,diesel;

alcool =0;
diesel =0;
gasolina =0;
codigo =0;

while(codigo != 4){
	
printf("Informe um codigo(1,2,3,) ou 4 para parar:");
scanf("%i",&codigo);


	
	switch(codigo) {
		
	
	case 1:
     alcool = alcool + 1;
   break;
     
     case 2:
    gasolina = gasolina +1;
   break;
   
    case 3:
    	diesel = diesel +1;
    break;
}

} 

 printf("MUITO OBRIGADO:");
 printf("Alccol %i",alcool);
 printf("Gasolina %i",gasolina);
 printf("Diesel %i",diesel);

}


