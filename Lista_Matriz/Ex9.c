/******************************************************************************

Implemente um programa que imprima os elementos da diagonal principal de uma matriz 3x3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c;

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }

    printf("\nMatriz\n");
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal principal\n");
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            if(l == c){
                printf("%d ", matriz[l][c]);
            }
        }
        printf("\n");
    }

    return 0;
}
