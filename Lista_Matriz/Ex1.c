/******************************************************************************

Crie um programa que leia e armazene valores em uma matriz 3x3. Em seguida imprima todos os elementos da matriz

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c;
    
    printf("Digite os valores para a matriz:\n");
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &matriz[l][c]);
        }
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
