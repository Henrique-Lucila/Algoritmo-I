/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) 
    {
        if (i < n) {
            printf("%d^%d + ", n, i);
        } else {
            printf("%d^%d = %d\n", n, i, (int)pow(n, i));
        }
    }

    return 0;
}
