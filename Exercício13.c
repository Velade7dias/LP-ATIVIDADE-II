#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeroUm;
    int numeroDois;

    printf("Digite o primeiro n�mero:\n");
    scanf("%d", &numeroUm);

    printf("Digite o segundo n�mero:\n");
    scanf("%d", &numeroDois);

    if (numeroUm > numeroDois)
    {
        system("Cls || clear");
        printf("O primeiro n�mero � maior!\n");
    }
    else
    {
        system("Cls || clear");
        printf("O segundo n�mero � maior!\n");
    }

    getchar();

    return 0;
}