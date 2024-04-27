/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 1;
    int x;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
    while(i <= x)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
