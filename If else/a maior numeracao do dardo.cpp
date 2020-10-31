

#include<stdio.h>

main()
{
  float dardo1,dardo2,dardo3,maior;
  
  printf("Digite as tres distancias:");
  scanf("\n%f",&dardo1);
  scanf("\n%f",&dardo2);
  scanf("\n%f",&dardo3);
  
 
  if(dardo1 > dardo2 && dardo1 > dardo3)
  {
  	maior = dardo1;
  }
  
  else if (dardo2 > dardo3)
  {
  maior = dardo2;
}
   else
   {
   	maior = dardo3;
   }
   
   printf("Maior Distancia entre os 3 eh %1.f",maior);
}
