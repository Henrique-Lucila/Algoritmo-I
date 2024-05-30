/******************************************************************************

Desenvolva um programa que encontre o maior e o menor valor armazenado em um vetor de 15 elementos

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[15];
    int i, maior, menor;

    for (i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }
    
    maior = numeros[0];
    menor = numeros[0];
    
    for (i = 0; i < 15; i++) {
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    
    printf("\nMenor número: %d", menor);
    printf("\nMaior número: %d", maior);

    return 0;
}
