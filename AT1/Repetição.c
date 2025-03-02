// Escreva um programa que receba um número inteiro positivo e calcule o seu
// fatorial.
// • Desenvolva um programa que solicite ao usuário quantos números ele deseja
// inserir e, em seguida, calcule e exiba a média desses números.
// • Desenvolva um programa que exiba todos os números pares de 0 a 1000.

#include <stdio.h>
#include <stdlib.h>

int Fatorial(int a)
{

    if (a == 1)
        return 1;

    return a * Fatorial(a - 1);
}

int Media(int a)
{

    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        int n;
        printf("Digite o número %d ", i);
        scanf("%d", &n);
        sum += n;
    }

    return (sum / a);
}

float ImpostoDeRenda(float salario)
{
    if (salario <= 2000)
    {
        return 0;
    }
    else if (salario <= 4000)
    {
        return salario * 0.10;
    }
    else
    {
        return salario * 0.20;
    }
}

void Pares()
{

    for (int i = 0; i <= 1000; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d \n", i);
        }
        else
        {
            continue;
        }
    }
}

int main()
{

    printf("%d \n", Fatorial(5));

    printf("%d \n", Media(10));

    Pares();

    return 0;
}