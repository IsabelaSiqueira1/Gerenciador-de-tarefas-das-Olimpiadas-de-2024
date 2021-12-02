#include <stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include <Windows.h>

void opcaoAtleta();
void historia();

void desenvolvimentoDaHistoria() {
    int p;
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
    scanf("%d", &p);
    if (p == 1) {
        system("CLS");
        historia();
    }
    else if (p == 2) {
        system("CLS");
        opcaoAtleta();
    }
    else if (p == 3) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }

}

void introducao() {
    int op;
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
    scanf("%d", &op);

    if (op == 1) {
        system("CLS");
        desenvolvimentoDaHistoria();
    }
    else if (op == 2) {
        system("CLS");
        opcaoAtleta();
    }
    else if (op == 3) {
        system("CLS");
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }

}
void historia() {
    int opcao;
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
    scanf("%d", &opcao);
    if (opcao == 1) {
        system("CLS");
        introducao();
    }
    else if (opcao == 2) {
        system("CLS");
        opcaoAtleta();
    }
    else if (opcao == 2) {
        printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
        printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
        exit;
    }
}