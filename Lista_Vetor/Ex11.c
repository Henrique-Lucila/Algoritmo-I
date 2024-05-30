/******************************************************************************

Desenvolva um programa que leia o tamanho de um vetor e seus elementos, calcule a soma desses elementos e exiba o resultado

*******************************************************************************/
#include <stdio.h>

int main() {
    int i, tamanho, soma;
    
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
        soma += vetor[i];
    }
    
    printf("\n");
    
    printf("Soma dos elementos: %d", soma);

    return 0;
}
