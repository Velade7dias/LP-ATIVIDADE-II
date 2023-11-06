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

    printf("Quantos números você quer colocar?\n");
    scanf("%d", &contador);

    for (i = 1; i <= contador; i++)
    {
      system("Cls || clear");
        printf("Digite o %dº número:\n", i);
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

    printf("Números páres:%d", pares);
    printf("Números impáres:%d", impares);
    printf("Média:%2.f", media);

getchar();

    return 0;
}