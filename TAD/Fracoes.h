#ifndef FRACAO_H
#define FRACAO_H

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criar_fracao(int num, int den);
Fracao somar_fracao(Fracao f1, Fracao f2);
Fracao subtrair_fracao(Fracao f1, Fracao f2);
Fracao multiplicar_fracao(Fracao f1, Fracao f2);
Fracao dividir_fracao(Fracao f1, Fracao f2);

#endif