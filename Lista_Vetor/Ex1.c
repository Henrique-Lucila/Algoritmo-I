/******************************************************************************

Crie um programa que leia 10 números inteiros e armazene em um vetor. Em seguida, imprima todos os elementos do vetor

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nOs numeros digitados foram:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
