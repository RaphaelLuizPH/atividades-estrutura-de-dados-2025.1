#include "Matriz.h"
#include <stdlib.h>

Matriz criar_matriz(int linhas, int colunas) {
    Matriz m;
    m.linhas = linhas;
    m.colunas = colunas;
    m.dados = (float **)malloc(linhas * sizeof(float *));
    for (int i = 0; i < linhas; i++) {
        m.dados[i] = (float *)malloc(colunas * sizeof(float));
    }
    return m;
}

void destruir_matriz(Matriz m) {
    for (int i = 0; i < m.linhas; i++) {
        free(m.dados[i]);
    }
    free(m.dados);
}

Matriz somar_matrizes(Matriz m1, Matriz m2) {
    Matriz resultado = criar_matriz(m1.linhas, m1.colunas);
    for (int i = 0; i < m1.linhas; i++) {
        for (int j = 0; j < m1.colunas; j++) {
            resultado.dados[i][j] = m1.dados[i][j] + m2.dados[i][j];
        }
    }
    return resultado;
}

Matriz multiplicar_matrizes(Matriz m1, Matriz m2) {
    Matriz resultado = criar_matriz(m1.linhas, m2.colunas);
    for (int i = 0; i < m1.linhas; i++) {
        for (int j = 0; j < m2.colunas; j++) {
            resultado.dados[i][j] = 0;
            for (int k = 0; k < m1.colunas; k++) {
                resultado.dados[i][j] += m1.dados[i][k] * m2.dados[k][j];
            }
        }
    }
    return resultado;
}

Matriz transpor_matriz(Matriz m) {
    Matriz resultado = criar_matriz(m.colunas, m.linhas);
    for (int i = 0; i < m.linhas; i++) {
        for (int j = 0; j < m.colunas; j++) {
            resultado.dados[j][i] = m.dados[i][j];
        }
    }
    return resultado;
}