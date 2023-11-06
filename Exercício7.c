#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int slot;
    int save;

    printf("                                    Menu\n");
    printf("\n");
    printf("   1                                                                Novo jogo\n");
    printf("   2                                                                Carregar jogo\n");
    printf("   3                                                                Configurações\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        system("Clear || cls");
        printf("Escolha um slot para começar\n");
        printf("\n");
        printf("1 - Novo save\n");
        printf("2 - Novo save\n");
        printf("3 - Novo save\n");
        printf("4 - Novo save\n");
        printf("5 - Novo save\n");
        scanf("%d", &slot);

        system("Clear || cls");
        printf("Novo jogo iniciado!");
        getchar();
        break;

    case 2:
        system("Clear || cls");
        printf("Escolha um slot para carregar\n");
        printf("\n");
        printf("1 -  save\n");
        printf("2 -  save\n");
        printf("3 -  save\n");
        printf("4 -  save\n");
        printf("5 -  save\n");
        scanf("%d", &save);

        system("Clear || cls");
        printf(" Save carregado!");
        getchar();

        break;

    case 3:
        system("Clear || cls");
        printf("Configurações\n");
        printf("\n");
        printf("Audio\n");
        printf("Video\n");
        printf("Controles\n");
        printf("Idioma\n");
        getchar();

        system("Clear || cls");
        printf("Novo jogo iniciado!");
        getchar();
        break;

    default:
        system("Cls || clear");
        printf("Código inválido");
        break;
    }

    return 0;
}