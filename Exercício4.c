#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int idade;

printf("Qual sua idade:");
scanf("%d", &idade);

if(idade > 18) {
    printf("Acesso Permitido!");
} else {
    printf("Acesso Negado!");
}

getchar();

    return 0;
}