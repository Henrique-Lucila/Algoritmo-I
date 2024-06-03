/******************************************************************************

Crie um programa que preencha uma matriz 4x3 com o número 1-i em todos os seus elementos de índice par
e 1+i nos de índice ímpar e depois imprima essa matriz

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][3];
    int l, c;
    
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 3; c++) {
            if((l + c) % 2 == 0){
                matriz[l][c] = 1 - l;
            }
            else{
                matriz[l][c] = 1 + l;
            }
        }
    }
    
    printf("\nMatriz:\n");
    
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
