/*Implemente um programa que,dada a letre,indique qual o estado civil da pessoa.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
 char est_civil;
 
 puts("QUal o Teu Estado Civil?");
 est_civil = getchar();
 
 if (est_civil =='S' || est_civil =='s')
  printf("PArabens voce pode farrear a vontade!:");
  
  else if (est_civil =='C' || est_civil =='c')
  printf("Que pena!,voce nao pode voar mais como passaro!");
  
   else if (est_civil =='D' || est_civil == 'd')
   printf (" tomou mt chifre ou e corno '-'");
   
   else if (est_civil == 'V' || est_civil =='v')
    printf("voce esta viuvo trágico ¬¬");
}
