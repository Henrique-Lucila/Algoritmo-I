/******************************************************************************

Crie um programa que preencha uma matriz 3x2 com o número 0 em todos os elementos e depois imprima essa matriz

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][2];
    int l, c;
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 2; c++) {
            matriz[l][c] = 0;
        }
    }
    
    printf("\nMatriz:\n");
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
