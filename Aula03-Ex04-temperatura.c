/* Receber um n�mero e dizer se ele � impar ou par. */

/* Receber um temperatura, maior ou igual a 35 - MUITO QUENTE,
maior ou igual a 25 - QUENTE, maior ou igual a 18 - AGRADAVEL,
EST� FRIO */

/* Receber a idade e se possui CNH (Digitar 1 para SIM e 0 
para N�O. Caso atenda as duas condi��es: PODE DIRIGIR, caso
contrario, N�O PODE DIRIGIR*/

#include <stdio.h>
#include <locale.h>//usar fun��o setlocale
#include <stdlib.h>//usar fun��o system  
int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float temperatura;
    
    printf("Qual a temperatura ambiete: ");
    scanf("%f", &temperatura);
    
    if(temperatura >= 35){
                   printf("MUITO frio");
                   }else if(temperatura >= 25){
                         printf("QUENTE");
                         }
                         else if(temperatura >= 18){
                              printf("AGRADAVEL");
                              }else{
                                    printf("EST� FRIO");
                                    }
                              
                              getchar();
                              getchar();
                              
                              return 0;
                              
                              }
