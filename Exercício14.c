#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;
    int contador;
    int numero;
    float soma;
    int pares;
    int impares;
    float media;

    printf("Quantos n�meros voc� quer colocar?\n");
    scanf("%d", &contador);

    for (i = 1; i <= contador; i++)
    {
      system("Cls || clear");
        printf("Digite o %d� n�mero:\n", i);
        scanf("%d", &numero);
        soma += numero;
        if (numero % 2 == 0)
         {
        pares += 1;
        } else {
            impares += 1;
        }
    }

    media = soma / contador;

system("Cls || clear");

    printf("N�meros p�res:%d", pares);
    printf("N�meros imp�res:%d", impares);
    printf("M�dia:%2.f", media);

getchar();

    return 0;
}