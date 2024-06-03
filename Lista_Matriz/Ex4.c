/******************************************************************************

Crie um programa que preencha uma matriz 2x2 com o número 1 em todos os elementos de índice par e 0 nos de índice ímpar
e depois imprima essa matriz

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][2];
    int l, c;
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 2; c++) {
            if((l + c) % 2 == 0){
                matriz[l][c] = 1;
            }
            else{
                matriz[l][c] = 0;   
            }
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
