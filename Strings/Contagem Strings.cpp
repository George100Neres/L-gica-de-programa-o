
#include<stdio.h>
#include<string.h>
 main(){
 	char vogais[] = "aeiouAEIOU"; // vetor que recebe a entrada feita pelo usuario
 	
    int i, j, contador=0;/*Vari�veis para controlar o loop principal, secund�rio e a quantidade de caracteres encontrados, respectivamente*/
    char  texto[100]; //vetor de vogais
    
    //captura do texto que ser� digitado pelo usu�rio
    printf ("Digite uma frase: ");
    gets(texto);
 
    //contagem de vogais da entrada feita pelo usu�rio
    for (i=0;i<strlen(texto);i++){
        for (j=0;j<strlen(vogais);j++){
            if (texto[i] == vogais[j]){ // Vai verificar se o caractere que eu digitar e igual ao
            				    // caractere do vetor de vogais,se for o contador ir� ser incrementado.
            				    // se nao for, passara para proxima vogal,o loop ir� continuar com todas sa vogais.
                contador++;
            }
        }
    }
    
    //exibi��o do n�mero de vogais encontradas
    if (contador == 1){
        printf ("\n\nO texto informado possui 1 vogal\n\n");
    }else{
        printf ("\n\nO texto informado possui %d vogais\n\n", contador);
    }
 
 
    return 0;
}

