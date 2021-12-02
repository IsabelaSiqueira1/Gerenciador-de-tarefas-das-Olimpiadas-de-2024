#include <stdio.h>
#include "Telas.h"
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include <Windows.h>

void opcoes();
void verHorarios();
void historiaU();

void escalacaoNatacao() {
    int ops;
    int op;
    printf("\n\n\t\t\t\t\t\t\t      **************************************************\n");
    printf("\t\t\t\t\t\t\t                 ESCALACAO DAS OLIMPIDAS 2024 \n ");
    printf("\t\t\t\t\t\t\t      **************************************************\n\n\n");

    printf("\t\t\t\t\t\t\t           POR FAVOR SELECIONA UMA OPCAO\n\n");
    printf("\t\t\t\t\t\t\t    |-------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t    |   1 - VER A ESCALACAO DE NATACAO POR FEDERACAO  |\n");
    printf("\t\t\t\t\t\t\t    |-------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t    |   2 - VOLTAR AO MENU PRINCIPAL                  |\n");
    printf("\t\t\t\t\t\t\t    |-------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t    |   3 - SAIR                                      |\n");
    printf("\t\t\t\t\t\t\t    |-------------------------------------------------|\n");
    
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &ops);
    printf("\n\n\t\t\t\t\t\t\t       CARREGANDO AS ESCALACOES, POR FAVOR AGUARDE");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n");
    Sleep(1000);
    system("CLS");
    if (ops == 1) {
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESCALACAO DE NADADORES POR FEDERACAO \n\n\n ");
        printf("\t\t\t\t\t\t\t\t|---------------------------|-------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   * Guilherme Costa       |   BRASIL          |\n");
        printf("\t\t\t\t\t\t\t\t|---------------------------|-------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   * Santiago Grassi       |   ARGENTINA       |\n");
        printf("\t\t\t\t\t\t\t\t|---------------------------|-------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   * Sun Yang              |   CHINA           |\n");
        printf("\t\t\t\t\t\t\t\t|---------------------------|-------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   * Enhamed Enhamed       |   ESPANHA         |\n");
        printf("\t\t\t\t\t\t\t\t|---------------------------|-------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   * Caeleb Dressel        |   ESTADOS UNIDOS  |\n");
        printf("\t\t\t\t\t\t\t\t|---------------------------|-------------------|\n");
        printf("\n\n\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t        |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t        |   1 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t        |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t        |   2 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t        |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t            DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 2) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        } 
    }
    else if (ops == 2) {
        printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".\n");
        Sleep(1000);
        system("CLS");
        opcoes();
    }
    else if (ops == 3) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
}

void escalacaoVolei() {
    int ops;
    int op;
    printf("\n\n\t\t\t\t\t\t\t      **************************************************\n");
    printf("\t\t\t\t\t\t\t                 ESCALACAO DAS OLIMPIDAS 2024 \n ");
    printf("\t\t\t\t\t\t\t      **************************************************\n\n\n");

    printf("\t\t\t\t\t\t\t\t POR FAVOR SELECIONA UMA TIME DE FUTEBOL\n\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   1 - BRASIL                            |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   2 - CHINA                             |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   3 - ARGENTINA                         |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   4 - ESPANHA                           |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   5 - ESTADOS UNIDOS                    |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &ops);
    printf("\n\n\t\t\t\t\t\t\t       CARREGANDO AS ESCALACOES, POR FAVOR AGUARDE");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n");
    Sleep(1000);
    system("CLS");
    if (ops == 1) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESCALACAO DO TIME DE VOLEI DO BRASIL \n\n\n ");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Bruno Mossa de Rezende |   CAMISA   1      |   LEVANTADOR           |\n");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Joao Rafael Ferreira   |   CAMISA   3      |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Fernando Gil Kreling   |   CAMISA   6      |   LEVANTADOR           |\n");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Cledenilson Batista    |   CAMISA   10     |   CENTRAL              |\n");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Adriano Xavier         |   CAMISA   11     |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Alan Ferreira de Souza |   CAMISA   21     |   OPOSTO               |\n");
        printf("\t\t\t\t\t\t|----------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoVolei();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 2) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESCALACAO DO TIME DE VOLEI DA CHINA \n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Yuan Xinyue           |   CAMISA   1      |   LIBERO               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Zhu Ting              |   CAMISA   2      |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Gong Xiangyu          |   CAMISA   6      |   OPOSTO               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Zhang Changning       |   CAMISA   9      |   CENTRAL              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Liu Xiaotong          |   CAMISA   10     |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Lin Li                |   CAMISA   15     |   OPOSTO               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoVolei();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 3) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\tESCALACAO DO TIME DE VOLEI DA ARGENTINA \n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Matias Sánchez        |   CAMISA   1      |   LEVANTADOR           |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Federico Pereyra      |   CAMISA   2      |   OPOSTO               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Cristian Poglajen     |   CAMISA   6      |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Facundo Conte         |   CAMISA   7      |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Agustin Loser         |   CAMISA   8      |   CENTRAL              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Santiago Danani       |   CAMISA   9      |   LIBERO               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoVolei();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 4) {
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t\t\tESCALACAO DO TIME DE VOLEI DOS ESPANHA \n\n\n ");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\t\t\t\t\t\t|   * Gustavo Saucedo       |   CAMISA   2      |   OPOSTO               |\n");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\t\t\t\t\t\t|   * Manuel Sevillano      |   CAMISA   4      |   PONTEIRO             |\n");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\t\t\t\t\t\t|   * Francesc Llenas       |   CAMISA   12     |   LIBERO               |\n");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\t\t\t\t\t\t|   * Jordi Gens            |   CAMISA   13     |   LEVANTADOR           |\n");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\t\t\t\t\t\t|   * Iban Pérez            |   CAMISA   14     |   OPOSTO               |\n");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\t\t\t\t\t\t|   * Marlon Palharini      |   CAMISA   17     |   OPOSTO               |\n");
    printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
    printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
    printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
    printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
    printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &op);
    system("CLS");
    if (op == 1) {
        system("CLS");
        escalacaoVolei();
    }
    else if (op == 2) {
        printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".\n");
        Sleep(1000);
        system("CLS");
        opcoes();
    }
    else if (op == 3) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
    }

    else if (ops == 5) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\tESCALACAO DO TIME DE VOLEI DOS ESTADOS UNIDOS \n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Matthew Anderson      |   CAMISA   1      |   PONTEIRO/OPOSTO      |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Taylor Sander         |   CAMISA   3      |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Kyle Ensing           |   CAMISA   5      |   OPOSTO               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Mitchell Stahl        |   CAMISA   6      |   CENTRAL              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Torey DeFalco         |   CAMISA   8      |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * David Smith           |   CAMISA   20     |   PONTEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoVolei();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }

}
void escalacaoFutebol() {
    int ops;
    int op;
    printf("\n\n\t\t\t\t\t\t\t      **************************************************\n");
    printf("\t\t\t\t\t\t\t                 ESCALACAO DAS OLIMPIDAS 2024 \n ");
    printf("\t\t\t\t\t\t\t      **************************************************\n\n\n");

    printf("\t\t\t\t\t\t\t\t  POR FAVOR SELECIONA UMA TIME DE FUTEBOL\n\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   1 - BRASIL                            |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   2 - CHINA                             |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   3 - ARGENTINA                         |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   4 - ALEMANHA                          |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   5 - ESTADOS UNIDOS                    |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &ops);
    printf("\n\n\t\t\t\t\t\t\t       CARREGANDO AS ESCALACOES, POR FAVOR AGUARDE");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n");
    Sleep(1000);
    system("CLS");
    if (ops == 1) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESTALACAO DO TIME BRASIL\n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Alisson Becker        |   CAMISA   1      |   GOLEIRO              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Emerson Royal         |   CAMISA   13     |   LATERAL DIREITO      |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Alex Sandro           |   CAMISA   6      |   LATERAL ESQUERDO     |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Renan Lodi            |   CAMISA   16     |   LATERAL ESQUERDO     |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Eder Militao          |   CAMISA   14     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Lucas Verissimo       |   CAMISA   22     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Lucas Paqueta         |   CAMISA   17     |   MEIA-ATACANTE        |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Henrique Caserimo     |   CAMISA   5      |   VOLANTE              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Gabriel Jesus         |   CAMISA   9      |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Philippe Coutinho     |   CAMISA   11     |   MEIA-ATACANTE        |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Neymar Junior         |   CAMISA   10     |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: "); 
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoFutebol();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 2) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESTALACAO DO TIME CHINA \n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Wang Dalei            |   CAMISA   25     |   GOLEIRO              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Xu Xin                |   CAMISA   8      |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Yan Junling           |   CAMISA   1      |   GOLEIRO              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Xi Wu                 |   CAMISA   15     |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Zheng Zhi             |   CAMISA   10     |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Wang Shenchao         |   CAMISA   4      |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Yu Dabao              |   CAMISA   22     |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Hao Junmin            |   CAMISA  11      |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Tang Miao             |   CAMISA   20     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Wang Gang             |   CAMISA   17     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Ang Li                |   CAMISA   2      |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoFutebol();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 3) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESTALACAO DO TIME ARGENTINA\n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Franco Armani         |   CAMISA   1      |   GOLEIRO              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Gonzalo Montiel       |   CAMISA  4       |   LATERAL DIREITO      |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Cristian Romero       |   CAMISA   13     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Nicolas Otamendi      |   CAMISA   19     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Leandro Paredes       |   CAMISA   5      |   VOLATE               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Guido Rodrigues       |   CAMISA   18     |   VOLATE               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Enzo Perez            |   CAMISA   24     |   VOLATE               |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Lionel Messi          |   CAMISA   10     |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Nicolas Gaitan        |   CAMISA   30     |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Di Maria              |   CAMISA   11     |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Fedelico Mancuello    |   CAMISA   30     |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoFutebol();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 4) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESTALACAO DO TIME ESPANHA \n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * David de Gea          |   CAMISA   1      |   GOLEIRO              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Cesar Azpilicueta     |   CAMISA   2      |   LATERAL DIREITO      |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Jordi Alba            |   CAMISA   18     |   LATERAL ESQUERDO     |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   *  Daniel Carvajal      |   CAMISA   20     |   LATERAL DIREITO      |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Diego Llorente        |   CAMISA   6      |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Pau Torres            |   CAMISA   3      |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   *  Alvaro Moratao       |   CAMISA   7      |   CENTROAVANTE         |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   *  Pablo Sarabia        |   CAMISA  22      |   PONTA DIREITA        |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Raúl de Tomás         |   CAMISA   11     |   CENTROAVANTE         |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Dani Olmo             |   CAMISA   21     |   MEIA-ATACANTE        |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Mikel Merino          |   CAMISA  17      |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoFutebol();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
    else if (ops == 5) {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tESTALACAO DO TIME ESTADOS UNIDOS\n\n\n ");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Zack Steffen          |   CAMISA   1      |   GOLEIRO              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Jackson Yueill        |   CAMISA   6      |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Timothy Weah          |   CAMISA   20     |   CENTROAVANTE         |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Tyler Adams           |   CAMISA   4      |   VOLANTE              |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Jonathan Lewis        |   CAMISA   7      |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   *  Sebastian Soto       |   CAMISA   19     |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Daryl Dike            |   CAMISA   2      |   CENTROAVANTE         |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   *  Mark Mckenzie        |   CAMISA   18     |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * James Sands           |   CAMISA   8      |   ZAGUEIRO             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Eryk Williamson       |   CAMISA   19     |   MEIA                 |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\t\t\t\t\t\t|   * Gyasi Zardes          |   CAMISA   9      |   ATACANTE             |\n");
        printf("\t\t\t\t\t\t|---------------------------|-------------------|------------------------|\n");
        printf("\n\n\t\t\t\t\t   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   1 - CONTINUAR A VER OUTRAS ESCALACOES |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   2 - VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t      |   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t      |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t          DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 1) {
            system("CLS");
            escalacaoFutebol();
        }
        else if (op == 2) {
            printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".");
            Sleep(500);
            printf(".\n");
            Sleep(1000);
            system("CLS");
            opcoes();
        }
        else if (op == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
    }
}

void escalacaoTimes() {
    int opss;
    printf("\n\n\t\t\t\t\t\t\t      **************************************************\n");
    printf("\t\t\t\t\t\t\t                 ESCALACAO DAS OLIMPIDAS 2024 \n ");
    printf("\t\t\t\t\t\t\t      **************************************************\n\n\n");

    printf("\t\t\t\t\t\t\t\t    POR FAVOR SELECIONA UMA MODALIDADE \n\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   1 - FUTEBOL                           |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   2 - VOLEI                             |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   3 - NATACAO                           |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   4 - VOLTAR AO MENU PRINCIPAL          |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   5 - SAIR                              |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opss);
    system("CLS");
    if (opss == 1) {
        system("CLS");
        escalacaoFutebol();
    }
    else if (opss == 2) {
        system("CLS");
        escalacaoVolei();
    }
    else if (opss == 3) {
        system("CLS");
        escalacaoNatacao();
    }
    else if (opss == 3) {
        system("CLS");
        opcoes();
    }
    else if (opss == 3) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
}

void relatorioUsuario() {
    printf("\n\n\t\t\t\t\t\t    **************************************************************\n");
    printf("\t\t\t\t\t\t    ***********      RANKING DE MEDALHAS DOS PAISES     ***********\n");
    printf("\t\t\t\t\t\t    **************************************************************\n\n");
    FILE* pont_arq;
    char federacao[193];
    int i = 1;
    int ouro[193];
    int prata[193];
    int bronze[193];
    int ativo;
    pont_arq = fopen("federacoes.txt", "r");
    printf("\n\t\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    printf("\t\t\t\t\t\t\t     CREDENCIAL: %d\n\n", i++);
    while (fgets(federacao, 193, pont_arq) != NULL) {
        printf("\t\t\t\t\t\t\t °   PAIS: %s\n", federacao);
    }
    while (fgets(ouro, 193, pont_arq) != NULL) {
        printf("\t\t\t\t\t\t\t °   Ouro:   %d\n", ouro);
    }
    while (fgets(prata, 193, pont_arq) != NULL) {
        printf("\t\t\t\t\t\t\t °   Prata:  %d\n", 1);
    }
    while (fgets(bronze, 193, pont_arq) != NULL) {
        printf("\t\t\t\t\t\t\t °   Bronze: %d\n", 1);
    }
    int op;
    printf("\n\n\t\t\t\t\t\t\t|--------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t|  1 - PARA RETORNAR AO MENU PRINCIPAL       |\n");
    printf("\t\t\t\t\t\t\t|--------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t|  2 - SAIR                                  |\n ");
    printf("\t\t\t\t\t\t\t|--------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &op);
    if (op == 1) {
        system("cls");
        opcoes();
    }
    else if (op == 2) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
    fclose(pont_arq);
    return 0;
}
void desenvolvimento() {
        int pi;
        printf("\n\n\t\t\t\t\t\t\t\t\tCARREGANDO PROXIMO TRECHO");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".\n");
        Sleep(500);
        printf("\n\n\t\t\t\t\t\t\t\t\t   OK, VAMOS CONTINUAR");
        Sleep(1500);
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        printf("\n\n\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\n\t\t\t\t°\t\t\t            Olimpiadas: A origem dos Jogos Olimpicos                    \t\t°\t\t\t\t\n\n");
        printf("\n\t\t\t\t°     Foram os gregos que criaram os Jogos Olimpicos. Por volta de 2500 a.C., os gregos ja faziam homenagens \t°\n\t\t\t\t° aos deuses, principalmente Zeus, com realizacao de competicoes.\t\t\t\t\t\t°  \n\n\t\t\t\t°     Porem, foi somente em 776 a.C. que ocorreram pela primeira vez os Jogos Olimpicos, de forma organizada e\t°\n\t\t\t\t° com participacao de atletas de varias cidades-estados.\t\t\t\t\t\t\t°\n ");
        printf("\n\t\t\t\t°     Atletas das cidades-estados gregas se reuniam na cidade de Olimpia para disputarem diversas competicoes\t°\n\t\t\t\t° esportivas: atletismo, luta, boxe, corrida de cavalo e pentatlo (luta, corrida, salto em distancia,\t\t°\n\t\t\t\t° arremesso de dardo e de disco).\t\t\t\t\t\t\t\t\t\t°\n\n\t\t\t\t°     Os vencedores eram recebidos como herois em suas cidades e ganhavam uma coroa de louros.");
        printf("\t\t\t°\n\t\t\t\t°     Alem da religiosidade, os gregos buscavam atraves dos Jogos Olimpicos a paz e a harmonia entre as cidades\t°\n\t\t\t\t° que compunham a civilizacao grega. Mostra tambem a importancia que os gregos davam aos esportes e a\t\t°\n\t\t\t\t° manutencao de um corpo saudavel.\t\t\t\t\t\t\t\t\t\t°\n ");
        printf("\n\t\t\t\t°     Quando os romanos invadiram e dominaram a Grecia no seculo II, muitas tradicoes gregas, entre elas as\t°\n\t\t\t\t° Olimpiadas, foram deixadas de lado. No ano de 392 d.C., os Jogos Olimpicos e quaisquer manifestacoes   \t°\n\t\t\t\t° religiosas do politeismo grego foram proibidos pelo imperador romano Teodosio I, apos converter-se para o\t°\n\t\t\t\t° cristianismo..\t\t\t\t\t\t\t\t\t\t\t\t°\n\n");
        printf("\n\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\n\t\t\t\t\t\t\t     E essa foi a historia da origem dos Jogos Olimpicos\n\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   1 - LER NOVAMENTE                     |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   2 - VOLTAR AO MENU PRNCIPAL           |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t     DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &pi);
        if (pi == 1) {
            system("CLS");
            historiaU();
        }
        else if (pi == 2) {
            system("CLS");
            opcoes();
        }
        else if (pi == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
}

void introducaoHistoria(){
        int opp;
        printf("\n\n\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\n\t\t\t\t°\t\t\t            PRIMEIRAMENTE... OQUE SAO AS OLIMPIADAS ?                    \t\t°\t\t\t\t\n\n");
        printf("\n\t\t\t\t°     A cada quatro anos, os atletas de centenas de paises se reunem num pais sede para disputarem um     \t°\n\t\t\t\t° conjunto de modalidades esportivas.\t\t\t\t\t\t\t\t\t\t°  \n\n\t\t\t\t°     A propria bandeira olimpica representa essa uniao de povos e racas, pois e formada por cinco aneis\t°\n\t\t\t\t° entrelacados, representando os cinco continentes e suas cores. A paz, a amizade e o bom relacionamento entre  °\n\t\t\t\t° os povos e o espirito olimpico sao os principios dos jogos olimpicos.\t\t\t\t\t\t°\n\n");
        printf("\n\n\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n");

        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   1 - CONTINUAR LENDO A HISTORIA        |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   2 - VOLTAR AO MENU PRNCIPAL           |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   3 - SAIR                              |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t     DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &opp);
        if (opp == 1) {
            system("CLS");
            desenvolvimento();
        }
        else if (opp == 2) {
            system("CLS");
            opcoes();
        }
        else if (opp == 3) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
}

void historiaU() {
        int opc;
        printf("\n\n\t\t\t\t\t\t******************************************************************\n");
        printf("\t\t\t\t\t\t*****  VEM CONHECER UM POUCO SOBRE A HISTORIA DAS OLIMPIADAS  ****\n");
        printf("\t\t\t\t\t\t******************************************************************\n\n\n");
        printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   1 - PARA LER A HISTORIA DA OLIMPIADA  |\n");
        printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   2 - PARA VOLTAR AO MENU PRINCIPAL     |\n");
        printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   3 - PARA SAIR DO PROGRAMA             |\n");
        printf("\t\t\t\t\t\t\t   |-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t       DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &opc);
        if (opc == 1) {
            system("CLS");
            introducaoHistoria();
        }
        else if (opc == 2) {
            system("CLS");
            opcoes();
        }
        else if (opc == 2) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
}


void opcoes() {
    int opcoes;
    printf("\n\n\t\t\t\t\t\t\t\t*******************************************\n");
    printf("\t\t\t\t\t\t\t\t***********   OLIMPIADAS 2024    **********\n ");
    printf("\t\t\t\t\t\t\t\t*******************************************\n\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   1 - VER A ESCALACAO DOS TIMES         |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   2 - HORARIOS DAS PARTIDAS             |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   3 - HISTORIA DAS OLIMPIADAS           |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   4 - RANKING DE MEDALHAS               |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   5 - SAIR                              |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcoes);
    printf("\n\n\t\t\t\t\t\t\t       REDIRECIONADO A TELA, POR FAVOR AGUARDE");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n");
    Sleep(1000);
    system("CLS");
    if (opcoes == 1) {
        system("CLS");
        escalacaoTimes();
    }
    else if (opcoes == 2) {
        system("CLS");
        verHorarios();
    }
    else if (opcoes == 3) {
        system("CLS");
        historiaU();
    }
    else if (opcoes == 4) {
        system("CLS");
        relatorioUsuario();
    }
    else if (opcoes == 5) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }

}

void telaPerfil2() {

    printf("\n\n\t\t\t\t\t\t\t\t********************************************\n");
    printf("\t\t\t\t\t\t\t\t******  BEM VINDO A TELA DO USUARIO!  ******\n");
    printf("\t\t\t\t\t\t\t\t********************************************\n\n");
    printf("\t\t\t\t\t\t\t        POR FAVOR INSIRA AS INFORMACOES PARA CONTINUAR\n\n\n");
    char login[15];
    char senha[15];
    int perfil;

    printf("\t\t\t\t\t\t\t        Digite o seu Login: ");
    scanf("%s", login);

    printf("\n\t\t\t\t\t\t\t        Digite a sua Senha: ");
    scanf("%s", senha);
   
    printf("\n\n\t\t\t\t\t\t\t\t\t    CARREGANDO ");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n");
    Sleep(500);
    printf("\n\n\t\t\t\t\t\t\t\t\t----------------------\n");
    printf("\t\t\t\t\t\t\t\t\t  LOGADO COM SUCESSO\n");
    printf("\t\t\t\t\t\t\t\t\t----------------------\n\n");
    Sleep(1000);
    system("CLS");
    opcoes();
}