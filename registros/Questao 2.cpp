/*   Bruno � um bi�logo apaixonado por sua profiss�o. Sua especialidade � estudar o
comportamento de leveduras. Por isso, ele possui em seu laborat�rio centenas de col�nias de diferentes
tipos desses microorganismos.
Nesta semana ele viu o an�ncio de um evento inusitado: uma feira de leveduras. Nessa feira, v�rios
fornecedores estar�o vendendo diferentes tipos de leveduras. Cada tipo de levedura � vendido em uma
placa de vidro, j� preparada para a forma��o de uma col�nia. Cada placa de vidro � vendida com
apenas uma �nica levedura.
INF027 � Gradua��o Tecnol�gica em An�lise e Desenvolvimento de Sistemas � II� Avalia��o Individual � 2019.2
Bruno deu uma olhada no cat�logo com os tipos de leveduras que estar�o � venda na feira, e notou
algumas coisas interessantes:
� Todos os tipos de leveduras � venda ter�o o mesmo pre�o.
� Todas as leveduras (de todos os tipos) se subdividem todas as noites para gerar outras leveduras.
Por exemplo, cada leveduras da col�nia de tipo X se subdivide em 2 outras leveduras todas as
noites. Assim, no primeiro dia teremos s� uma levedura na col�nia. No dia seguinte, teremos 2,
e no pr�ximo, 4. A quantidade de divis�es de uma levedura depende do seu tipo.
� O crescimento da col�nia cessa ap�s um determinado n�mero de dias, por causa da escassez de
alimento. A quantidade de dias em que uma col�nia cresce depende do tipo de levedura.
� final de m�s e Bruno j� gastou quase todo o seu dinheiro. Assim, resolveu que ir� comprar apenas
uma col�nia de leveduras. No entanto, ele pretende comprar a col�nia que forne�a a maior quantidade
de leveduras ao final do per�odo de crescimento da mesma.
Ele tem um cat�logo mostrando os tipos de leveduras � venda. Para cada tipo de levedura, o cat�logo
informa o nome da levedura, a quantidade de leveduras geradas por uma �nica levedura em cada
divis�o e por quantos dias a popula��o da col�nia crescer�. Por�m, a calculadora que ele tem em casa
n�o � suficiente para que ele fa�a os c�lculos necess�rios para decidir qual � a melhor col�nia a
comprar.
Escreva um programa em C, que leia as informa��es sobre as leveduras e imprima o nome da levedura
que Bruno deve comprar*/

#include<stdio.h>
#define SIZE 50
struct dados {

char lev[SIZE];
int dias,dias_de_vida;
float preco;

};

int main(void){
	
struct dados colonia[SIZE];
int i;

printf("Informe os dados da Levedura:\n");

for(i=0; i<50; i++){
	
 printf("Informe o tipo de levedura:");
 scanf("%s",colonia[i].lev);
 
 
 
}
printf("Informe o Preco:");
 scanf("%f",&colonia[i].preco);

 printf("O valor do preco e %.2f",colonia[i].preco);
 

}
