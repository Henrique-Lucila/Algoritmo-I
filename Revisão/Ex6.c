/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    for(i=1;i<=10; i++)
    {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
