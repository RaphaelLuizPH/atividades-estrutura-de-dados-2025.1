#include "retangulo.h"

Retangulo criar_retangulo(float base, float altura) {
    Retangulo r = {base, altura};
    return r;
}

float calcular_area(Retangulo r) {
    return r.base * r.altura;
}

float calcular_perimetro(Retangulo r) {
    return 2 * (r.base + r.altura);
}