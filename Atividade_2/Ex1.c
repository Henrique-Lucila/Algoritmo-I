/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float l1, l2, l3;
    
    printf("Lado 1: ");
    scanf("%f", &l1);
    printf("Lado 2: ");
    scanf("%f", &l2);
    printf("Lado 3: ");
    scanf("%f", &l3);
    
    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
    
        if(l1 == l2 && l2 == l3){
            printf("É um triângulo equilátero");
        }
        else if(l1 == l2 || l1 == l3 || l2 == l3){
            printf("É um triângulo isósceles");
        }
        else{
            printf("É um triângulo escaleno");
        }
    }
    else{
        printf("Não é um triângulo");
    }

    return 0;
}
