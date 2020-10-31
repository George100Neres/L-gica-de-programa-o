
#include<stdio.h>
#include<string.h>

int main(){
	
  char str1[30] = "string simples";
  
  char str2[40];
  char str3[40];
  
  strcpy (str2,str1);
  strcpy (str3,"copiado com sucesso");
   printf("str1: %s\n str2:%s \ str3: %s\n",str1,str2,str3);
}
