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
    int n, maior;
    
    while(i <= 5){
        printf("Digite um número: ");
        scanf("%d", &n);
        
        if(n > maior)
        {
            maior = n;
        }
        
        i = i + 1;
    }
    
    printf("Maior número: %d", maior);



    return 0;
}
