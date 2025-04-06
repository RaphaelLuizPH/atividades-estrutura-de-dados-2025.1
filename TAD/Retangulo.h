#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct {
    float base;
    float altura;
} Retangulo;

Retangulo criar_retangulo(float base, float altura);
float calcular_area(Retangulo r);
float calcular_perimetro(Retangulo r);

#endif