#include <stdio.h>
#include "busca_seq_ordenada.h"
#include "busca_binaria.h"
#include "recursao.h"
#include <stdbool.h>

#define RUN_TEST(name, expr, expected)                               \
    do {                                                             \
        int result = (expr);                                         \
        printf("%-25s : %s\n", name,                                  \
               (result == (expected)) ? "OK" : "FAIL");           \
        fflush(stdout);                                             \
    } while(0)

bool isBadVersion(int version) {
    return version >= 4;
}


int main() {

    int arr1[] = {4,2,1,4,2,1};
    //Tamanho do vetor <ALTERAR>
    int n1 = 6;

    RUN_TEST("Busca ordenada", contas_especialidades_distintas(arr1, n1), 3);

    //Vetor ordenado <POPULAR>
    int arr2[] = {1,2,3,4,5,6,7,8,9,10};
    //Tamanho do vetor <ALTERAR>
    int n2 = 10;
    RUN_TEST("Busca ordenada", busca_seq_ordenada(arr2, n2, 4), 3);

    RUN_TEST("Busca binária", busca_binaria(10), 4);
    RUN_TEST("Recursão", recursao("banana", 'a'), 3);
    //Exemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas da funcao), resposta_esperada);

    return 0;
}