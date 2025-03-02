// Crie um programa que solicite ao usuário dois números inteiros. Use ponteiros
// para armazenar esses números e, em seguida, crie uma função que retorne a
// soma desses números usando ponteiros.

// Escreva uma função troca que recebe dois ponteiros inteiros e troca os valores
// apontados por eles. O programa deve solicitar ao usuário dois números, chamar
// a função troca e exibir os valores após a troca.

#include <stdio.h>
#include <stdlib.h>

int SomaPonteiros(int *a, int *b)
{
    int sum = *a + *b;

    return (sum);
}

void TrocarPonteiros(int *a, int *b)
{
    printf("\n\nPonteiro Antes: %d %d", *a, *b);

    int *aux = a;

    a = b;

    b = aux;

    printf("\n\nPonteiro depois: %d %d", *a, *b);
}

int main()
{

    int x, y;

    printf("Digite o primeiro numero \n");
    scanf("%d", &x);
    printf("Digite o segundo numero \n");
    scanf("%d", &y);

    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("%d", SomaPonteiros(ptr1, ptr2));

    TrocarPonteiros(ptr1, ptr2);

    return 0;
}