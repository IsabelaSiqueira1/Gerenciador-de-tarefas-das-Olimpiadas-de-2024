#include <stdio.h>
#include "Telas.h"
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include <Windows.h>

void TelaInicial()
{
    printf("\n\t\t\t  CARO USUARIO, PARA MELHOR EXPERIENCIA, MAXIMIZE A JANELA DO SEU TERMINAL.");
    printf("\n\t\t\t 같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�");
    Sleep(3000);
    printf("\n\t\t\t\t\tRedirecionando para tela inicial");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    system("CLS");
    
    void TelaInicio(); {

        printf("\n");
        printf("\t\t\t\t\t\t\t******************************************************\n");
        printf("\t\t\t\t\t\t\t****     SEJA BEM VINDO AS OLIMPIADAS 2024        ****\n ");
        printf("\t\t\t\t\t\t\t******************************************************\n\n");

        printf("\t\t\t\t\t\t\t\t**************************************\n");
        printf("\t\t\t\t\t\t\t\t      Politica de Privacidade \n ");
        printf("\t\t\t\t\t\t\t\t**************************************\n");
        printf("\n\t\t\t\t\tA sua privacidade e importante para nos :\n\t\t\t\t\tA politica do Gerenciador das Olimpiadas Paris 2024 respeitar a sua privacidade em relacao a\n\t\t\t\t\tqualquer informacao sua que possamos coletar neste aplicativo, e outros sites que possuimos e\n\t\t\t\t\toperamos.\n\n\t\t\t\t\tSolicitamos informacoes pessoais apenas quando realmente precisamos delas para lhe\n\t\t\t\t\tfornecer um servico, que e prestado sempre por meios justos e legais, com o seu conhecimento\n\t\t\t\t\te consentimento.\n\n\t\t\t\t\tTambem informamos o motivo de estarmos coletando seus dados e como estes serao usados.\n\t\t\t\t\tApenas retemos as informacoes coletadas pelo tempo necessario para fornecer o servico solicitado.\n\t\t\t\t\tQuando armazenamos dados,protegemos dentro de meios comercialmente aceitaveis para evitar\n\t\t\t\t\tperdas e roubos, bem como acesso, divulgacao, copia, uso ou modificacao nao autorizados.\n");
    }
    int opcao = 0;
    void MostrarMenu(); {                         
        int opcao = 0;
        printf("\n\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|  1 - EU LI E CONCORDO COM OS TERMOS     |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|  2 - EU LI E NAO CONCORDO COM OS TERMOS |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t|  3 - SAIR DO SISTEMA                    |\n");
        printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
        printf("\t\t\t\t\t\t\t\t    DIGITE A OPCAO DESEJADA: ");
        scanf("%d", &opcao);
        
        printf("\n\n\t\t\t\t\t\t\t\t    CARREGANDO, POR FAVOR AGUARDE");
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
        
        getchar();

        system("CLS");

        switch (opcao) {

        case 1:
            TelaLogin();

            break;

        case 2:
            if (opcao = 2) {
                printf("\n\n\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n");
                printf("\t\t\t\t\t\t\t     Para continuar o programa, e necessario aceitar os termos\n");
                printf("\t\t\t\t\t\t\t같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\n");
                MostrarMenu();  
            }  
           
            break;

        case 3:
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            exit;
            break;
        default:
            printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t             Opcao Invalida!\n");
            printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
            MostrarMenu();
            break;
        }

        getchar();

        return 0;
    }
}

void MostrarMenu() {

    int opcao = 0;
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   1 - EU LI E CONCORDO COM OS TERMOS    |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|   2 - SAIR DO SISTEMA                   |\n");
    printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t   DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();
    system("CLS");



    switch (opcao) {

    case 1:
        TelaLogin();
        break;

    case 2:
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
        break;
    default:
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t             Opcao Invalida!\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        MostrarMenu();
        break;
    }

    getchar();

    return 0;
}
   




