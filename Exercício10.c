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

    printf("Digite o primeiro n�mero:");
    scanf("%d", &numeroUm);

    printf("Digite o segundo n�mero:");
    scanf("%d", &numeroDois);

    printf("Qual opera��o deseja fazer?");
    printf("\n");
    printf("  1                     subtra��o\n");
    printf("  2                      adi��o\n");
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
        printf("C�digo invalido\n");
        break;
    }

    printf("Opera��o: %d", operacao);

    getchar();

    return 0;
}