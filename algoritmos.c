#include <time.h>

#include "algoritmos.h"
#include "metricas.h"

/*
    Ordena o vetor utilizando o Bubble Sort.

    O algoritmo compara elementos vizinhos.
    Caso estejam fora de ordem, realiza a troca.

    O processo continua enquanto houver alguma troca.
*/
Metricas bubbleSort(int vetor[], int tamanho) {

    // Cria as metricas do Bubble Sort com os contadores zerados
    Metricas metricas = criarMetricas("Bubble Sort", tamanho);

    int i;
    int continua;
    int aux;

    // Marca o momento em que a ordenacao comeca
    clock_t inicio = clock();

    do {

        /*
            Assume que nenhuma troca sera realizada.
            Se ocorrer alguma troca, continua recebe 1.
        */
        continua = 0;

        for (i = 0; i < tamanho - 1; i++) {

            // Conta cada comparacao entre dois elementos
            metricas.comparacoes++;

            if (vetor[i] > vetor[i + 1]) {

                // Troca os dois elementos de posicao
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;

                // Conta a troca realizada
                metricas.trocas++;

                /*
                    Indica que houve uma troca.
                    Portanto, o vetor sera percorrido novamente.
                */
                continua = 1;
            }
        }

    } while (continua);

    // Marca o momento em que a ordenacao terminou
    clock_t fim = clock();

    // Calcula e armazena o tempo gasto
    metricas.tempo_ms = calcularTempoMs(inicio, fim);

    // Retorna todas as informacoes coletadas
    return metricas;
}

/*
    Ordena o vetor utilizando o Selection Sort.

    Para cada posicao do vetor, procura o menor
    elemento restante e coloca esse elemento
    na posicao correta.
*/
Metricas selectionSort(int vetor[], int tamanho) {

    Metricas metricas = criarMetricas("Selection Sort", tamanho);

    int i;
    int j;
    int posMenor;
    int aux;

    clock_t inicio = clock();

    for (i = 0; i < tamanho - 1; i++) {

        /*
            Assume inicialmente que o menor elemento
            esta na posicao atual.
        */
        posMenor = i;

        /*
            Procura um elemento menor no restante
            do vetor.
        */
        for (j = i + 1; j < tamanho; j++) {

            metricas.comparacoes++;

            if (vetor[j] < vetor[posMenor]) {
                posMenor = j;
            }
        }

        /*
            Se o menor elemento estiver em outra
            posicao, realiza a troca.
        */
        if (i != posMenor) {

            aux = vetor[i];
            vetor[i] = vetor[posMenor];
            vetor[posMenor] = aux;

            metricas.trocas++;
        }
    }

    clock_t fim = clock();

    metricas.tempo_ms = calcularTempoMs(inicio, fim);

    return metricas;
}

/*
    Ordena o vetor utilizando o Insertion Sort.

    O algoritmo pega um elemento como "chave"
    e desloca os elementos maiores para abrir
    espaco para inserir a chave na posicao correta.
*/
Metricas insertionSort(int vetor[], int tamanho) {

    Metricas metricas = criarMetricas("Insertion Sort", tamanho);

    clock_t inicio = clock();

    for (int i = 1; i < tamanho; i++) {

        int chave = vetor[i];
        int j = i - 1;

        /*
            Enquanto houver elementos maiores que a chave,
            eles sao deslocados uma posicao para a direita.
        */
        while (j >= 0) {

            metricas.comparacoes++;

            if (vetor[j] > chave) {

                vetor[j + 1] = vetor[j];

                // Aqui contamos o deslocamento como uma troca/movimentacao
                metricas.trocas++;

                j--;

            } else {
                break;
            }
        }

        /*
            Coloca a chave na posicao correta.
        */
        vetor[j + 1] = chave;
    }

    clock_t fim = clock();

    metricas.tempo_ms = calcularTempoMs(inicio, fim);

    return metricas;
}

// void mergeSort(int vetor[], int esquerda, int direita) {
//     if (esquerda <  direita) {
//         int meio = (esquerda + direita) / 2;

//         mergeSort(vetor, esquerda, meio);
//         mergesort(vetor, meio+1, direita);

//         intercalar(vetor, esquerda, meio, direita);
//     }
// }