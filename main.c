#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "gerador.h"

int main() {

    int tamanho = 5;

    int original[5];
    int copia[5];

    /*
        Inicializa a geracao de numeros aleatorios.
        Fazemos isso apenas uma vez no inicio do programa.
    */
    srand(time(NULL));


    // Teste do vetor aleatorio
    gerarAleatorio(original, tamanho);

    printf("Vetor aleatorio: ");
    exibirVetor(original, tamanho);


    // Teste da copia do vetor
    copiarVetor(original, copia, tamanho);

    printf("Copia do vetor: ");
    exibirVetor(copia, tamanho);


    // Teste do vetor ordenado
    gerarOrdenado(original, tamanho);

    printf("Vetor ordenado: ");
    exibirVetor(original, tamanho);


    // Teste do vetor inverso
    gerarInverso(original, tamanho);

    printf("Vetor inverso: ");
    exibirVetor(original, tamanho);

    return 0;
}