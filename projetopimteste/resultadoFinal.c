#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <Windows.h>
#define MAXLETRAS 100

void opcaoAtleta();

typedef struct {
    char nome[MAXLETRAS];
    int pontos[4];
}Dados;

int i, j;
int op;
float ouroPais1 = 0;
float ouroPais2 = 0;
float ouroPais3 = 0;
float ouroPais4 = 0;
float ouroPais5 = 0;
float prataPais1 = 0;
float prataPais2 = 0;
float prataPais3 = 0;
float prataPais4 = 0;
float prataPais5 = 0;
float bronzePais1 = 0;
float bronzePais2 = 0;
float bronzePais3 = 0;
float bronzePais4 = 0;
float bronzePais5 = 0;
float totalPais1 = 0;
float totalPais2 = 0;
float totalPais3 = 0;
float totalPais4 = 0;
float totalPais5 = 0;

void resultadoFinal() {
    printf("\n\n\t\t\t\t\t**********************************************************************************************\n");
    printf("\t\t\t\t\t******  PARA GERENCIAR AS MEDALHAS, POR FAVOR SELECIONE UM PAIS E ATUALIZE O SEU PLACAR  *****\n ");
    printf("\t\t\t\t\t**********************************************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   1 - ATUALIZAR O PLACAR DO BRASIL      |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   2 - ATUALIZAR O PLACAR DO CHINA       |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   3 - ATUALIZAR O PLACAR DO ARGENTINA   |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   4 - ATUALIZAR O PLACAR DO EUA         |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   5 - ATUALIZAR O PLACAR DO ESPANHA     |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   6 - VOLTAR AO MENU PRNCIPAL           |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   7 - SAIR                              |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n"); 
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &op);
    printf("\n\n\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("\n\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    if (op == 1) {
        void Brasil(); {
            printf("\n\n\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE OURO PARA O BRASIL:  ");
            scanf("%f", &ouroPais1);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE PRATA PARA O BRASIL:  ");
            scanf("%f", &prataPais1);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA O BRASIL:  ");
            scanf("%f", &bronzePais1);
            printf("\n\n\t\t\t\t\t\t\t        SALVANDO AS INFORACOES, POR FAVOR AGAURDE ");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(500);
            printf("\n\n\t\t\t\t\t\t\t\t\t------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t   PLACAR ATUALIZADO \n");
            printf("\t\t\t\t\t\t\t\t\t------------------------\n\n");
            Sleep(1500);
            
            totalPais1 = ((ouroPais1 * 3) + (prataPais1 * 2) + bronzePais1);
        }
    }

    else if (op == 2) {
        void China(); {
            printf("\n\n\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A CHINA:  ");
            scanf("%f", &ouroPais2);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A CHINA: ");
            scanf("%f", &prataPais2);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A CHINA: ");
            scanf("%f", &bronzePais2);
            printf("\n\n\t\t\t\t\t\t\t        SALVANDO AS INFORACOES, POR FAVOR AGAURDE ");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(500);
            printf("\n\n\t\t\t\t\t\t\t\t\t------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t   PLACAR ATUALIZADO \n");
            printf("\t\t\t\t\t\t\t\t\t------------------------\n\n");
            Sleep(1500);
            totalPais2 = ((ouroPais2 * 3) + (prataPais2 * 2) + bronzePais2);
        }
    }

    else if (op == 3) {
        void Argentina(); {
            printf("\n\n\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A ARGENTINA: ");
            scanf("%f", &ouroPais3);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A ARGENTINA:");
            scanf("%f", &prataPais3);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A ARGENTINA:");
            scanf("%f", &bronzePais3);
            printf("\n\n\t\t\t\t\t\t\t        SALVANDO AS INFORACOES, POR FAVOR AGAURDE ");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(500);
            printf("\n\n\t\t\t\t\t\t\t\t\t------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t   PLACAR ATUALIZADO \n");
            printf("\t\t\t\t\t\t\t\t\t------------------------\n\n");
            Sleep(1500);
            totalPais3 = ((ouroPais3 * 3) + (prataPais3 * 2) + bronzePais3);
        }
    }

    else if (op == 4) {
        void EUA(); {
            printf("\n\n\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA OS ESTADOS UNIDOS: ");
            scanf("%f", &ouroPais4);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA OS ESTADOS UNIDOS: ");
            scanf("%f", &prataPais4);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA OS ESTADOS UNIDOS: ");
            scanf("%f", &bronzePais4);
            printf("\n\n\t\t\t\t\t\t\t        SALVANDO AS INFORACOES, POR FAVOR AGAURDE ");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(500);
            printf("\n\n\t\t\t\t\t\t\t\t\t------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t   PLACAR ATUALIZADO \n");
            printf("\t\t\t\t\t\t\t\t\t------------------------\n\n");
            Sleep(1500);
            totalPais4 = ((ouroPais4 * 3) + (prataPais4 * 2) + bronzePais4);
        }
    }

    else if (op == 5) {
        void Espanha(); {
            printf("\n\n\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A ESPANHA:  ");
            scanf("%f", &ouroPais5);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A ESPANHA: ");
            scanf("%f", &prataPais5);
            printf("\n\t\t\t\t\t\t\t        DIGITE AS MEDALHAS DE BRONZE PARA A ESPANHA:  ");
            scanf("%f", &bronzePais5);
            printf("\n\n\t\t\t\t\t\t\t        SALVANDO AS INFORACOES, POR FAVOR AGAURDE ");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(500);
            printf("\n\n\t\t\t\t\t\t\t\t\t------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t   PLACAR ATUALIZADO \n");
            printf("\t\t\t\t\t\t\t\t\t------------------------\n\n");
            Sleep(1500);
            totalPais5 = ((ouroPais5 * 3) + (prataPais5 * 2) + bronzePais5);
        }
    }
    else if (op == 6) {
        system("cls");
        opcaoAtleta();
    }  
    else if (op == 7) {
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }

    system("cls");

    Dados lista[5] = {
        {{"\n\t\t\t\t\t\t\t°  BRASIL      "}, {ouroPais1, prataPais1, bronzePais1, totalPais1} }, 
        {{"\n\t\t\t\t\t\t\t°  CHINA       "}, {ouroPais2, prataPais2, bronzePais2, totalPais2} },
        {{"\n\t\t\t\t\t\t\t°  ARGENTINA   "}, {ouroPais3, prataPais3, bronzePais3, totalPais3} },
        {{"\n\t\t\t\t\t\t\t°  EUA         "}, {ouroPais4, prataPais4, bronzePais4, totalPais4} },                                       
        {{"\n\t\t\t\t\t\t\t°  ESPANHA     "}, {ouroPais5, prataPais5, bronzePais5, totalPais5} },

    };
   
    printf("\n\t\t\t\t\t\t   ------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°° RESULTADOS °°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("\n\t\t\t\t\t\t   ------------------------------------------------------------------\n");
    printf("\n\n\t\t\t\t\t\t\t%s%8s%8s%8s\n", "\t         Ouro[3] ", "Prata[2] ", "Bronze[1] ", "Total  ");
    for (i = 0; i < 5; i++) {
        printf("%s", lista[i].nome);
        for (j = 0; j < 4; j++) {
            printf("%8.1d", lista[i].pontos[j]);
        }
        printf("\n");
    }
    int ops;
    printf("\n\n\n\t\t\t\t           -----------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t\t\t   |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t   |   1 - PARA ATUALIZAR O PLACAR NOVAMENTE |\n");
    printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t   |   2 - PARA VOLTAR AO MENU PRINCIPAL     |\n");
    printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t   |   3 - SAIR DO PROGRAMA                  |\n");
    printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t       DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &ops);
    if (ops == 1) {
        system("cls");
        resultadoFinal();
    }
    else if (ops == 2) {
        system("cls");
        opcaoAtleta();
    }
    else if (ops == 3) {
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
}
