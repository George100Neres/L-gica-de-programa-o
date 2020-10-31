 /* Faça um programa que indique um determinado numero de horas,quais os minutos,
 os segundos ou mesmo os décimos dos segundos que esse npumero de horas contém.*/
 
 #include<stdio.h>
 
 main(){
 
 int n_horas;
 float res;
 char tipo;
 
 printf("N de horas: ");
 scanf("%d",&n_horas);
 
 printf("O que mostrar (m/s/d): ");
  scanf(" %c",&tipo);
  
  if(tipo == 'm' || tipo == 'M'){
  	res = n_horas<0 ? 0 : n_horas *60; // Se n_horas e igual a zero (true),se não for,ele ira muultiplicar pelo 60
  }
  
   
  if(tipo == 's' || tipo == 'S'){
  	res = n_horas<0 ? 0 : n_horas *3600; // Se n_horas e igual a zero (true),se não for,ele ira muultiplicar pelo 3600
  }
  
   
  if(tipo == 'm' || tipo == 'M'){
  	res = n_horas<0 ? 0 : n_horas *36000; // Se n_horas e igual a zero (true),se não for,ele ira muultiplicar pelo 36000
  }
  
  printf("%d --> %.2f%c ",n_horas,res,tipo);
 }
