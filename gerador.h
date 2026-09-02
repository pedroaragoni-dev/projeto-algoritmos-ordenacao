#ifndef GERADOR_H
#define GERADOR_H

// Gera um vetor com valores aleatorios
void gerarAleatorio(int vetor[], int tamanho);

// Gera um vetor ja ordenado em ordem crescente
void gerarOrdenado(int vetor[], int tamanho);

// Gera um vetor em ordem decrescente
void gerarInverso(int vetor[], int tamanho);

// Copia os elementos de um vetor para outro
void copiarVetor(int origem[], int destino[], int tamanho);

// Exibe os elementos de um vetor
void exibirVetor(int vetor[], int tamanho);

#endif