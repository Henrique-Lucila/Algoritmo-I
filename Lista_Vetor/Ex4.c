/******************************************************************************

Faça um programa que leia um vetor de 8 elementos e o imprima na ordem inversa

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[8];
    int i;

    for (i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }
    
    for (i=7; i >= 0; i--){
        printf("%d ", numeros[i]);
    }

    return 0;
}
