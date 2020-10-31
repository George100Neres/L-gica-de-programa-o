

#include<stdio.h>

main()
{
  int num,alco=1,Gas=1,Dies=1,auxalco=0,auxGas=0,auxDies=0;
  
  while(num!=4)
  {
  	printf("Informe um codigo (1,2,3) ou 4 para parar:");
  	scanf("%i",&num);
  	
  	if(num ==1)
  	{
	  
  	auxalco= alco++; 
  }
  
  else if(num ==2)
  {
  	auxGas = Gas++;
  }
  
  else if(num == 3)
 {
	 auxDies = Dies++;
 }
  }
  printf("Muito Obrigado!^^");
  printf("Alcool %i\n",auxalco);
  printf("Gasolina %i \n",auxGas);
  printf("Diesel %i \n",auxDies);
}
