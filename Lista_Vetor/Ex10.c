/******************************************************************************

Crie um programa que pergunte ao usuário o tamanho de um vetor, leia os seus elementos e, em seguida, imprima-os

*******************************************************************************/
#include <stdio.h>

int main() {
    int i, tamanho;
    
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n");
    
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
