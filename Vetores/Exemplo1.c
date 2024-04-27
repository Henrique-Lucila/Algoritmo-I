/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    
    for(i=1; i<=5; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
    
    printf("\n");
    
    for(i=1; i<=5; i++)
    {
        printf("%d", vetor[i]);
    }
    
    

    return 0;
}
