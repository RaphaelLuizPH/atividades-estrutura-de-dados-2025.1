#include "agenda.h"
#include <string.h>

void inicializar_agenda(Agenda *agenda) {
    agenda->total = 0;
}

void adicionar_contato(Agenda *agenda, char nome[], char telefone[]) {
    if (agenda->total < MAX_CONTATOS) {
        strcpy(agenda->contatos[agenda->total].nome, nome);
        strcpy(agenda->contatos[agenda->total].telefone, telefone);
        agenda->total++;
    }
}

void remover_contato(Agenda *agenda, char nome[]) {
    for (int i = 0; i < agenda->total; i++) {
        if (strcmp(agenda->contatos[i].nome, nome) == 0) {
            for (int j = i; j < agenda->total - 1; j++) {
                agenda->contatos[j] = agenda->contatos[j + 1];
            }
            agenda->total--;
            break;
        }
    }
}

Contato *buscar_contato(Agenda *agenda, char nome[]) {
    for (int i = 0; i < agenda->total; i++) {
        if (strcmp(agenda->contatos[i].nome, nome) == 0) {
            return &agenda->contatos[i];
        }
    }
    return NULL;
}