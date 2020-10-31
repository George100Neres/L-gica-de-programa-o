
#include<stdio.h>
#include<string.h>

int main ()
{
  char str[80];
  char str2[] ="concatenada";
  
  strcpy(str,"Esta String");
  
  strcat (str, "foi ");
  strcat (str, str2);
  puts(str);
}

