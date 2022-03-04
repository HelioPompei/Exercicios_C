#include <stdio.h> 

    struct _funcionario { 

        char nome[100]; 
        int idade; 
        float altura;

    }; 

    typedef struct _funcionario funcionario;

void main() {

    funcionario funcionario1;

    // Recolher dados do funcionario1 do tipo "funcionario" que é uma estrutura. 

    printf("Digite o nome do funcionario : \n");
    scanf("%[^\n]s", &funcionario1.nome);
    printf("Digite a idade do funcionario : \n");
    scanf("%d", &funcionario1.idade);
    printf("Digite a altura do funcionario : \n");
    scanf("%f", &funcionario1.altura);

    // Mostrar na tela os dados do "funcionario1".

    printf("O nome do funcionario : %s\n", funcionario1.nome);
    printf("A idade do funcionario : %d\n", funcionario1.idade);
    printf("A altura do funcionario : %.2f\n", funcionario1.altura);

}