# include  <stdio.h>
# include <stdlib.h>
// # define TAM 10 // teste

int  main ( void ) {

	int tamanho;

	printf ( " Informe quantos números a sua sequencia vai ter: " );
	scanf ( " % d " , & tamanho); // tamanho == N

	se (tamanho < 0 ) {

		tamanho * = - 1 ;

	}

	int valorMax; // = 5; // teste

	printf ( " Informe o valor máximo da soma de uma subsequencia: " );
	scanf ( " % d " , & valorMax); // valorMax == X

	if (valorMax < 0 ) {

		valorMax * = - 1 ;

	}

	int sequencia [tamanho]; // = {1,0,2,2,0,0,8,5,3,2}; // teste

	printf ( " Informe os valores da sua sequencia: " );

	int valor;

	for ( int indiceAtual = 0 ; indiceAtual <tamanho; indiceAtual ++) {

		scanf ( " % d " , & valor);
		sequencia [indiceAtual] = valor;

	}

	float soma = 0 ;
	int contador = 0 ;
	int subsequencia = 0 ;
	int fator flutuante = 0 ;

	for ( int iteracao = 0 ; iteracao <tamanho; iteracao ++) {

        soma + = sequencia [iteração];
        
        
        fator = soma / valorMax;
        
        if (fator == 1 ) {
            
            subsequencia ++;
            
            if (sequencia [iteracao + 1 ]! = 0 ) {
                
              soma = 0 ;  
                
            }
            
        }
        
        if (fator> 1 ) {
            
            if (sequencia [iteracao] == valorMax) {
               
                soma = sequencia [iteracao];
                subsequencia ++;
                
                if (sequencia [iteracao + 1 ]! = 0 ) {
                    
                  soma = 0 ;  
                    
                }
            
            } else {
                
                soma = 0 ;
                
            }
            
        }
	
	}

	printf ( " \ n Existem % d subsequencias cuja soma dos números é igual a % d . " , subsequencia, valorMax);

}
