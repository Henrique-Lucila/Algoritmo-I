/******************************************************************************

Escreva um programa que substitua todos os valores negativos de um vetor de 12 elementos por zero

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor[12];
    int i;
    
    printf("Digite 12 valores para o vetor: ");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for( i = 0; i < 12; i++)
    {
        if(vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
