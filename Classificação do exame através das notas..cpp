



/*Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação: A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.'
Reprovado – outras situações.*/

# include<stdio.h>
# include<stdlib.h>
#include<math.h>
main(){
	
	int ex1,ex2,ex3,ex4,ex5,res,clas1,clas2,clas3;
	
	printf("Digite o valor das 5 notas:");
	scanf("%i %i %i %i %i",&ex1,&ex2,&ex3,&ex4,&ex5 );
	res = (ex1+ex2+ex3+ex4+ex5)/5;
	clas1 = ex1+ex2+ex3+ex4+ex5;
	clas2 =ex1+ex2+ex3+ex4+ex5;
	clas3 = ex1+ex2+ex3+ex4,ex5;
	
	if(clas1 >=70){
		printf("Classificacao A:\npassou em todas!%i",res);
		
	}
	else if(clas2<=60){
		printf("B Classificacao B:\n Passou em 1,2,4",res);
	}
	else if (clas3==50){
	
	
		printf("C  passou\n",res);
	}
	
	return res;
}
