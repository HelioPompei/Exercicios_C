#include <stdio.h>

int main() {

    int linha, espaco, valor, valoraux, asterisco;

    scanf("%d", &valor);

    if (valor < 1 || valor > 10) {

        printf("Informe um valor de altura(h) dentro do intervalo: 1 <= h <= 10");

    } else {

        valoraux = valor;

        for (linha = 0; linha < valor; linha++) {

            for (espaco = valoraux; espaco > 1; espaco--) {

                printf(" ");
            }
            for (asterisco = 0; asterisco <= linha; asterisco++) {

                printf("*");
            }
            printf("  ");
            for (asterisco = 0; asterisco <= linha; asterisco++) {

                printf("*");
            }
            printf("\n");
            valoraux--;
        }
    }
}