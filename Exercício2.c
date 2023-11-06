#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int diaSemana;
    float compra;
    float desconto;
    float valorTotal;

    printf("Qual o valor da sua compra?\n");
    scanf("%f", &compra);

    system("Clear || cls");

    printf("Em qual dia da semana você fez a compra?\n");
    printf("\n");
    printf("   Código            //              Dia  \n");
    printf("\n");
    printf("      1                            Domingo\n");
    printf("      2                            Segunda\n");
    printf("      3                            Terça  \n");
    printf("      4                            Quarta \n");
    printf("      5                            Quinta \n");
    printf("      6                            Sexta  \n");
    printf("      7                            Sábado \n");
    scanf("%d", &diaSemana);

    if (compra > 100 && (diaSemana > 2 && diaSemana < 6))
    {
        system("Clear || cls");
        desconto = (10 * compra) / 100;
    }
    else if (compra > 100 && (diaSemana > 6 && diaSemana < 2))
    {
        system("Clear || cls");
        desconto = (15 * compra) / 100;
    }

    valorTotal = compra - desconto;

    printf("Valor à pagar: %.2f", valorTotal);

    getchar();

    return 0;
}