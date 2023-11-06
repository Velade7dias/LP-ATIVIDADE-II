#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;

    printf("Digite um número:");
    scanf("%d", &numero);

    for (i = numero; i >= 0; i--)
    {
        system("Cls || clear");
        printf("%d", i);

        switch (i)
        {
        case 10:
            printf("\nfaltam 10 segundos\n");
            sleep(1);
            break;
        case 9:
            printf("\nfaltam 9 segundos\n");
            sleep(1);
            break;
        case 8:
            printf("\nfaltam 8 segundos\n");
            sleep(1);
            break;
        case 7:
            printf("\nfaltam 7 segundos\n");
            sleep(1);
            break;
        case 6:
            printf("\nfaltam 6 segundos\n");
            sleep(1);
            break;
        case 5:
            printf("\nfaltam 5 segundos\n");
            sleep(1);
            break;
        case 4:
            printf("\nfaltam 4 segundos\n");
            sleep(1);
            break;
        case 3:
            printf("\nfaltam 3 segundos\n");
            sleep(1);
            break;
        case 2:
            printf("\nfaltam 2 segundos\n");
            sleep(1);
            break;
        case 1:
            printf("\nfalta 1 segundo\n");
            sleep(1);
            break;
        case 0:
            printf("\nAcabou o tempo\n");
            sleep(1);
            break;
        default:
            printf("\n");
            sleep(1);
            break;
        }
    }

    return 0;
}