#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {

    setlocale (LC_ALL, "portuguese");

    int opcao;
    float resultado;
    float valor;

    printf("digite um valor para converter:");
    scanf("%f", &valor);
    
    system("Cls || clear");

    printf("Escolha as unidades de medidas que voc� deseja converter.\n");
    printf("Aperte 0 para encerrar as convers�es.\n\n");

    printf("1. Quil�metros -> milhas\n");
    printf("2. Milhas -> Quil�metros\n");
    printf("3. Celsius -> fahrenheit\n");
    printf("4. Fahrenheit -> Celsius\n\n");
    printf("Digite a op��o: ");
    scanf("%d", &opcao);
    
    system("Cls || clear");

    while (opcao != 0){

            switch (opcao){

            case 1:
                resultado = valor / 1.609;
                printf("\no resultado convertido �: %.3f\n", resultado);
                break;
            case 2:
                resultado = valor * 1.6;
                printf("\no resultado convertido �: %.3f\n", resultado);
                break;
            case 3:
                resultado = (valor * 1.8) + 32;
                printf("\no resultado convertido �: %.3f\n", resultado);
                break;
            case 4:
                resultado = (valor - 32) * 5 / 9;
                printf("\no resultado convertido �: %.3f\n", resultado);
                break;
            
            default:
                printf("op��o inv�lida!");
                break;
            }

        sleep(3);
        
        system("Cls || clear");

        printf("digite um valor para converter: ");
        scanf("%f", &valor);

        printf("1. DE Quil�metros PARA milhas\n");
        printf("2. DE milhas PARA Quil�metros\n");
        printf("3. DE Celsius PARA fahrenheit\n");
        printf("4. DE fahrenheit PARA Celsius\n\n");
        printf("Digite a op��o: ");
        scanf("%d", &opcao);
        
        system("cls || clear");

    }

getchar();

    return 0;
}