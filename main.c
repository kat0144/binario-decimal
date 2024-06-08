#include <stdio.h>
#include "conversao.h"
#include "pilha.h"

int main() {
    int num, numbin;

    printf("Informe o valor desejado para ser convertido em binário: "); // pergunta ao usuário qual número ele deseja transformar em binário
    scanf("%d", &num);

    decimaltobinario(num); // chama a função

    return 0;
}
