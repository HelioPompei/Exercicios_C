#include <stdio.h> 

#define constante 10;

void main() {

int valor = constante;
int *ponteiroParaValor;

ponteiroParaValor = &valor;

printf("----------------------------------------------------------------\n");
printf("O endereco de memoria de 'valor' visto pelo ponteiro : %p\n", ponteiroParaValor);
printf("O endereco de memoria de 'valor' visto pela variavel : %p\n", &valor);
printf("----------------------------------------------------------------\n");
printf("O conteudo de 'valor' visto pelo ponteiro : %d\n", *ponteiroParaValor);
printf("O conteudo de 'valor' visto pela variavel : %d\n", valor);
printf("----------------------------------------------------------------");

}