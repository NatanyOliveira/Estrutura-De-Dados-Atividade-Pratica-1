#include "busca_binaria.h"



//função que acha a primeira versão ruim
//"n" é quantidade max de versões
int busca_binaria(int n) {
    int esq = 1, dir = n, res = -1; 
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2; //uso essa fórmula porque é mais segura
        if (isBadVersion(meio)) {res = meio;  dir = meio - 1;} else {esq = meio + 1;}
        /*
        Essa sequência do if/else significa:
        Se for ruim -> Pode ser a primeira ruim, então salvo no res.
        Mas como pode ter uma versão ruim antes, então continuo a busca do lado esquerdo.
        Se for boa -> A primeira ruim só pode estar do lado direito, então começo a buscar do lado direito.
        */
    }
    return res; // Quando o while terminar, res vai ter guardado a primeira ruim que achei.
}