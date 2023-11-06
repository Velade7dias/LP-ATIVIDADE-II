#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int temperatura;

    printf("Qual a temperatura atual\n");
    scanf("%d", &temperatura);

    if (temperatura > 25)
    {
        system("Clear || cls");
        printf("Temperatura: %dC \n", temperatura);
        printf("Clima Ensolarado!\n");
    }
    else if (temperatura < 15)
    {
        system("Clear || cls");
        printf("Temperatura: %dC \n", temperatura);
        printf("Clima Chuvoso!\n");
    }
    else
    {
        system("Clear || cls");
        printf("Temperatura: %dC \n", temperatura);
        printf("Clima Nublado!\n");
    }

    getchar();

    return 0;
}