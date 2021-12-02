#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "telas.h"

typedef struct {
    char login[10];
    char senha[10];
    int perfil;
}Usuario;

void perfil(Usuario u) {
    if (u.perfil == 1)
        telaPerfil1();
    else if (u.perfil == 2)
        telaPerfil2();
}

void TelaLogin() {
    Usuario u;

    printf("\n\n\t\t\t\t\t\t\t\t*******************************************\n");
    printf("\t\t\t\t\t\t\t\t*******    OLIMPIADAS PARIS 2024!   *******\n ");
    printf("\t\t\t\t\t\t\t\t*******************************************\n");

    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t  |  VOCE GOSTARIA DE ACESSAR COM :   |\n");
    printf("\t\t\t\t\t\t\t\t  |-----------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t  |   1 - MODERADOR(ADM)              |\n");
    printf("\t\t\t\t\t\t\t\t  |-----------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t  |   2 - USUARIO                     |\n");
    printf("\t\t\t\t\t\t\t\t  |-----------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t     DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &u.perfil);

    system("CLS");
    perfil(u);
}

