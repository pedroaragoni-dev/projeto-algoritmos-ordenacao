#include <stdio.h>
#include <stdlib.h>

#include "gerador.h"

/*
    Preenche o vetor com valores em ordem crescente.

    Exemplo para tamanho = 5:
    [0, 1, 2, 3, 4]
*/
void gerarOrdenado(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }
}

/*
    Preenche o vetor com valores em ordem decrescente.

    Exemplo para tamanho = 5:
    [5, 4, 3, 2, 1]
*/
void gerarInverso(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = tamanho - i;
    }
}

/*
    Preenche o vetor com valores aleatorios.

    Os valores gerados ficam entre 0 e 999.
*/
void gerarAleatorio(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 1000;
    }
}

/*
    Copia todos os elementos do vetor de origem
    para o vetor de destino.

    Isso permite que diferentes algoritmos de ordenacao
    recebam os mesmos valores para realizar uma
    comparacao justa.
*/
void copiarVetor(int origem[], int destino[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
}

/*
    Exibe todos os elementos armazenados no vetor.

    Exemplo:
    [10, 5, 8, 2, 7]
*/
void exibirVetor(int vetor[], int tamanho) {

    printf("[");

    for (int i = 0; i < tamanho; i++) {

        printf("%d", vetor[i]);

        // Adiciona virgula entre os elementos,
        // mas nao depois do ultimo elemento.
        if (i < tamanho - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

