/*   Bruno é um biólogo apaixonado por sua profissão. Sua especialidade é estudar o
comportamento de leveduras. Por isso, ele possui em seu laboratório centenas de colônias de diferentes
tipos desses microorganismos.
Nesta semana ele viu o anúncio de um evento inusitado: uma feira de leveduras. Nessa feira, vários
fornecedores estarão vendendo diferentes tipos de leveduras. Cada tipo de levedura é vendido em uma
placa de vidro, já preparada para a formação de uma colônia. Cada placa de vidro é vendida com
apenas uma única levedura.
INF027 – Graduação Tecnológica em Análise e Desenvolvimento de Sistemas – IIª Avaliação Individual – 2019.2
Bruno deu uma olhada no catálogo com os tipos de leveduras que estarão à venda na feira, e notou
algumas coisas interessantes:
• Todos os tipos de leveduras à venda terão o mesmo preço.
• Todas as leveduras (de todos os tipos) se subdividem todas as noites para gerar outras leveduras.
Por exemplo, cada leveduras da colônia de tipo X se subdivide em 2 outras leveduras todas as
noites. Assim, no primeiro dia teremos só uma levedura na colônia. No dia seguinte, teremos 2,
e no próximo, 4. A quantidade de divisões de uma levedura depende do seu tipo.
• O crescimento da colônia cessa após um determinado número de dias, por causa da escassez de
alimento. A quantidade de dias em que uma colônia cresce depende do tipo de levedura.
É final de mês e Bruno já gastou quase todo o seu dinheiro. Assim, resolveu que irá comprar apenas
uma colônia de leveduras. No entanto, ele pretende comprar a colônia que forneça a maior quantidade
de leveduras ao final do período de crescimento da mesma.
Ele tem um catálogo mostrando os tipos de leveduras à venda. Para cada tipo de levedura, o catálogo
informa o nome da levedura, a quantidade de leveduras geradas por uma única levedura em cada
divisão e por quantos dias a população da colônia crescerá. Porém, a calculadora que ele tem em casa
não é suficiente para que ele faça os cálculos necessários para decidir qual é a melhor colônia a
comprar.
Escreva um programa em C, que leia as informações sobre as leveduras e imprima o nome da levedura
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
