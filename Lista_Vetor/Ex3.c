/******************************************************************************

Escreva um programa que calcule e exiba a média dos valores armazenados em um vetor com 20 números reais

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[20];
    int i;
    float media;

    for (i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
        media += numeros[i];
    }
    
    media /= 10;
    
    printf("\nMédia: %2.f", media);

    return 0;
}
