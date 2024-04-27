// Programa que soma os valores de compra
// AUtor: Henrique Lucila

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	// declaração de variáveis do tipo real (float)
	float valorPao, valorCafe, valorPagar;
	
	printf("Digite o valor do pão: R$");
	scanf("%f", &valorPao);
	
	printf("Digite o valor do café: R$");
	scanf("%f", &valorCafe);
	
	valorPagar = valorPao + valorCafe;
	
	printf("\nLista de Compras: \nPão: R$ %.2f\n Café: R$ %.2f", valorPao, valorCafe);
	printf("\n A soma dos numeros é: R$ %.2f", valorPagar);
	
	return 0;
}
