#include<stdio.h>
#include<stdlib.h>

main()
{
 int x,y,tmp;
 printf("Introduza dois N°s: ");
 scanf("%d %d %d %d %d % %d", &x,&y);
 
 tmp = x;
  	x = y;
  	y = tmp;
  
  if ( x > y)
  {
  	
  }
  printf("%d %d\n",y,x);
}
