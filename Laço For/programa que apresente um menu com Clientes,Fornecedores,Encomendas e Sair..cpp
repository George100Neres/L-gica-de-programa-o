/*Escreva em C um programa que apresente um menu com as op��es"Clientes,Fornecedores, Encomendas e Sair.*/

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
  printf("\n\n\t\tOp��o:");
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
   	case 'S': break; /* N�o faz nada*/
   	
   	default : puts("Op��o INV�LIDA!!");
	}
    getchar(); /* Parar a Tela*/
 }
     while (opcao!= 's' && opcao!= 'S');
}
