
/* Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos dos vetores.
- Mostrar na tela a soma e a media dos vetores.*/

 #include<stdio.h>
 
 int main()
 {
  int N;
 float media,soma;
  float num[N];
  
  printf("Quantos numeros serao digitados?");
  scanf("%d", &N);
  
  for(int i=0; i<N; i++){
  	printf("Digite um numero:");
  	("%f" ,&num[i]);
  	
  }
  
   printf("\nValores: ");
   for(int i=0; i<N; i++){
   	printf("%f",num[i]);
   }
   
   for(int i=0; i<N; i++)
   {
   	soma = soma + num[i];
   }
   
   printf("SOMA = %.2f\n",soma);
   
   media = soma / N;
   printf("Media = %.2f\n",media);
   
   return 0;
   
 }
