
#include<stdio.h>
#include<stdlib.h>

					// OBS: a variavel i==30 e o numeros de tabulações de linhas.
main()
{
 int i;
 for (i=1 ; i<=100 ; i=i+1)
     if(i ==30)
       break;
       
       else
       printf("%2d\n",2*i);
         printf("FIM DO LAÇO\n");
}
