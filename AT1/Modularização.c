// Faça uma função que receba um único valor representando segundos. Essa
// função deverá convertê-lo para horas, minutos e segundos. Os segundos devem
// ser passados como parâmetro.
// • Faça um programa que controle o estoque de uma loja de brinquedos.
// Atualmente, no estoque há 2 itens, cada um contendo código (número),
// descrição, preço de compra, preço de venda, quantidade em estoque e estoque
// mínimo. O programa deverá:
// o Criar uma rotina para cadastrar os produtos.
// o Criar uma rotina para mostrar o valor do lucro obtido com a venda de
// determinado produto e o percentual que esse valor representa.
// o Criar uma rotina que mostre os produtos com quantidade em estoque
// abaixo do estoque mínimo permitido.

#include <stdio.h>
#include <stdlib.h>

float ConverterSegundos(int segundos)
{
    return (segundos / 3600);
}

struct Produto
{
    int cod;
    char descr[50];
    float precoCompra;
    float precoVenda;
    int estoque;
    int minEstoque;
};

void mostrarEstoqueBaixo(struct Produto produtos[], int tamanho)
{
    printf("Produtos com estoque abaixo do mínimo permitido:\n");
    for (int i = 0; i < tamanho; i++)
    {
        if (produtos[i].estoque < produtos[i].minEstoque)
        {
            printf("Código: %d, Descrição: %s, Estoque: %d, Estoque Mínimo: %d\n",
                   produtos[i].cod, produtos[i].descr, produtos[i].estoque, produtos[i].minEstoque);
        }
    }
}

void mostrarEstoque(struct Produto produtos[], int tamanho)
{
    printf("Estoque atual: \n");
    for (int i = 0; i < tamanho; i++)
    {

        printf("Código: %d, Descrição: %s, Estoque: %d, Estoque Mínimo: %d\n",
               produtos[i].cod, produtos[i].descr, produtos[i].estoque, produtos[i].minEstoque);
    }
}

void mostrarLucro(struct Produto produtos[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {

        float lucro = produtos[i].precoVenda - produtos[i].precoCompra;
        float percentual = (lucro / produtos[i].precoCompra) * 100;

        printf("Produto: %s\n", produtos[i].descr);
        printf("Lucro: R$ %.2f\n", lucro);
        printf("Percentual de Lucro: %.2f%%\n", percentual);
    }
    return;
}

int main()
{
    // printf("%f \n", ConverterSegundos(3600));

    struct Produto produtos[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o código do produto %d:\n", i + 1);
        scanf("%d", &produtos[i].cod);

        printf("Digite a descrição do produto %d:\n", i + 1);
        scanf(" %[^\n]", produtos[i].descr);

        printf("Digite o preço de compra do produto %d:\n", i + 1);
        scanf("%f", &produtos[i].precoCompra);

        printf("Digite o preço de venda do produto %d:\n", i + 1);
        scanf("%f", &produtos[i].precoVenda);

        printf("Digite o estoque do produto %d:\n", i + 1);
        scanf("%d", &produtos[i].estoque);

        printf("Digite o estoque mínimo do produto %d:\n", i + 1);
        scanf("%d", &produtos[i].minEstoque);
    }

    printf("\n");
    mostrarEstoque(produtos, 2);
    printf("\n");
    mostrarLucro(produtos, 2);
    printf("\n");
    mostrarEstoqueBaixo(produtos, 2);

    return 0;
}