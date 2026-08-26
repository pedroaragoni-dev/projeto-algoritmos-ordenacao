#include <string.h>
#include <stdio.h>
#include "metricas.h"

/* Cria as metricas de um algoritmo com os contadores zerados */
Metricas criarMetricas(char nome[], int tamanho) {
    Metricas metricas;

    /* Utilizando strcpy para copiar um vetor de caractetes */
    strcpy(metricas.nome, nome);
    metricas.tamanho = tamanho;
    metricas.comparacoes = 0;
    metricas.trocas = 0;
    metricas.tempo_ms = 0;

    return metricas;
}

/* Calcula o tempo decorrido e converte de tick para milisegundos */
double calcularTempoMs(clock_t inicio, clock_t fim) {
    double tempoSegundos;
    double tempoMilisegundos;

    /* CLOCKS_PER_SEC informa quantos ticks correspondem a um segundo */
    tempoSegundos = (double)(fim-inicio) / CLOCKS_PER_SEC;
    
    /* Ex: 1 segundo = 1000 milisegundos*/
    tempoMilisegundos = tempoSegundos * 1000;

    return tempoMilisegundos;
}

/* Exibe o relatorio do algoritmo*/
void exibirMetricas(Metricas metricas) {
    printf("\n====== RELATORIO DE DESEMPENHO ======\n");
    printf("Algoritmo: %s\n", metricas.nome);
    printf("Quantidade de itens: %d\n", metricas.tamanho);
    printf("Comparacoes: %lld\n", metricas.comparacoes);
    printf("Trocas: %lld\n", metricas.trocas);
    printf("Tempo: %.3f ms\n", metricas.tempo_ms);
    printf("===================================\n");
}