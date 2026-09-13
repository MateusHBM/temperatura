#include <stdio.h>
#include <locale.h>//usar função setlocale
#include <stdlib.h>//usar função system
int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Você é maior de idade.\n");
	}else{
		printf("Você é menor de idade.\n");
	}
	


	return 0;
}
