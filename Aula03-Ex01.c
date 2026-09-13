#include <stdio.h>
#include <locale.h>//usar função setlocale
#include <stdlib.h>//usar função system
int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	int soma, subtracao, multiplicacao, resto;
	float divisao;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &numero1);
	printf("Digite o segundo número: ");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = (float)numero1 / numero2;
	resto = numero1 % numero2;
	
	printf("\nSoma: %d\n", soma);
	printf("Subtração: %d\n", subtracao);
	printf("Multiplicação: %d\n", multiplicacao);
	printf("Divisão: %.2f\n", divisao);
	printf("Resto da divisão: %d\n", resto);
	

	return 0;
}
