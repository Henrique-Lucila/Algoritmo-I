/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n, soma;
    float media;
    
    for(i = 1; i <= 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        soma = soma + n;
    }
    
    media = soma / 10;
    
    printf("Média dos números digitados: %2.f", media);

    return 0;
}
