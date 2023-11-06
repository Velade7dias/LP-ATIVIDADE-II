#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;
    int codigoLogin = 2345678;

    do
    {
        system("Clear || cls");
        printf("Digite o código de acesso:");
        scanf("%d", &codigo);

    } while (codigo != codigoLogin);

    printf("Acesso garantido!");

    getchar();

    return 0;
}