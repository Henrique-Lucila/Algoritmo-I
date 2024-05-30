/******************************************************************************

Crie um programa que copie os dados de um vetor A[10] para um vetor B[10] e imprima o vetor B

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[10];
    int B[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    
    
    
    for (i=0; i < 10; i++){
        B[i] = A[i];
    }
    
    printf("\nVetor B: ");
    
    for (i=0; i < 10; i++){
        printf("%d ", B[i]);
    }

    return 0;
}
