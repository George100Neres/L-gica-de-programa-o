/*Escreva em C que peça ao usuario dois inteiros e apresente o resultado da realização
 das operações aritméticas tradicionais*/
 
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
