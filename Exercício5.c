#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf("Qual idioma deseja?\n");
    printf("\n");
    printf("C�digo                    Idioma\n");
    printf("\n");
    printf(" 1                        Ingl�s\n");
    printf(" 2                        Espanhol\n");
    printf(" 3                        Franc�s\n");
    scanf("%d", &idioma);

    switch (idioma)
    {
    case 1:
        system("Cls || clear");
        printf("Welcome");
        break;

    case 2:
        system("Cls || clear");
        printf("Bienvenida");
        break;
    case 3:
        system("Cls || clear");
        printf("Accueillir");
        break;

    default:
        system("Cls || clear");
        printf("C�digo inv�lido");
        break;
    }

    getchar();

    return 0;
}