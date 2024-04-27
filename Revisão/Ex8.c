/******************************************************************************
Encontrar o primeiro número inteiro divisível por 11 e 13, verificando entre 1 e 500.
 Imprima "valor encontrado" e o valor, ou valor não encontrado.
 Se encontrar o primeiro valor já imprime e termina o programa

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, valor;
    
    for(i=1;i<=500;i++)
    {
        if(i % 11 == 0 && i % 13 == 0)
        {
            printf("Valor encontrado: %d", i);
            valor = i;
            break;
        }
    }
    
    if(!valor)
    {
        printf("Valor não encontrado");
    }

    return 0;
}
