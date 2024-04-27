/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, soma, digito;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while (numero > 0) {
        // Obtém o último dígito do número
        digito = numero % 10;
        // Adiciona o dígito à soma
        soma += digito;
        // Remove o último dígito do número
        numero /= 10;
    }

    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}
