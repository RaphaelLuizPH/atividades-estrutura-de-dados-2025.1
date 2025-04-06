#include "./fracoes.h"

#include <stdlib.h>

Fracao criar_fracao(int num, int den)
{
    Fracao f = {num, den};
    return f;
}

Fracao somar_fracao(Fracao f1, Fracao f2)
{
    Fracao resultado = {
        f1.numerador * f2.denominador + f2.numerador * f1.denominador,
        f1.denominador * f2.denominador};
    return resultado;
}

Fracao subtrair_fracao(Fracao f1, Fracao f2)
{
    Fracao resultado = {
        f1.numerador * f2.denominador - f2.numerador * f1.denominador,
        f1.denominador * f2.denominador};
    return resultado;
}

Fracao multiplicar_fracao(Fracao f1, Fracao f2)
{
    Fracao resultado = {
        f1.numerador * f2.numerador,
        f1.denominador * f2.denominador};
    return resultado;
}

Fracao dividir_fracao(Fracao f1, Fracao f2)
{
    Fracao resultado = {
        f1.numerador * f2.denominador,
        f1.denominador * f2.numerador};
    return resultado;
}