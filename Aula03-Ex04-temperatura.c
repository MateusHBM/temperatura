/* Receber um número e dizer se ele é impar ou par. */

/* Receber um temperatura, maior ou igual a 35 - MUITO QUENTE,
maior ou igual a 25 - QUENTE, maior ou igual a 18 - AGRADAVEL,
ESTÁ FRIO */

/* Receber a idade e se possui CNH (Digitar 1 para SIM e 0 
para NÃO. Caso atenda as duas condições: PODE DIRIGIR, caso
contrario, NÃO PODE DIRIGIR*/

#include <stdio.h>
#include <locale.h>//usar função setlocale
#include <stdlib.h>//usar função system  
int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float temperatura;
    
    printf("Qual a temperatura ambiete: ");
    scanf("%f", &temperatura);
    
    if(temperatura >= 35){
                   printf("MUITO QUENTE");
                   }else if(temperatura >= 25){
                         printf("QUENTE");
                         }
                         else if(temperatura >= 18){
                              printf("AGRADAVEL");
                              }else{
                                    printf("ESTÁ FRIO");
                                    }
                              
                              getchar();
                              getchar();
                              
                              return 0;
                              
                              }
