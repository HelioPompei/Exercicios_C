#include <stdio.h>
#include <stdlib.h>

//****************** STRUCTS ******************

typedef struct _TContato {

    int id;
    char nome[1000];
    char tel[1000];
    char email[1000];

} tipoContato;

typedef struct _TLista {

    int fim;
    tipoContato items[100];

} tipoLista;

//****************** METODOS ******************

tipoLista *criarLista(int numCont) {
    tipoLista *novaLista = (tipoLista *)malloc(sizeof(tipoLista) * numCont);
    return novaLista;
} 

void leituraDeLista(int numCont, tipoLista *lista1,FILE *ptrfile) {

    for (int i=0; i < numCont; i++) {
    fscanf(ptrfile,"%d %s %s %s\n" , &lista1->items[i].id, lista1->items[i].nome, lista1->items[i].tel, lista1->items[i].email);
    }
    lista1->fim = numCont-1;
}

// tipoLista listaEstaVazia(tipoLista *lista1){
//     if(lista1->items == NULL){
//         printf("ERRO - lista esta vazia!!!");
//         return -1;
//     
// }


int checarNumCont(int numCont){
    if ((numCont > 0) && (numCont <=100)){
        return numCont;
    } else {
        printf("O valor informado deve estar dentro do intervalo: 1 <= x <= 100.");
    }
    return -1;
}



void particiona(int pInicio, int pFim, int *esq, int *dir, tipoLista *lista1) {
	int pivo;
    tipoContato temp;
	// pivô neste caso será o elemento central		
	*esq = pInicio;
	*dir = pFim;
	pivo = lista1->items[(*esq + *dir) / 2].id;
    
	while (*esq < *dir) {
		while (lista1->items[*esq].id < pivo) (*esq)++;

		while (lista1->items[*dir].id > pivo) (*dir)--;

		// se a condiçao for satisfeita então a troca é realizada
		if (*esq <= *dir) {
			temp        = lista1->items[*esq];  
			lista1->items[*esq] = lista1->items[*dir];
			lista1->items[*dir] = temp;			
			(*dir)--;
			(*esq)++;
		}
	}
}


void quick_sort(int pInicio, int pFim, tipoLista *pVetor) {
	int esq, dir;

	particiona(pInicio, pFim, &esq, &dir, pVetor);
	if (pInicio < dir) quick_sort(pInicio, dir, pVetor);
	if (esq < pFim) quick_sort(esq, pFim, pVetor);
	
}

void imprimirLista(tipoLista *lista1){
printf("Id  | Nome           | Telefone        | E-mail\n");
	for (int i = 0; i <= lista1->fim; i++)
	{
		if (lista1->items[i].id != 0)
		{
			printf("%-*d| %-*s| %-*s | %-*s \n", 4, lista1->items[i].id, 15, lista1->items[i].nome, 15, lista1->items[i].tel, 20, lista1->items[i].email);
		}
	}
}

//****************** METODO MAIN ******************

int main() {

FILE *ptrfile;
char file[100];
int numCont;

scanf("%s", file);
scanf("%d", &numCont);
numCont = checarNumCont(numCont);
if (numCont == -1){
    return -1;
}
ptrfile = fopen(file, "r");
if (ptrfile == NULL) {
    printf("Arquivo nao encontrado.");
    return 0;
}

tipoLista *lista1 = criarLista(numCont);
leituraDeLista(numCont,lista1,ptrfile);


quick_sort(0, lista1->fim, lista1);

imprimirLista(lista1);

free(lista1);
fclose(ptrfile);
return 0;
}
