#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float nota;

    printf("Digite sua nota:\n");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        system("Clear || cls");
        printf("Excelente\n");
    }
    else if (nota >= 7.0 && nota <= 8.9)
    {
        system("Clear || cls");
        printf("Bom\n");
    }
    else if (nota >= 5 && nota <= 6.9)
    {
        system("Clear || cls");
        printf("Razoavel\n");
    }
    else if (nota < 5)
    {
        system("Clear || cls");
        printf("Insuficiente\n");
    }

    getchar();

    return 0;
}