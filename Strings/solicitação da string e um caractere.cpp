
#include<stdio.h>



char *strchr(char  *str, char ch)
{
	
	int i;
	
	for(i=0; str[i] !='\0'; i++)
	   if (str[i] ==ch)
	   return &str[i];
	   
	   return NULL;
	   
}

main ()
{
	char s[100], c;
	
	printf("Introd. uma string: ");
	gets(s);
	
	printf("Introd. um char :");
	scanf("%c" ,&c);
	
	puts(strchr(s,c));
}
