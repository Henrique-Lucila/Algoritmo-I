// Programa que inverte os valores
// Autor: Henrique Biciato Lucila

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
    int x, y, t;
    
    printf("Digite um n�mero X: ");
    scanf("%d", &x);
    
    printf("Digite um n�mero Y: ");
    scanf("%d", &y);
    
    t = x;
    x = y;
    y = t;
    
    printf("\nX = %d\nY = %d", x, y);

    return 0;
}


