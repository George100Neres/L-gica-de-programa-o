
// Faça um programa  que, dada uma letra,indique qual o estado civil de uma pessoa.

#include<stdio.h>

main(){
	
  char EST_CIVIL;
  puts("QUal seu estado Civil?");
  EST_CIVIL = getchar();
  
  if(EST_CIVIL == 'S' || EST_CIVIL =='s'){
  	printf("Sou feliz e nem sabia");
  }
  
   if(EST_CIVIL == 'D' || EST_CIVIL =='d'){
  	printf("Divorciado");
  }
   
    if(EST_CIVIL == 'V' || EST_CIVIL =='v'){
  	printf("Viuvo");
  }
  
   if(EST_CIVIL == 'C' || EST_CIVIL =='c'){
  	printf("Era alegre,agora fiquei triste");
  }
  
  else 
  printf("Estado Civil Inválido:");
}
