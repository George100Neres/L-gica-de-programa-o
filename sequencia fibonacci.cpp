/*A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo).*/

#include<stdio.h>
#include<stdlib.h>

  main(){
    
    int inicial, sucessor, anterior, termo, count;
    
    printf("DIGITE O ENÉSIMO TERMO DA SEQUÊNCIA: ");
    scanf("%d",&termo);
    
    inicial = 1;
    anterior = 0;
    sucessor = 0;
    for(count=0;count<=termo;count++)
    {
        printf("%d ",inicial);
        sucessor = anterior + inicial;
        anterior = inicial;
        inicial = sucessor;
    }
}
