// Faça um programa que receba três números e mostre o maior.
// • Faça um programa que receba um número e informe se ele é positivo, negativo
// ou zero.
// • Escreva um programa que leia o salário de uma pessoa e calcule o imposto de
// renda baseado na tabela abaixo:
// o Até R$ 2.000: isento
// o De R$ 2.001 a R$ 4.000: 10% de imposto
// o Acima de R$ 4.000: 20% de imposto
// o O programa deve exibir o valor do imposto a ser pago.

#include <stdio.h>
#include <stdlib.h>

int Maior(int a, int b, int c)
{

    if (a >= b && a >= c)
    {

        return a;
    }
    else if (b >= a && b >= c)
    {

        return b;
    }
    else
    {

        return c;
    }
}

char *PositivoNegativoOuZero(int a)
{

    if (a > 0)
    {
        return "positivo";
    }
    else if (a < 0)
    {
        return "negativo";
    }
    else
    {
        return "zero";
    }
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

int main()
{

    printf("%d \n", Maior(5, 10, 15));

    printf("%s \n", PositivoNegativoOuZero(-1));

    printf("%f \n", ImpostoDeRenda(3000.00));

    return 0;
}