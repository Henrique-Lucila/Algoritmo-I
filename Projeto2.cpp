// Programa que soma os valores de compra
// AUtor: Henrique Lucila

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	// declara��o de vari�veis do tipo real (float)
	float valorPao, valorCafe, valorPagar;
	
	printf("Digite o valor do p�o: R$");
	scanf("%f", &valorPao);
	
	printf("Digite o valor do caf�: R$");
	scanf("%f", &valorCafe);
	
	valorPagar = valorPao + valorCafe;
	
	printf("\nLista de Compras: \nP�o: R$ %.2f\n Caf�: R$ %.2f", valorPao, valorCafe);
	printf("\n A soma dos numeros �: R$ %.2f", valorPagar);
	
	return 0;
}
