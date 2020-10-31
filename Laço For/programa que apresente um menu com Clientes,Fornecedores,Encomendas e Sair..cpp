/*Escreva em C um programa que apresente um menu com as opções"Clientes,Fornecedores, Encomendas e Sair.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
  char opcao;
  do
    {
  printf("\tMENU	 PRINCIPAL\n");
  printf("\n\n\tClientes");
  printf("\n\n\tForneceddres");
  printf("\n\n\tEncomendas");
  printf("\n\n\tSair");
  printf("\n\n\t\tOpção:");
  scanf("%c", &opcao);
   fflush(stdin); /* Limpar o Buffer do teclado*/
}
   switch  (opcao)
   case 'c':
   case  'C': puts("Opcao CLIENTES");break;
   case 'f':
   case 'F': puts("opcao Fornecedores");break;
   case 'e':
   case  'E': puts("Opcao ENCOMENDAS");break;
   case  's':
   	case 'S': break; /* Não faz nada*/
   	
   	default : puts("Opção INVÀLIDA!!");
	}
    getchar(); /* Parar a Tela*/
 }
     while (opcao!= 's' && opcao!= 'S');
}
