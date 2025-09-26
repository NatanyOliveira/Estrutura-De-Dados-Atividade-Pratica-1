#include "recursao.h"
#include <stddef.h>


/*
Conta quantas vezes o caractere 'alvo' aparece na string (recursivo):
1. Se a string acabou (ou é nula), retorna 0.
2. Se o caractere atual é igual ao alvo, soma 1.
   -> Chama a função de novo pro próximo caractere.
3. No fim, a soma dá a quantidade total.
*/


int recursao(const char *str, char alvo) {
    if (str == NULL || *str == '\0') { return 0; }
    return ((*str == alvo) ? 1 : 0) + recursao(str + 1, alvo);
}
