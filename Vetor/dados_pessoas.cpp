/* Conjunto de dados contendo a altura e o gênero (M,F) de N pessoas. Fazer um programa que calcule
e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o numero de homens, */

 #include<stdio.h>
 #include<stdlib.h>
 
 int main () {
 
 char Genero[99];
 float altura[100],media,alturamaior,alturamenor;
 int N, i, contmulheres,conthomens,soma;
 
 printf("Quantas pessoas serao digitadas?");
 scanf("%i",&N);
 
 for(i=0; i<N; i++) {

    printf("Altura da %i pessoa",i + 1);
    scanf(" %f ",&altura[i]);
   
    printf("Genero da  pessoa");
    fseek(stdin,0,SEEK_END);
     scanf(" %c",&Genero[i]);
     
    alturamaior = altura[0];
    alturamenor = altura[0];
}
    for(i=1; i<N; i++) {
    	if(altura[i] > alturamaior) {
    	alturamaior = altura[i];
		}
	
	
 
 
 if (altura[i] < alturamenor) {
 	alturamenor = altura[i];
 } 
}



printf("Menor altura %3f\n",alturamenor);
printf("Maior altura %3f\n",alturamaior);

soma =0;
contmulheres =0;

for (i=0; i<N; i++) {
	if(Genero[i]=='F'){
		soma = soma + altura[i];
		contmulheres = contmulheres +1;
	}
}

 if(contmulheres ==0) {
   printf("Impossivel calcular a altura media das mulheres\n");
   media = soma / contmulheres;
   printf("Media das alturas das mulheres %3.0f\n",media);
 }
 
 conthomens = N - contmulheres;
 printf("Numero de homens =%i\n",conthomens);

}
