#include "busca_seq_ordenada.h"
#include <stdlib.h>

/*
Essa sequência significa(bubble sort):
1. Percorre o vetor várias vezes.
    -> Cada vez que percorre, os maiores elementos vão "subindo" para o final do vetor.
    -> Se o número da esquerda for maior que o da direita, troca eles de lugar.
*/

static void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j+ 1]) {
                int tmp = arr[j];
                arr[j]= arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

/*
Essa sequência significa(busca sequencial em vetor ordenado):
1. Percorre o vetor do início ao fim.
   -> Se achar o elemento, retorna o índice.
   -> Se achar um elemento maior que o alvo, significa que o alvo não está no vetor.
   -> Se chegar ao fim sem achar, retorna -1.
*/

int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == alvo) return i;
        if (arr[i] > alvo) return -1;
    }
    return -1;
}

/*
Essa função significa(conta especialidades distintas):
1. Se o vetor for vazio, retorna 0.
    -> Ordena o vetor (com bubble_sort).
    -> Começa contando 1 (o primeiro elemento já é uma "especialidade").
2. Percorre o vetor:
   -> Sempre que achar um número diferente do anterior, aumenta o contador.
3. No final, retorna quantos diferentes foram encontrados.
*/

int contas_especialidades_distintas(int arr[], int n) {
    if (n <= 0) return 0;
    bubble_sort(arr, n);

    int distintas = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            distintas++;
        }
    }
    return distintas;
}