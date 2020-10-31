/*Um posto de Gasolina deseja determinar qual de seus produtos tem preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma :
1.Àlcool, 2.Gasolina, 3.Diesel, 4.Fim). Caso o usuário informe um código inválido (fora da faixa de
1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o 
código informado for o número 4,devendo então mostrar a mensagem "MUITO OBRIGADO",bem como as 
quantidades de cada combustível.*/

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


