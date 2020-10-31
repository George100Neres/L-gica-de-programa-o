

#include<stdio.h>

main()
{
  int x,soma;
  
  printf("Digite o primeiro numero");
  scanf("%i",&x);
  
  soma = 0;
  
  while(x !=0 )
  {
  
  soma = soma +x;
  
  printf("Digite o Segundo numero:");
  scanf("%i",&x);
}

printf("Soma = ",soma);
}
