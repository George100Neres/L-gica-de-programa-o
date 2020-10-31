

#include<stdio.h>
#include<stdlib.h>
main()
{
  int senha;
  
  printf("Digite a senha:");
  scanf("%i",&senha);

  while(senha != 2002)
  {
  	printf("senha invalida! Tente novamente:\n");
  scanf("%i",&senha);
  }
  printf("Acesso permitido:");
}
