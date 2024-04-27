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
    int soma;
    
    while(i <= 100)
    {
        if(i % 2 == 0)
        {
            soma = soma + i;
            i = i + 1;
        }
        else{
            i = i + 1;
        }
    }
    
    printf("Soma dos números pares: %d", soma);

    return 0;
}
