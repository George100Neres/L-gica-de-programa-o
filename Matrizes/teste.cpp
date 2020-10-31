

#include<stdio.h>

const int num =10;

 

main()
 {
 	int v[num],i;
 	for(i=0; i<num; i++)
	 v[i]=i;
 	
 	for(i=num-1; i>=0; i--)
 	printf("%d\n",v[i]);
 }

 
