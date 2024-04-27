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
    int n, soma;
    
    while(i <= 5){
        printf("Digite um número: ");
        scanf("%d", &n);
        
        soma = soma + n;
        i = i + 1;
    }
    
    float media = soma / 5;
    
    printf("Média dos números digitados: %2.f", media);



    return 0;
}
