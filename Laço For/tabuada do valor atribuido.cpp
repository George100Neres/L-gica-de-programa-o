

#include<stdio.h>

main()
{
  int  N,i,produto;
  
  printf("Deseja a tabuada para qual valor?");
  scanf("%i",&N);
  
  for(int i=1; i<N; i++)
  {
  	produto = N * i;
  	
  	printf("%i    x   %i",produto, );
  }
}
