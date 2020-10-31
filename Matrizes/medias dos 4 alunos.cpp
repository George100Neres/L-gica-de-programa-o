

#include<stdio.h>

main(void)
{
  const int bimestresAnuais =4;
  const int numerodeAlunos =4;
  
  int aluno,notas;
  float notasAlunos[numerodeAlunos],notasAlunos[bimestresAnuais] ={0}; 		//(numerodeAlunos)numeros de linhas,(bimsAnuais)//colunas sera alocado na posicao 0.
  float mediasAlunos[numerodeAlunos] = {0};     //vetor(numero de alnos recebe inicia 0).
  
  float media =0;
  
  printf("Insira as 4 notas do Aluno 1:\n");
    for(int aluno=0; notas<numerosdeAlunos; aluno++ ){    // contador i
      for(int notas=0; notas<bimestresAnuais; notas++){
      	scanf("%f",&notasAlunos[alunos] [notas]);
      	media = notasAlunos[aluno] [notas];
	  }
	  mediasAlunos[aluno] = media / bimestresAnuais;
	  media =0;
	  printf("Insira as 4 notas do aluno %i\n",aluno +1);
	}
	
	for(int aluno =0; aluno < numerodeAlunos; aluno++){
		printf("A media do aluno %i eh %.2f",aluno +1,mediasAlunos[aluno]);
	}
}
