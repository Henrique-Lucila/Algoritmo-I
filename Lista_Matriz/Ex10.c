/******************************************************************************

Crie um programa que verifique se um dado elemento (fornecido pelo usuário) está presente em uma matriz 2x2

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][2];
    int l, c;
    int numero;
    int encontrado = 0;

    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
    
    printf("\nVerifique se possue o número: ");
    scanf("%d", &numero);

    printf("\nMatriz\n");
    
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            if(matriz[l][c] == numero){
                encontrado = 1;
            }
        }
        printf("\n");
    }
    
    if (encontrado == 1){
        printf("Elemento %d encontrado", numero);
    }
    else{
        printf("Elemento %d não encontrado", numero);
    }

    return 0;
}
