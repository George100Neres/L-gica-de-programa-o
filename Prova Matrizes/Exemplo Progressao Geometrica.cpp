
#include<stdio.h>
#define TAM 50

struct levedura {
    char nomes[TAM];
    int dias;
    int divs;
};

int main(void){
    int i;
    int x;

    

    printf("Informe a quantidade de Leveduras:\n");
    scanf("%d",&x);
    struct levedura leveduras[x]; 
 
    for(i=0; i<x; i++){
        printf("Informe o nome da Levedura:");
        scanf("%s",leveduras[i].nomes);
        
        printf("Informe o numero de divisoes que fara por dia:");
        scanf("%d",&leveduras[i].divs);
        
        printf("Informe o numero de dias que essa especie ira se proliferar:");
        scanf("%d",&leveduras[i].dias);
    }

    int maiorprof=0;
    int index=0;

    for(i=0; i<x; i++){
        int profilmax = 1;
        for(int j=0; j<(leveduras[i].dias-1); j++){
          profilmax =profilmax *leveduras[i].divs;
        }

        if(profilmax > maiorprof) {
          
          maiorprof = profilmax;
          index =i;
        }

    }
   printf("\n");

    printf("levedura a comprar: %s\n", leveduras[index].nomes);
}


