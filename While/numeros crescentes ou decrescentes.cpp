

#include<stdio.h>

main()
{
 int x,y;
 
  printf("Digite dois numeros:\n");
  scanf("\n %i",&x);
  scanf("\n %i",&y);
  
  while(x != y){
  
   if (x < y)
   {
 	printf("%i %i E Cresscente",x,y);
 	
   }
  	else if (x > y)
  	{
  	printf("%i  %i E decrescente",x,y);
  	
    }
    
    printf("\nDIgite outros dois numeros:\n");
    scanf("\n%i \n%i",&x,&y);
}

printf("E Falso quando e o msm valor");
}
