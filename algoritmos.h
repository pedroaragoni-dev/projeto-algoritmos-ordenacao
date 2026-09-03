#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include "metricas.h"

// Ordena utilizando Bubble Sort e retorna suas metricas
Metricas bubbleSort(int vetor[], int tamanho);

// Ordena utilizando Selection Sort e retorna suas metricas
Metricas selectionSort(int vetor[], int tamanho);

// Ordena utilizando Insertion Sort e retorna suas metricas
Metricas insertionSort(int vetor[], int tamanho);

#endif