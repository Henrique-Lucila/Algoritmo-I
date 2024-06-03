/******************************************************************************

Faça um programa que troque os valores das linhas 1 e 2 de uma matriz 3x3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c, temp;
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            scanf("%d ", &matriz[l][c]);
        }
    }
    
    for (c = 0; c < 3; c++){
        temp = matriz[0][c];
        matriz[0][c] = matriz[1][c];
        matriz[1][c] = temp;
    }
    
    printf("\nMatriz:\n");
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
