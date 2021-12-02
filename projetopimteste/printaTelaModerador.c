#include <stdio.h>
#include "Telas.h"
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include <conio.h>
#include <Windows.h>
#define SIZE 50

void horarios();
void medalha();
void opcaoAtleta();
void introducao();
void resultadoFinal();
char nome[SIZE][10];
char modalidade[SIZE][10];
int credencial[SIZE];
char pais[SIZE][10];
int op;

void lista() {
    int opi;
    int i;
    for (i = 0; i < SIZE; i++) {
        if (credencial[i] > 0) {
            printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
            printf("\n\n\t\t\t\t\t\t\tNome: %s\n\n\t\t\t\t\t\t\tModalidade: %s\n\n\t\t\t\t\t\t\tCredencial: %d\n\n\t\t\t\t\t\t\tPais: %s", nome[i], modalidade[i], credencial[i], pais[i]);
            break;
        }
        else {
           printf("\n\n\t\t\t\t\t\tATLETA NAO ENCONTRADA,POR FAVOR VERIFIQUE OS DADOS E TENTE NOVAMENTE.");
           printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n\n");
           break;
        }
    }
   
    printf("\n\n\t\t\t\t\t\t\t|---------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t|   1 - PARA VOLTAR AO MENU PRINCIPAL               |\n");
    printf("\t\t\t\t\t\t\t|---------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t|   2 - PARA SAIR DO PROGRAMA                       |\n");
    printf("\t\t\t\t\t\t\t|---------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opi);
    if (opi == 1) {
        system("cls");
        opcaoAtleta();
    }
    else if(opi == 2) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
}

void removerAtleta() {
    int credencialDelete;
    char nomeDelete[50];
    int i;
    do {
        printf("\n\n\t\t\t\t\t\t\t***************************************************\n");
        printf("\t\t\t\t\t\t\t********       EXCLUSAO DE ATLETAS         ********\n");
        printf("\t\t\t\t\t\t\t***************************************************");
        printf("\n\n\t\t\t\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   1 - PARA PESQUISAR POR CREDENCIAL DO ATLETA     |\n");
        printf("\t\t\t\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   2 - PARA PESQUISAR POR NOME DO ATLETA           |\n");
        printf("\t\t\t\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        printf("\n\n\t\t\t\t\t       같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�");
        switch (op) {
        case 1:
            printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE A CREDENCIAl: ");
            scanf("%d", &credencialDelete);
            for (i = 0; i < SIZE; i++) {
                if (credencial[i] == credencialDelete) {
                    nome[SIZE][i] == 0;
                    modalidade[i] == 0;
                    credencial[i] == 0;
                    pais[i] == 0;
                    printf("\n\n\n\t\t\t\t\t\t\tEXCLUINDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
                    printf("\n\n\t\t\t\t\t\t\t\t   --------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t    ATLETA EXCLUIDO COM SUCESSO!\n");
                    printf("\t\t\t\t\t\t\t\t   --------------------------------\n\n\n");
                    Sleep(1000);
                    system("cls");
                }
                else
                    printf("\n\n\t\t\t\t\t\tCREDENCIAL NAO ENCONTRADA,POR FAVOR VERIFIQUE OS DADOS E TENTE NOVAMENTE.");
                printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n\n");
                break;
            }
            break;
        case 2:
            printf("\n\n\t\t\t\t\t\t\t\tPOR FAVOR DIGITE O NOME: ");
            scanf("%s", &nomeDelete);
            for (i = 0; i < SIZE; i++) {
                if (strcmp(nome[i], nomeDelete) == 0) {
                    nome[SIZE][i] == 0;
                    modalidade[i] == 0;
                    credencial[i] == 0;
                    pais[i] == 0;
                    printf("\n\n\t\t\t\t\t\t\t\tEXCLUINDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
                    printf("\n\n\t\t\t\t\t\t\t\t----------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t   ATLETA EXCLUIDO COM SUCESSO!\n");
                    printf("\t\t\t\t\t\t\t\t----------------------------------\n\n\n");
                    Sleep(1000);
                    system("cls");
                }
                else
                    printf("\n\n\t\t\t\t\t\tNOME NAO ENCONTRADA,POR FAVOR VERIFIQUE OS DADOS E TENTE NOVAMENTE.");
                printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n\n");
            }
            break;
        }
        printf("\n\n\t\t\t\t\t\t\t|----------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   1 - PARA VOLTAR AO MENU PRINCIPAL          |\n");
        printf("\t\t\t\t\t\t\t|----------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   2 - PARA CONTINUAR A EXCLUIR ATLETAS       |\n");
        printf("\t\t\t\t\t\t\t|----------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("cls");
        if (op == 1) {
            opcaoAtleta();
        }
    } while (op == 2);
}

void alterarAtleta() {
    int credAltera;
    char nomeAltera[50];
    char nomeNovo[50];
    char modalidadeNovo[50];
    int credNovo;
    char paisNovo[50];
    int i;
    int ops = 0;
    do {
        printf("\n\n\t\t\t\t\t\t\t***************************************************\n");
        printf("\t\t\t\t\t\t\t********        ALTERACAO DE ATLETAS         ******\n");
        printf("\t\t\t\t\t\t\t***************************************************");
        printf("\n\n\t\t\t\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   1 - PARA PESQUISAR POR CREDENCIAL DO ATLETA     |\n");
        printf("\t\t\t\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   2 - PARA PESQUISAR POR NOME DO ATLETA           |\n");
        printf("\t\t\t\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        printf("\n\n\t\t\t\t\t         같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�");
        switch (op) {
        case 1:
            printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE A CREDENCIAl: ");
            scanf("%d", &credAltera);
            for (i = 0; i < SIZE; i++) {
                if (credencial[i] == credAltera) {
                    printf("\n\n\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   1 - PARA ALTERAR O NOME          |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   2 - PARA ALTERAR A MODALIDADE    |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   3 - PARA ALTERAR A CREDENCIAL    |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   4 - PARA ALTERAR O PAIS          |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
                    scanf("%d", &ops);
                    if (ops == 1) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE O NOVO NOME: ");
                        scanf("%s", &nomeNovo);
                        strcpy(nome[i], nomeNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   --------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t      NOME ALTERADO COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   --------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                    else if (ops == 2) {
                        printf("\n\n\t\t\t\t\t\t\t\tPOR FAVOR DIGITE A NOVA MODALIDADE: ");
                        scanf("%s", &modalidadeNovo);
                        strcpy(modalidade[i], modalidadeNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t      MODALIDADE ALTERADA COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                    else if (ops == 3) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE A NOVA CREDENCIAL: ");
                        scanf("%d", &credNovo);
                        strcpy(credencial[i], credNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t      CREDENCIAL ALTERADA COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                    else if (ops == 4) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE O NOVO PAIS ");
                        scanf("%s", &paisNovo);
                        strcpy(pais[i], paisNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t       PAIS ALTERADO COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                }
                else
                    printf("\n\n\t\t\t\t\t\tCREDENCIAL NAO ENCONTRADA,POR FAVOR VERIFIQUE OS DADOS E TENTE NOVAMENTE.");
                    printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n\n");
                break;
            }
            break;
        case 2:
            printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE O NOME: ");
            scanf("%s", &nomeAltera);
            for (i = 0; i < SIZE; i++) {
                if (nome[i] == nomeAltera) {
                    printf("\n\n\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   1 - PARA ALTERAR O NOME          |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   2 - PARA ALTERAR A MODALIDADE    |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   3 - PARA ALTERAR A CREDENCIAL    |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|   4 - PARA ALTERAR O PAIS          |\n");
                    printf("\t\t\t\t\t\t\t\t|------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
                    scanf("%d", &ops);
                    if (ops == 1) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE O NOVO NOME: ");
                        scanf("%s", &nomeNovo);
                        strcpy(nome[i], nomeNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t       NOME ALTERADO COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                    else if (ops == 2) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE A NOVA MODALIDADE: ");
                        scanf("%s", &modalidadeNovo);
                        strcpy(modalidade[i], modalidadeNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t     MODALIDADE ALTERADA COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                    else if (ops == 3) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE A NOVA CREDENCIAL: ");
                        scanf("%d", &credNovo);
                        strcpy(credencial[i], credNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t      CREDENCIAL ALTERADA COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                    else if (ops == 4) {
                        printf("\n\n\t\t\t\t\t\t\t\t  POR FAVOR DIGITE O NOVO PAIS ");
                        scanf("%s", &paisNovo);
                        strcpy(pais[i], paisNovo);
                        printf("\n\n\n\t\t\t\t\t\t\tALTERANDO AS NOVAS INFORMACOES, POR FAVOR AGUARDE ");
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
                        printf("\n\n\t\t\t\t\t\t\t\t   ----------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t      PAIS ALTERADO COM SUCESSO!\n");
                        printf("\t\t\t\t\t\t\t\t   ----------------------------------\n\n\n");
                        Sleep(700);
                        system("cls");
                    }
                }else
                    printf("\n\n\t\t\t\t\t\tCREDENCIAL NAO ENCONTRADA,POR FAVOR VERIFIQUE OS DADOS E TENTE NOVAMENTE.");
                printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n\n");
                break;
            }
            break;
           
           
        }
        printf("\n\n\t\t\t\t\t\t\t|-------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|  1 - PARA VOLTAR AO MENU PRINCIPAL        |\n");
        printf("\t\t\t\t\t\t\t|-------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|  2 - PARA CONTINUAR A ALTERAR             |\n");
        printf("\t\t\t\t\t\t\t|-------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("cls");
        if (op == 1) {
            opcaoAtleta();
        }
    } while (op == 2);
}

void pesquisa() {
    int credencialPesquisa;
    char nomePesquisa[50];
    int i;
    do {
        printf("\n\n\t\t\t\t\t\t\t***************************************************\n");
        printf("\t\t\t\t\t\t\t********         PESQUISA DE ATLETAS         ******\n");
        printf("\t\t\t\t\t\t\t***************************************************");
        printf("\n\n\t\t\t\t\t\t\t|------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   1 - PARA PESQUISAR POR CREDENCIAL DO ATLETA  |\n");
        printf("\t\t\t\t\t\t\t|------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   2 - PARA PESQUISAR POR NOME DO ATLETA        |\n");
        printf("\t\t\t\t\t\t\t|------------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        switch (op) {
        case 1:
            printf("\n\n\t\t\t\t\t       같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
            printf("\n\n\t\t\t\t\t\t\t  DIGITE A CREDENCIAL DO ATLETA: ");
            scanf("%d", &credencialPesquisa);
            for (i = 0; i < SIZE; i++) {
                if (credencial[i] == credencialPesquisa) {
                    printf("\n\n\t\t\t\t\t\t\t  ESTAMOS PROCURANDO, POR FAVOR AGUARDE ");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".\n");
                    Sleep(500);
                    system("cls");
                    printf("\n\n\t\t\t\t\t       같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
                    printf("\n\n\t\t\t\t\t\t\t  �  Nome: %s ", nome[i]);
                    printf("\n\n\t\t\t\t\t\t\t  �  Modalidade: %s ", modalidade[i]);
                    printf("\n\n\t\t\t\t\t\t\t  �  Credencial: %d", credencial[i]);
                    printf("\n\n\t\t\t\t\t\t\t  �  Pais: %s ", pais[i]);
                }

                else{
                        printf("\n\n\t\t\t\t\t\t\t  ESTAMOS PROCURANDO, POR FAVOR AGUARDE ");
                        Sleep(500);
                        printf(".");
                        Sleep(500);
                        printf(".");
                        Sleep(500);
                        printf(".");
                        Sleep(500);
                        printf(".\n");
                        Sleep(500);
                        printf("\n\t\t\t\t\t\t    OPA.. CREDENCIAL NAO ENCONTRADO,VERIFIQUE OS DADOS E TENTE NOVAMENTE\n\n ");
                        Sleep(700);
                        system("cls");
                        pesquisa();
                } break;
            }
             break;
        case 2:
            printf("\n\n\t\t\t\t\t   같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
            printf("\n\n\t\t\t\t\t\t\t  DIGITE O NOME DO ATLETA: ");
            scanf("%s", &nomePesquisa);
            for (i = 0; i < SIZE; i++) {
                if (strcmp(nome[i], nomePesquisa) == 0) {
                    printf("\n\n\t\t\t\t\t\t\t  ESTAMOS PROCURANDO, POR FAVOR AGUARDE ");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".\n");
                    Sleep(500);
                    printf("\n\n\t\t\t\t\t\t\t  �  Nome: %s ", nome[i]);
                    printf("\n\n\t\t\t\t\t\t\t  �  Modalidade: %s ", modalidade[i]);
                    printf("\n\n\t\t\t\t\t\t\t  �  Credencial: %d", credencial[i]);
                    printf("\n\n\t\t\t\t\t\t\t  �  Pais: %s ", pais[i]);
                }
                else{
                    printf("\n\n\t\t\t\t\t\t\t  ESTAMOS PROCURANDO, POR FAVOR AGUARDE ");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(500);
                    printf(".\n");
                    Sleep(500);
                    printf("\n\t\t\t\t\t\t    OPA.. NOME NAO ENCONTRADO,VERIFIQUE OS DADOS E TENTE NOVAMENTE \n\n");
                    Sleep(700);
                    system("cls");
                    pesquisa();
                }break;
            }
          
        }
        printf("\n\n\t\t\t\t\t\t\t|------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   1 - PARA VOLTAR AO MENU PRINCIPAL      |\n");
        printf("\t\t\t\t\t\t\t|------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t|   2 - PARA CONTINUAR A CONSULTAR         |\n");
        printf("\t\t\t\t\t\t\t|------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("cls");
        if (op == 1) {
            opcaoAtleta();
        }
    } while (op == 2);
}


void cadastro() {
    static int linha;
    do {
        
        printf("\n\n\n\t\t\t\t\t\t\t\t Digite o nome do atleta: ");
        scanf("%s", &nome[linha]);
        printf("\n\t\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같\n");
        printf("\n\t\t\t\t\t\t\t\t Digite Modalidade do atleta: ");
        scanf("%s", &modalidade[linha]);
        printf("\n\t\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같\n");
        printf("\n\t\t\t\t\t\t\t\t Digite a credencial do atleta: ");
        scanf("%d", &credencial[linha]);
        printf("\n\t\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같\n");
        printf("\n\t\t\t\t\t\t\t\t Digite o pais do atleta: ");
        scanf("%s", &pais[linha]);
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t   |------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   1 - PARA CADASTAR MAIS UM ATLETA       |\n"); 
        printf("\t\t\t\t\t\t\t   |------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   2 - PARA CONSULTAR UM ATLETA           |\n");
        printf("\t\t\t\t\t\t\t   |------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   3 - PARA VOLTAR AO MENU PRINCIPAL      |\n");
        printf("\t\t\t\t\t\t\t   |------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t   |   4 - PARA SAIR DO PROGRAMA              |\n");
        printf("\t\t\t\t\t\t\t   |------------------------------------------|\n");
        printf("\t\t\t\t\t\t\t        DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &op);
        system("CLS");
        if (op == 2) {
            pesquisa();
        }
        else if (op == 3) {
            opcaoAtleta();
        }
        else if (op == 4) {
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
        linha++;
        
    } while (op == 1);
}


void opcaoAtleta() {
    int Opcao;
        printf("\n\n\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n");
        printf("\t\t\t\t\t\t같같같 BEM VINDO AO SEU SISTEMA MODERADOR, AQUI VOCE TERA AUTORIDADE TOTAL!   같같\n ");
        printf("\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n\n");
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   1 - CADASTRAR ATLETAS                 |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   2 - PESQUISAR ATLETAS                 |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   3 - ALTERAR ATLETAS                   |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   4 - EXCLUIR ATLETA                    |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   5 - GERENCIADOR DE MEDALHAS           |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   6 - LISTAGEM DE TODOS OS ATLETAS      |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   7 - PONTUACAO DAS PARTIDAS            |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   8 - HORARIOS DAS PARTIDAS             |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   9 - HISTORIA DAS OLIMPIADAS           |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|   10 - SAIR                             |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &Opcao);
        system("CLS");
        if (Opcao == 1){
            system("CLS");
            cadastro();
        }
        else if (Opcao == 2) {
            system("CLS");
            pesquisa();
        }
        else if (Opcao == 3){
            system("CLS");
            alterarAtleta();
        }
        else if (Opcao == 4){
            system("CLS");
            removerAtleta();
        }
        else if (Opcao == 5){
            system("CLS");
            medalha();
        }
        else if (Opcao == 6){
            system("CLS");
            lista();
        }
        else if (Opcao == 7){
            system("CLS");
            resultadoFinal();
        }
        else if(Opcao == 8){
            system("CLS");
            horarios();
        }
        else if (Opcao == 9) {
            system("CLS");
            introducao();
        }
        else if (Opcao == 10) {
            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
        }
        
}

void telaPerfil1() {       

    printf("\n\n\t\t\t\t\t\t\t\t********************************************\n");
    printf("\t\t\t\t\t\t\t\t****** BEM VINDO A TELA DO MODERADOR! ******\n ");
    printf("\t\t\t\t\t\t\t\t********************************************\n\n");
    printf("\t\t\t\t\t\t\t        POR FAVOR INSIRA AS INFORMACOES PARA CONTINUAR\n\n\n");
    char login[8];
    char senha[8];
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
    opcaoAtleta();
}

