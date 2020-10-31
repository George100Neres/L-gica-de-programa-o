
#include<stdio.h>
#include<string.h>

int main()
{
  char str1[10] = "abfe";
  char str2[10] = "abce";
  int retorno;
  
  retorno = strcmp(str1,str2);
  
  printf("O retorno = %d",retorno);
}
