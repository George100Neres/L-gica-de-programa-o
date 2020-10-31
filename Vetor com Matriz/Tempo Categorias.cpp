/*  Numa competição de natação foram escritos 40 atletas (10 de cada modalidade).Elabore um programa 
que leia a inscrição de cada competidor,sua modalidae (1-crawl, 2-peito, 3-costas, 4-borboleta)e o seu
respectivo tempo na competição. O programa de criar uma classificação de cada modalidade da competição
ordenando os atletas pelo seu tempo e depois imprimir os dados dos primeiros colocado em cada
uma das modalidades.*/

#include<stdio.h>

main(){

int i,x,ins[12],mod[10];
float aux, temp[12];

for(i=0; i<12; i++){
	
	printf("\nInscricao:");
	scanf("%d",&ins[i]);
	printf("Modalidade:");
	scanf("%d",&mod[i]);
	printf("Tempo:");
	scanf("%d",&temp[i]);
	
}

for(i=0; i<12; i++){		// Comando de Ordenaçao Geral do tempo
    for(x=i+1; x<12; x++){
    	
    	if(temp[i]>temp[x]){
    		aux= temp[i]; temp[i]=temp[x];temp[x]= aux;
    		aux= insc[i];  insc[i]=insc[x]; insc[x]=aux;
    		aux= mod[i];  mod[i]=mod[x]; mod[x]= aux;
    		
    		
		} else{
			
		}
	}
}

  for(i=0; i<12; i++){    // Comando de Exibiçao Geral de Tempo.
    
  printf("\n Tempo %f  %f  inscricao %i modalidade %i ",temp[i],insc[i],mod[i]);
}

printf("\n\n");

for(i=0; i<12; i++){      //Exibir Ganhador Crawl
	
   if(mod[i]==1){
   	
   	printf("\nTempo %f inscricao %i modalidade %i - GANHADOR CRAWL",temp[i],insc[i],mod[i]);
   	
   }
}

for(i=0; i<12; i++){      //Exibir Ganhador Peito
	
   if(mod[i]==2){
   	
   	printf("\nTempo %f inscricao %i modalidade %i - GANHADOR Peito",temp[i],insc[i],mod[i]);
   	
   }
}

for(i=0; i<12; i++){      //Exibir Ganhador Crawl
	
   if(mod[i]==3){
   	
   	printf("\nTempo %f inscricao %i modalidade %i - GANHADOR Costas",temp[i],insc[i],mod[i]);
   	
   }
}

for(i=0; i<12; i++){      //Exibir Ganhador Crawl
	
   if(mod[i]==4){
   	
   	printf("\nTempo %f inscricao %i modalidade %i - GANHADOR Borboleta",temp[i],insc[i],mod[i]);
   	
   }
}
} 
