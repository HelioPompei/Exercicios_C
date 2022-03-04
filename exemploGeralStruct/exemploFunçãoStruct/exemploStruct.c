#include <stdio.h> 

void mostrarNaTela(int idade);

struct _funcionario {

    char nome[50];
    int idade;
    float altura;

};

typedef struct _funcionario funcionario;

void main() { 

funcionario engenheiro;

printf("escreva o nome do engenheiro : \n");
scanf("%[^\n]s", &engenheiro.nome);

printf("escreva a idade do engenheiro : \n");
scanf("%d", &engenheiro.idade);

printf("escreva a altura do engenheiro : \n");
scanf("%f", &engenheiro.altura);

mostrarNaTela(engenheiro.nome);

// printf("o nome do engenheiro : %s\n", engenheiro.nome);
// printf("a idade do engenheiro : %d\n", engenheiro.idade);
// printf("a altura do engenheiro : %.2f\n", engenheiro.altura);

}

void mostrarNaTela(int idade) {

printf("o nome do engenheiro : %d\n", idade);
// printf("a idade do engenheiro : %d\n", engenheiro.idade);
// printf("a altura do engenheiro : %.2f\n", engenheiro.altura);

}