/*Receber 4 notas de um aluno e calcular a média simples dele. Caso a média seja maior ou
igual a 7 mostrar APROVAD0, caso seja menor que 7 REPROVADO*/

#include <stdio.h>
#include <locale.h>//usar função setlocale
#include <stdlib.h>//usar função system  
int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50], curso[50];
	float n1, n2, n3, n4, media;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", nome);
	
	printf("Digite o curso do aluno: ");
	scanf("%s", curso);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	media =  (n1 + n2 + n3 + n4) / 4;
	
	printf("Nome: %s\n", nome);
	printf("A média do aluno foi: %.2f\n", media);
	printf("Curso: %s\n", curso);
	
	if(media >= 7){
		printf("APROVAD0");
	}else if(media >=5){
		printf("RECUPERAÇÃO");
	}else{
		printf("REPROVADO");
	}
	
	return 0;
	
}
