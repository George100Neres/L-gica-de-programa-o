/*Escreva um programa que realize a leitura dos sálarios pagos a um indíviduo durante um ano.
 Em seguida, o programa devera mostrar todos os valores mensais e anuais.*/
 
#include<stdio.h>
#include<stdlib.h>

main()
{
   float sal[12]; /*12 meses*/
    float total;
    int i;
    
    for(i=0 ; i<12 ; i++)
    {
    printf("Introduza o Salario do mes %d: ",i+1);
    scanf("%f",&sal[i]);
}

    // Mostrar os Valores Mensais e calcular o Toral.
     printf("Mes		Valor");
     
     for (i=0, total=0.0 ; i<12 ; i++)
     {
     	printf("%3d     %9.2f\n",i+1,sal[i]);
     	 total+=sal[i];
	 }
	 printf("Total Anual: %9.2f\n",total);
	 
}
