/*Um hotel com 42 apartamentos resolveu fazer promo��es para os fins de semana fora da alta temporada, isto �, nos meses de abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promo��o � de 22% da di�ria normal. A ocupa��o m�dia do hotel sem promo��o � de 40%. A expectativa � aumentar a taxa de ocupa��o para 70%. Supondo que as expectativas se confirmem,
escrever um algoritmo que l� a di�ria normal e calcula e escreve as seguintes informa��es:
� O valor da di�ria no per�odo da promo��o.
� O valor m�dio arrecadado sem a promo��o, durante um m�s (apenas finais de semana).
� O valor m�dio arrecadado com a promo��o, durante um m�s (apenas finais de semana).
� O lucro ou preju�zo mensal com a promo��o.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float diariapromo,mediapromo,mediasempromo,diarianormal,lucroouprej;
	
	scanf("%f",&diarianormal );
	
	diariapromo = 0.22 * diarianormal;
	mediasempromo = (42 * 0.4) * 8 * diarianormal;
	mediapromo = (42 * 0.7) * 8 *diariapromo;
	lucroouprej = mediapromo - mediasempromo;
	
	printf("O VALOR DA DIARIA NO PERIODO DA PROMOCAO E = %.2f\n ", diariapromo);
	printf("O VALOR DA MEDIA sem PROMOCAO E = %.2f\n ", mediasempromo);
	printf("O VALOR MEDIO ARRECADADO  COM A PROMOCAO E = %.2f\n ", mediapromo);
	printf("LUCRO OU PREJUIZO = %.2f\n ", lucroouprej);
	
 system("pause");
}

