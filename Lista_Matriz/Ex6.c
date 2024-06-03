/******************************************************************************

Desenvolva um programa que leia uma matriz 3x3 e imprima cada linha e cada coluna separadamente

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c;
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            scanf("%d ", &matriz[l][c]);
        }
    }
    
    printf("\nLinhas:\n");
    
    for (l = 0; l < 3; l++) {
        printf("Linha %d: ", l + 1);
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nColunas:\n");
    
    for (c = 0; c < 3; c++) {
        printf("Coluna %d: ", c + 1);
        for (l = 0; l < 3; l++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
