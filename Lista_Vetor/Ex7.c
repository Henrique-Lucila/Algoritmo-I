/******************************************************************************

Faça um programa que identifique e imprima o elemento que mais aparece em um vetor de 30 elementos

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[30]; 
    int frequencia[30] = {0};
    int i, j, mais_frequente, max_frequencia = 0;

    printf("Digite 30 elementos para o vetor:\n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 30; i++) {
        for (j = 0; j < 30; j++) {
            if (numeros[i] == numeros[j]) {
                frequencia[i]++;
            }
        }
    }

    for (i = 0; i < 30; i++) {
        if (frequencia[i] > max_frequencia) {
            max_frequencia = frequencia[i];
            mais_frequente = numeros[i];
        }
    }
 
    printf("O elemento mais frequente no vetor e: %d\n", mais_frequente);

    return 0;
}
