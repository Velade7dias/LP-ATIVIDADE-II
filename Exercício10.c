#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeroUm;
    int numeroDois;
    int operacao;

    printf("Digite o primeiro número:");
    scanf("%d", &numeroUm);

    printf("Digite o segundo número:");
    scanf("%d", &numeroDois);

    printf("Qual operação deseja fazer?");
    printf("\n");
    printf("  1                     subtração\n");
    printf("  2                      adição\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        operacao = numeroUm - numeroDois;
        break;

    case 2:
        operacao = numeroUm + numeroDois;
        break;
    default:
        printf("Código invalido\n");
        break;
    }

    printf("Operação: %d", operacao);

    getchar();

    return 0;
}