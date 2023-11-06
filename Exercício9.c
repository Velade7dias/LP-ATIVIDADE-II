#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;
    int primos = 1;

    printf("Digite um número:");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        primos = 0;
    }
    else
    {
        for (i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                primos = 0;
                break;
            }
        }
    }

    switch (primos)
    {
    case 1:
        printf("Número primo\n");
        break;
    default:
        printf("Número não primo\n");
        break;
    }

    getchar();
    
    return 0;
}
