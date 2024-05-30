/******************************************************************************

Implemente um programa que ordene um vetor de 15 elementos em ordem crescente

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor[15];
    int i, j, temp;
    
    printf("Digite 15 valores para o vetor: ");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (i = 0; i < 15-1; i++) {
        for (j = 0; j < 15-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                // troca os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
