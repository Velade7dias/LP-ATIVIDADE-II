#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int produto;

    printf("Qual produto deseja?\n");
    printf("\n");
    printf("C�digo                    Idioma\n");
    printf("\n");
    printf(" 1                        Camiseta\n");
    printf(" 2                        Cal�a\n");
    printf(" 3                        Sapato\n");
    scanf("%d", &produto);

    switch (produto)
    {
    case 1:
        system("Cls || clear");
        printf("Produto: Camiseta");
        break;

    case 2:
        system("Cls || clear");
        printf("Produto: Cal�a");
        break;
    case 3:
        system("Cls || clear");
        printf("Produto: Sapato");
        break;

    default:
        system("Cls || clear");
        printf("C�digo inv�lido");
        break;
    }

    getchar();

    return 0;
}