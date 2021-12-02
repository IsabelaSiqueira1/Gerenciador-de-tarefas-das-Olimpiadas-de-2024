#include <stdio.h>
#include <stdlib.h>
#include "Telas.h"
#include <string.h>
#include <Windows.h>

#define MAX_PAIS 195
typedef struct {

    char federacao[195];
    int ouro;
    int prata;
    int bronze;
    int ativo;

} Medalhas;
Medalhas pais[MAX_PAIS];
void menu();
void cadastrar();
void pesquisar();
void remover();
void relatorio();

void medalha(int argc, char const *argv[])
{   
    menu();
    return 0;
}
void menu() {
    int opcao;
    do {
        printf("\n\n\t\t\t\t\t\t\t**************************************************************\n");
        printf("\t\t\t\t\t\t\t**********    BEM VINDO AO GERENCIADOR DE MEDALHAS!  *********\n");
        printf("\t\t\t\t\t\t\t**************************************************************\n\n");
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   1 - CADASTRAR FEDERACAO               |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   2 - PESQUISAR QUADRO DE MEDALHAS      |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   3 - REMOVER O CADASTRO                |\n ");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   4 - SAIR                              |\n ");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
        case 1:
            cadastrar();
            break;

        case 2:
            relatorio();
            break;

        case 3:
            remover();
            break;
         case 4:
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    } while (opcao != 0);
}

void cadastrar() {
    FILE* pont_arq;
    char federacao[193];
    int ouro;
    int prata;
    int bronze;
    int ativo;
    int i;

    pont_arq = fopen("federacoes.txt", "a");

    if (pont_arq == NULL) {
        printf("ERRO!");
        return 1;
    }
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t        VOCE SELECIONOU A OPCAO CADASTRO DE MEDALHAS\n");
    printf("\n\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
    printf("\n\n\t\t\t\t\t\t\t       DIGITE O NOME DO PAIS: ");
    scanf("%s", &federacao[0]);
    fprintf(pont_arq, "%s\n", federacao);
    printf("\n\n\t\t\t\t\t\t\t       QUANTAS MEDALHAS DE OURO PARA ESTE PAIS: ");
    scanf("%d", &ouro);
    fprintf(pont_arq, "%d\n", ouro);
    printf("\n\n\t\t\t\t\t\t\t       QUANTAS MEDALHAS DE PRATA PARA ESTE PAIS: ");
    scanf("%d", &prata);
    fprintf(pont_arq, "%d\n", prata);
    printf("\n\n\t\t\t\t\t\t\t       QUANTAS MEDALHAS DE BRONZE PARA ESTE PAIS: ");
    scanf("%d", &bronze);
    fprintf(pont_arq, "%d\n", bronze);
    for (int i = 0; i < MAX_PAIS; ++i)
    {
        if (pais[i].ativo == 0)
        {
            pais[i].ouro = ouro;
            pais[i].prata = prata;
            pais[i].bronze = bronze;
            pais[i].ativo = 1;
            strcpy(pais[i].federacao, federacao);
            break;
        }
    }

    fclose(pont_arq);
    printf("\n\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
    printf("\n\n\n\t\t\t\t\t\t\t  SALVANDO AS INFORMACOES, POR FAVOR AGUARDE ");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(1000);
    printf(".\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t    SALVO COM SUCESSO\n");
    printf("\t\t\t\t\t\t\t\t\t-------------------------\n\n\n");
    Sleep(700);

    int ops = 0; 
    printf("\t\t\t\t\t\t\t  |-------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t  |  PARA CONTINUAR A CADASTRAR DIGITE 1            |\n");
    printf("\t\t\t\t\t\t\t  |-------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t  |  PARA RETORNAR AO MENU GERENCIAL DIGITE 2       |\n");
    printf("\t\t\t\t\t\t\t  |-------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t     DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &ops);
    if (ops == 1) {
        system("cls");
        cadastrar();
        
    }
    else if(ops ==2){
        system("cls");
        menu();
    }
}

void remover() {
    int credencial;
    relatorio();

    printf("\n\n\t\t\t\t\t\t\t\t PARA CONTINUAR DIGITE A CREDENCIAL: ");
    scanf("%d", &credencial);
    printf("\n\n\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");

    printf("\n\n\t\t\t\t\t\t\t     REMOVENDO A CREDENCIAL, POR FAVOR AGUARDE ");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(1000);

    --credencial;
    pais[credencial].ativo = 0;

    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t   --------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t      CREDENCIAL REMOVIDA COM SUCESSO\n");
    printf("\t\t\t\t\t\t\t\t   --------------------------------------\n\n");
    Sleep(1000);
    system("cls");
    menu();
}
 void relatorio() {
     printf("\n\n\t\t\t\t\t\t    **************************************************************\n");
     printf("\t\t\t\t\t\t    ***********         RELATORIO DE MEDALHAS          ***********\n");
     printf("\t\t\t\t\t\t    **************************************************************\n\n");
     FILE* pont_arq;
     char federacao[193];
     int i = 1;
     int ouro[193];
     int prata[193];
     int bronze[193];
     int ativo;

     pont_arq = fopen("federacoes.txt", "r");

     printf("\t\t\t\t\t\t\t    CREDENCIAL: %d\n\n", i++);
     while (fgets(federacao, 193, pont_arq) != NULL) {
         printf("\t\t\t\t\t\t\t  |---------------------------|\n");
         printf("\t\t\t\t\t\t\t     PAIS: %s\n", federacao);
     }
     while (fgets(ouro, 193, pont_arq) != NULL) {
         printf("\t\t\t\t\t\t\t  |---------------------------|\n");
         printf("\t\t\t\t\t\t\t     Ouro:   %d\n", ouro);
     }
     while (fgets(prata, 193, pont_arq) != NULL) {
         printf("\t\t\t\t\t\t\t  |---------------------------|\n");
         printf("\t\t\t\t\t\t\t     Prata:  %d\n", 1);
     }
     while (fgets(bronze, 193, pont_arq) != NULL) {
         printf("\t\t\t\t\t\t\t  |---------------------------|\n");
         printf("\t\t\t\t\t\t\t     Bronze: %d\n", 1);
     }
     int op;
     printf("\n\n\t\t\t\t\t\t\t|--------------------------------------------|\n");
     printf("\t\t\t\t\t\t\t|  1 - PARA CONTINUAR A REMOVER              |\n");
     printf("\t\t\t\t\t\t\t|--------------------------------------------|\n");
     printf("\t\t\t\t\t\t\t|  2 - PARA RETORNAR AO MENU GERENCIAL       |\n ");
     printf("\t\t\t\t\t\t\t|--------------------------------------------|\n");
     printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
     scanf("%d", &op);
     if (op == 1) {
         system("cls");
         cadastrar();
     }
     else if (op == 2) {
         system("cls");
         opcaoAtleta();
     }
     fclose(pont_arq);
     return 0;
 }