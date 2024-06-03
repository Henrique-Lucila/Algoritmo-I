/******************************************************************************

Escreva um programa que calcule a soma dos elementos de uma linha específica (escolhida pelo usuário) em uma matriz 4x4

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4];
    int l, c;
    int escolha;
    int soma = 0;

    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }

    printf("\nDigite o número da linha para a soma (0 a 3): ");
    scanf("%d", &escolha);

    if (escolha < 0 || escolha > 3) {
        printf("escolha uma linha entre 0 e 3.\n");
        return 1;
    }

    for (c = 0; c < 4; c++) {
        soma += matriz[escolha][c];
    }

    printf("\nA soma da linha %d: %d\n", escolha, soma);
    
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
