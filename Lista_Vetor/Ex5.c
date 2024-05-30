/******************************************************************************

Elabore um programa que conte quantos números pares existem dentro de um vetor de 10 elementos

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[10];
    int i, pares;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    
    for (i=0; i < 10; i++){
        if (numeros[i] % 2 == 0)
        {
            pares += 1;
        }
    }
    
    printf("Quantidade de números pares: %d", pares);

    return 0;
}
