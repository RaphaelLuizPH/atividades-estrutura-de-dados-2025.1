#ifndef AGENDA_H
#define AGENDA_H

#define MAX_NOME 50
#define MAX_CONTATOS 100

typedef struct {
    char nome[MAX_NOME];
    char telefone[15];
} Contato;

typedef struct {
    Contato contatos[MAX_CONTATOS];
    int total;
} Agenda;

void inicializar_agenda(Agenda *agenda);
void adicionar_contato(Agenda *agenda, char nome[], char telefone[]);
void remover_contato(Agenda *agenda, char nome[]);
Contato *buscar_contato(Agenda *agenda, char nome[]);

#endif