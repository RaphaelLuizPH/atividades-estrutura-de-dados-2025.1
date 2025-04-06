#include <stdio.h>
#include <string.h>

struct Aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

void buscaSequencial(struct Aluno alunos[], int tamanho, int chave)
{
    int comparacoes = 0;
    for (int i = 0; i < tamanho; i++)
    {
        comparacoes++;
        if (alunos[i].matricula == chave)
        {
            printf("Aluno encontrado:\n");
            printf("Matricula: %d\nNome: %s\nNotas: %.1f, %.1f, %.1f\n",
                   alunos[i].matricula, alunos[i].nome, alunos[i].n1, alunos[i].n2, alunos[i].n3);
            printf("Comparacoes realizadas: %d\n", comparacoes);
            return;
        }
    }
    printf("Aluno nao encontrado. Comparacoes realizadas: %d\n", comparacoes);
}

void buscaBinaria(struct Aluno alunos[], int tamanho, int chave)
{
    int comparacoes = 0;
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim)
    {
        comparacoes++;
        int meio = (inicio + fim) / 2;
        if (alunos[meio].matricula == chave)
        {
            printf("Aluno encontrado:\n");
            printf("Matricula: %d\nNome: %s\nNotas: %.1f, %.1f, %.1f\n",
                   alunos[meio].matricula, alunos[meio].nome, alunos[meio].n1, alunos[meio].n2, alunos[meio].n3);
            printf("Comparacoes realizadas: %d\n", comparacoes);
            return;
        }
        else if (alunos[meio].matricula < chave)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    printf("Aluno nao encontrado. Comparacoes realizadas: %d\n", comparacoes);
}

int main()
{
    struct Aluno alunos[6] = {
        {1, "Alice Silva", 7.5, 8.0, 6.5},
        {2, "Bruno Souza", 9.0, 7.0, 8.5},
        {3, "Carla Oliveira", 6.0, 7.5, 8.0},
        {4, "Daniel Costa", 8.5, 9.5, 7.0},
        {5, "Eduarda Mendes", 6.5, 7.0, 6.0},
        {6, "Felipe Pereira", 8.0, 9.0, 8.5}};

    int chave;
    printf("Digite a matricula para busca: ");
    scanf("%d", &chave);

    printf("\nBusca Sequencial:\n");
    buscaSequencial(alunos, 6, chave);

    printf("\nBusca Binaria:\n");
    buscaBinaria(alunos, 6, chave);

    return 0;
}