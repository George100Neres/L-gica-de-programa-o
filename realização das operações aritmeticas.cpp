/*Escreva em C que pe�a ao usuario dois inteiros e apresente o resultado da realiza��o
 das opera��es aritm�ticas tradicionais*/
 
 #include<stdio.h>
 
   main()
{
int a,b;

printf("Introduza dois Inteiros:");
scanf("%d%d",&a, &b);
printf("%d + %d = %d\n",a,b, a+b);
printf("%d - %d = %d\n",a,b, a-b);
printf("%d * %d = %d\n",a,b, a*b);
printf("%d / %d = %d\n",a,b, a/b);
printf("%d %% %d = %d\n",a,b, a%b);
   }
