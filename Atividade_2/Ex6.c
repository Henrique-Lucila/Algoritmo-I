/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n, maior;
    
    for(i=1;i<=3;i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        
        
        if(i == 1)
        {
            maior = n;
        }
        if(n > maior)
        {
            maior = n;
        }
    }
    
    printf("\nMaior número digitado: %d", maior);

    return 0;
}
