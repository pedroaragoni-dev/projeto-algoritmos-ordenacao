#ifndef METRICAS_H 
#define METRICAS_H

#include <time.h>

typedef struct {
    char nome[30];
    int tamanho;
    long long comparacoes;
    long long trocas;
    double tempo_ms;
} Metricas;

Metricas criarMetricas(char nome[], int tamanho);
double calcularTempoMs(clock_t inicio, clock_t fim);
void exibirMetricas(Metricas metricas);

#endif

