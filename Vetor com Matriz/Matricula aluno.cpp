 /*Elabore um programa que em C que leia a matrícula e as duas notas de 10 alunos. calcule a média 
 desses alunos e informe no final a seguinte saída ordenada pela média.EX:
 Aluno 		1 Prova		2 Prova 	Média	Situação
 123456		   8,4		   6,0		  7,2     Aprovado.
 987415 		3,2         4,6		   5,0     Reprovado.
 Mostre no final a média da classe, a quantidade de aprovados e a quantidade considerados uam édia 7,0.*/
 
 #include<stdio.h>
 
 main(){
 	
int i,x,aux;
float nt1[10],nt2[10] ,matr1[10],matr2[10],med[10], soma=0,apr=0,repr=0,sm=0;

for(i=0; i<10; i++){
 
 printf("Informe a Matrícula e as Duas Notas:\n");
 scanf("%f  %f  %f",&matr[i], nt1[i],nt2[i]);
 
 me[i]= (nt1[i] + nt2[i])/2;
 							// sm: soma media, me:media
 sm= sm +me[i];
  if(me[i] >= 7){
  	apr = apr++;
  	
  } else{
  	repr = repr++;
  }
}

 for(i=0; i<10; i++){		// Comando para Ordenação
for(x=i+1; x<10; x++){
 
 if(me[i]<me[i]) {
 	aux=me[i];
	 me[i]=me[x];
	 me[x]=aux;
	  
 }
}
 }
 }
