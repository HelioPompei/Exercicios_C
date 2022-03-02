#include <stdio.h>
void somar(int *a, int *b);

void main() {

    int a,b;

    printf("Digite o valor de 'A' : ");
    scanf("%d", &a);
    printf("Digite o valor de 'B' : ");
    scanf("%d", &b);

    somar(&a, &b);

    printf("Valor de 'A' depois da soma : %d\n", a);
    printf("Valor de 'B' depois da soma : %d\n", b);
}

void somar(int *a, int *b) {

    ++*a;
    ++*b;

    return;
}