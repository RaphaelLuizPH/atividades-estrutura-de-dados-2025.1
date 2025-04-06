#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct {
    float **dados;
    int linhas;
    int colunas;
} Matriz;

Matriz criar_matriz(int linhas, int colunas);
void destruir_matriz(Matriz m);
Matriz somar_matrizes(Matriz m1, Matriz m2);
Matriz multiplicar_matrizes(Matriz m1, Matriz m2);
Matriz transpor_matriz(Matriz m);

#endif