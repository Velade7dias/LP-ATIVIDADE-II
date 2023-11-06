#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeroUm;
    int numeroDois;

    printf("Digite o primeiro número:\n");
    scanf("%d", &numeroUm);

    printf("Digite o segundo número:\n");
    scanf("%d", &numeroDois);

    if (numeroUm > numeroDois)
    {
        system("Cls || clear");
        printf("O primeiro número é maior!\n");
    }
    else
    {
        system("Cls || clear");
        printf("O segundo número é maior!\n");
    }

    getchar();

    return 0;
}