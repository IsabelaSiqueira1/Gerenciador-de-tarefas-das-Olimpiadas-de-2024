#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cod;
struct cadastro
{
    char telefone[200];
    char nome[200];
    char endereco[200];
    int vazio, cod;
   
}log[200];


int opt;



void list() { 
    int i, j;
    for (i = 0; i < 200; i++) {
        if (log[i].cod != NULL) {
            printf("\nNome: %s\nEndereco: %s\nTelefone: %s\n\n", log[i].nome,  log[i].endereco, log[i].telefone);
        }
    }
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");

}

