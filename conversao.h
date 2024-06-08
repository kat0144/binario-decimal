#ifndef BINARIO_DECIMAL_CONVERSAO_H
#define BINARIO_DECIMAL_CONVERSAO_H
#include "pilha.h"
#include <stdlib.h>
#define capacidade 100 // inicializa a capacidade da pilha com um número limite para o tamanho

void decimaltobinario(int decimal) { // cria a função para realizar a conversão
    int elemento, dec = decimal;
    struct pilha numbin;

    criarpilha(&numbin, capacidade);

    if (decimal == 0) { // verificação de se o decimal for 0, o binário é 0 (exceção)
        printf("O número binário é: 0.\n");
    }

    else {
        while (decimal > 0) {
            elemento = decimal % 2;
            push(&numbin, elemento); // pega o resto da divisão do decimal e coloca na pilha
            decimal = decimal / 2;
        }

        printf("O número binário do valor %d é: ", dec);
        while (numbin.topo >= 0)
            printf("%d", pop(&numbin)); // retira os elementos da pilha na forma LIFO (last in, first out), seguindo as regras de conversão binária
    }
}


#endif //BINARIO_DECIMAL_CONVERSAO_H
