/******************************************************************************

Crie um programa que preencha uma matriz 2x2 com o número 1 em todos os seus elementos e depois imprima essa matriz

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][2];
    int l, c;
    
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            matriz[l][c] = 1;
        }
    }
    
    printf("\nMatriz:\n");
    
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
