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
    printf("Código                    Idioma\n");
    printf("\n");
    printf(" 1                        Inglês\n");
    printf(" 2                        Espanhol\n");
    printf(" 3                        Francês\n");
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
        printf("Código inválido");
        break;
    }

    getchar();

    return 0;
}