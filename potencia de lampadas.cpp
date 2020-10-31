/*Para	 se	 determinar	 o	 número	 de	 lâmpadas	 necessárias	 para	 um	 cômodo	 de	 uma	
residência,	 existem	 normas	 que	 dão	 o	 mínimo	 de	 potencia	 de	 iluminação	 exigida	 por	
metro	 quadrado	 (m2),	 conforme	 a	 classe	 deste	 cômodo.	 A	 tabela	 abaixo	 exibe	 estes	
valores
Classe Utilização Potência	(W)	/	m2
I Quarto 12
Sala	de	TV
II Sala 15
Cozinha
Varanda
III Banheiro 20
Escritório
Suponha	 que	 serão	 usadas	 na	 iluminação	 apenas	 lâmpadas	 de	 60W	 e	 escreva	 um	
programa	em	C,	que	leia	a	classe	de	utilização	do	cômodo	e	suas	dimensões	(largura	e	
comprimento),	 calcule	 e	 imprima	 o	 número	 de	 lâmpadas	 de	 60W	 necessárias	 para	 a	
iluminação	do	cômodo.*/

#include<stdio.h>
#include<stdlib.h>

//Classe 1 Quarto e sala (potencia 12W)
// Classe 2 Sala,Cozinha, Varanda (potencia 15W)
// Classe 3 Bnaheiro e Escritório (potencia 20)
main(){
  
  int clas1,clas2;
  float cump,larg,lamp,numdlamp,W1=12,W2=15,W3=20;
  
  
printf("Digite o numero da classe que de 1 a 3 que vc deseja:");
scanf("\n%i\n%i\n%i", &clas1,&clas2,&clas3);

printf("Quantas dimensoes possui em comprimento? ");
scanf("\n%f", &cump);

printf("Qunatas dimensoes possui em largura?");
scanf("\n%f", &larg);

 lamp = 60;

numdlamp = lamp / larg * cump;

W1=numdlamp;
W2=numdlamp;

W3 = numdlamp;

if(W1==numdlamp ){
	printf("A numero e lampadas necessarias para a classe 1 e:%.2f",numdlamp);
}
else if(W2==numdlamp ){
	printf("O numero de lampadas necessarias para a 2 e:%.2f",numdlamp);
}
}
