#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int contador;
    float soma;
    float nota;
    float media;

    printf("Quantas notas voc� quer colocar?\n");
    scanf("%d", &contador);

    for (i = 1; i <= contador; i++)
    {
      system("Cls || clear");
        printf("Digite a %d� nota:\n", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = (soma / contador);

    system("Clear || cls");
    printf("M�dia:%2.f", media);

    getchar();

    return 0;
}