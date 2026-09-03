#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "gerador.h"
#include "algoritmos.h"
#include "metricas.h"

#define TAMANHO 10000

int main() {

    int tamanho = TAMANHO;

    int original[TAMANHO];
    int vetorBubble[TAMANHO];
    int vetorSelection[TAMANHO];
    int vetorInsertion[TAMANHO];

    srand(time(NULL));

    // Gera apenas um vetor original
    gerarAleatorio(original, tamanho);

    /*
        Cada algoritmo recebe uma copia
        exatamente igual do vetor original.
    */
    copiarVetor(original, vetorBubble, tamanho);
    copiarVetor(original, vetorSelection, tamanho);
    copiarVetor(original, vetorInsertion, tamanho);

    // Bubble Sort
    Metricas metricasBubble =
        bubbleSort(vetorBubble, tamanho);


    // Selection Sort
    Metricas metricasSelection =
        selectionSort(vetorSelection, tamanho);

    Metricas metricasInsertion =
        insertionSort(vetorInsertion, tamanho);


    // Exibe os resultados
    exibirMetricas(metricasBubble);
    exibirMetricas(metricasSelection);
    exibirMetricas(metricasInsertion);
    
    return 0;
}