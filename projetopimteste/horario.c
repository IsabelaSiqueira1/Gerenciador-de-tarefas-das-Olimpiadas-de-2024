#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <Windows.h>
#define MAXLETRAS 100

void opcaoAtleta();
void opcoes();

typedef struct {
	char pais[MAXLETRAS];
	char* horarios[MAXLETRAS];
}Partidas;

int i, j, k;
int op;
char futebolBrasil[50] = ("26/07/2024,13h30");
char voleiBrasil[50] = ("27/07/2024,05h00");
char natacaoBrasil[50] = ("28/07/2024,15h00");
char futebolChina[50] = ("26/07/2024,15h30");
char voleiChina[50] = ("27/07/2024,07h00");
char natacaoChina[50] = ("28/07/2024,15h00");
char futebolArgentina[50] = ("26/07/2024,13h30");
char voleiArgentina[50] = ("27/07/2024,05h00");
char natacaoArgentina[50] = ("28/07/2024,15h00");
char futebolEUA[50] = ("26/07/2024,17h30");
char voleiEUA[50] = ("27/07/2024,07h00");
char natacaoEUA[50] = ("28/07/2024,15h00");
char futebolEspanha[50] = ("26/07/2024,15h30");
char voleiEspanha[50] = ("27/07/2024,07h00");
char natacaoEspanha[50] = ("28/07/2024,15h00");

void verHorarios() {
	FILE* hora;
	hora = fopen("horarios_das_partidas.txt", "r");
	Partidas lista[5] = {
		{{"\n\t\t\t\t\t°  BRASIL    "}, {futebolBrasil, voleiBrasil, natacaoBrasil} },
		{{"\t\t\t\t\t°  CHINA     "}, {futebolChina, voleiChina, natacaoChina} },
		{{"\t\t\t\t\t°  ARGENTINA "}, {futebolArgentina, voleiArgentina, natacaoArgentina} },
		{{"\t\t\t\t\t°  EUA       "}, {futebolEUA, voleiEUA, natacaoEUA} },
		{{"\t\t\t\t\t°  ESPANHA   "}, {futebolEspanha, voleiEspanha, natacaoEspanha} },
	};
	printf("\n\n\t\t\t\t\t\t     *************************************************************\n");
	printf("\t\t\t\t\t\t\t****************  PROXIMAS PARTIDAS  ******************\n");
	printf("\t\t\t\t\t\t     *************************************************************\n\n\n");
	printf("\t\t\t\t\t\t%s%8s%8s%8s", "\t\tFutebol", "\t\tVolei", "\t\t  Natacao\n");
	for (i = 0; i < 5; i++) {
		printf("%s", lista[i].pais);
		for (j = 0; j < 3; j++) {
			printf("\t%8s", lista[i].horarios[j]);
		}
		printf("\n");
	}
	printf("\n\n\t\t\t\t        °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   1 - PARA VOLTAR AO MENU PRINCIPAL                |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   2 - PARA SAIR                                    |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t       DIGITE A OPCAO DESEJADA: ");
	scanf("%d", &op);
	if (op == 1) {
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

void horarios() {
	FILE* hora;
	int op;
	hora = fopen("horarios_das_partidas.txt", "a");
	printf("\n\n\t\t\t\t\t\t\t\t     *****************************\n");
	printf("\t\t\t\t\t\t\t\t        ******  HORARIOS  ******\n ");
	printf("\t\t\t\t\t\t\t\t     *****************************\n\n\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   1 - ATUALIZAR O HORARIO DA PARTIDA DO BRASIL     |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   2 - ATUALIZAR O HORARIO DA PARTIDA DO CHINA      |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   3 - ATUALIZAR O HORARIO DA PARTIDA DO ARGENTINA  |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   4 - ATUALIZAR O HORARIO DA PARTIDA DO EUA        |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   5 - ATUALIZAR O HORARIO DA PARTIDA DO ESPANHA    |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   6 - VOLTAR AO MENU PRNCIPAL                      |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   7 - SAIR                                         |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t       DIGITE A OPCAO DESEJADA: ");
	scanf("%d", &op);
	printf("\n\n\t\t\t\t           °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	if (op == 1) {
		void Brasil(); {
			printf("\n\n\t\t\t\t\t   ********  PARA PREENCHER AS INFORMACOES, SEGUIR O PADRAO ' DD/MM/AAAA,HHhMM,'!  *******\n");
			printf("\t\t\t\t\t   ***************************************************************************************");
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO  DA PARTIDA DO FUTEBOL DO TIME BRASIL: ");
			scanf("%s", &futebolBrasil);
			fprintf(hora, "%s\n", futebolBrasil);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO VOLEI DO TIME BRASIL: ");
			scanf("%s", &voleiBrasil);
			fprintf(hora, "%s\n", voleiBrasil);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA COMPETICAO DE NATACAO DO TIME BRASIL: ");
			scanf("%s", &natacaoBrasil);
			fprintf(hora, "%s\n", natacaoBrasil);

			printf("\n\n\t\t\t\t\t\t\t    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
			printf("\n\n\t\t\t\t\t\t\t      SALVANDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
			printf("\n\n\t\t\t\t\t\t\t\t\t   -------------------------\n");
			printf("\t\t\t\t\t\t\t\t\t       SALVO COM SUCESSO\n");
			printf("\t\t\t\t\t\t\t\t\t   -------------------------\n\n\n");
			Sleep(700);
		}
	}

	else if (op == 2) {
		void China(); {
			printf("\n\n\t\t\t\t\t   ********  PARA PREENCHER AS INFORMACOES, SEGUIR O PADRAO ' DD/MM/AAAA,HHhMM,'!  *******\n");
			printf("\t\t\t\t\t   ***************************************************************************************");
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO FUTEBOL DO TIME CHINA: ");
			scanf("%s", &futebolChina);
			fprintf(hora, "%s\n", futebolChina);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO VOLEI DO TIME CHINA: ");
			scanf("%s", &voleiChina);
			fprintf(hora, "%s\n", voleiChina);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA COMPETICAO DE NATACAO DO TIME CHINA: ");
			scanf("%s", &natacaoChina);
			fprintf(hora, "%s\n", natacaoChina);

			printf("\n\n\t\t\t\t\t\t\t    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
			printf("\n\n\t\t\t\t\t\t\t      SALVANDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
			printf("\n\n\t\t\t\t\t\t\t\t\t   -------------------------\n");
			printf("\t\t\t\t\t\t\t\t\t       SALVO COM SUCESSO\n");
			printf("\t\t\t\t\t\t\t\t\t   -------------------------\n\n\n");
			Sleep(700);
		}

	}
	else if (op == 3) {
		void Argentina(); {
			printf("\n\n\t\t\t\t\t   ********  PARA PREENCHER AS INFORMACOES, SEGUIR O PADRAO ' DD/MM/AAAA,HHhMM,'!  *******\n");
			printf("\t\t\t\t\t   ***************************************************************************************");
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO FUTEBOL DO TIME ARGENTINA: ");
			scanf("%s", &futebolArgentina);
			fprintf(hora, "%s\n", futebolArgentina);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO VOLEI DO TIME ARGENTINA: ");
			scanf("%s", &voleiArgentina);
			fprintf(hora, "%s\n", voleiArgentina);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA COMPETICAO DE NATACAO DO TIME ARGENTINA: ");
			scanf("%s", &natacaoArgentina);
			fprintf(hora, "%s\n", natacaoArgentina);

			printf("\n\n\t\t\t\t\t\t\t    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
			printf("\n\n\t\t\t\t\t\t\t      SALVANDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
			printf("\n\n\t\t\t\t\t\t\t\t\t   -------------------------\n");
			printf("\t\t\t\t\t\t\t\t\t       SALVO COM SUCESSO\n");
			printf("\t\t\t\t\t\t\t\t\t   -------------------------\n\n\n");
			Sleep(700);
		}
	}

	else if (op == 4) {
		int opEUA;
		void EUA(); {
			printf("\n\n\t\t\t\t\t   ********  PARA PREENCHER AS INFORMACOES, SEGUIR O PADRAO ' DD/MM/AAAA,HHhMM,'!  *******\n");
			printf("\t\t\t\t\t   ***************************************************************************************");
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO FUTEBOL DO TIME ESTADOS UNIDOS: ");
			scanf("%s", &futebolEUA);
			fprintf(hora, "%s\n", futebolEUA);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO VOLEI DO TIME ESTADOS UNIDOS: ");
			scanf("%s", &voleiEUA);
			fprintf(hora, "%s\n", voleiEUA);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA COMPETICAO DE NATACAO DO TIME ESTADOS UNIDOS: ");
			scanf("%s", &natacaoEUA);
			fprintf(hora, "%s\n", natacaoEUA);

			printf("\n\n\t\t\t\t\t\t\t    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
			printf("\n\n\t\t\t\t\t\t\t      SALVANDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
			printf("\n\n\t\t\t\t\t\t\t\t\t   -------------------------\n");
			printf("\t\t\t\t\t\t\t\t\t       SALVO COM SUCESSO\n");
			printf("\t\t\t\t\t\t\t\t\t   -------------------------\n\n\n");
			Sleep(700);

		}
	}

	else if (op == 5) {
		void Espanhol(); {
			printf("\n\n\t\t\t\t\t   ********  PARA PREENCHER AS INFORMACOES, SEGUIR O PADRAO ' DD/MM/AAAA,HHhMM,'!  *******\n");
			printf("\t\t\t\t\t   ***************************************************************************************");
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO FUTEBOL DO TIME ESPANHA: ");
			scanf("%s", &futebolEspanha);
			fprintf(hora, "%s\n", futebolEspanha);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA PARTIDA DO FUTEBOL DO TIME ESPANHA: ");
			scanf("%s", &voleiEspanha);
			fprintf(hora, "%s\n", voleiEspanha);
			printf("\n\n\t\t\t\t\t\t\t   DATA E HORARIO DA COMPETICAO DE NATACAO DO TIME ESPANHA: ");
			scanf("%s", &natacaoEspanha);
			fprintf(hora, "%s\n", natacaoEspanha);

			printf("\n\n\t\t\t\t\t\t\t    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
			printf("\n\n\t\t\t\t\t\t\t      SALVANDO AS INFORMACOES, POR FAVOR AGUARDE ");
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
			printf("\n\n\t\t\t\t\t\t\t\t\t   -------------------------\n");
			printf("\t\t\t\t\t\t\t\t\t       SALVO COM SUCESSO\n");
			printf("\t\t\t\t\t\t\t\t\t   -------------------------\n\n\n");
			Sleep(700);
		}
	}
	else {
		system("cls");
		printf("OPCAO INVALIDA!!!\n");
		horarios();
	}

	system("cls");
	Partidas lista[5] = {
		{{"\n\t\t\t\t\t°  BRASIL    "}, {futebolBrasil, voleiBrasil, natacaoBrasil} },
		{{"\t\t\t\t\t°  CHINA     "}, {futebolChina, voleiChina, natacaoChina} },
		{{"\t\t\t\t\t°  ARGENTINA "}, {futebolArgentina, voleiArgentina, natacaoArgentina} },
		{{"\t\t\t\t\t°  EUA       "}, {futebolEUA, voleiEUA, natacaoEUA} },
		{{"\t\t\t\t\t°  ESPANHA   "}, {futebolEspanha, voleiEspanha, natacaoEspanha} },
	};
	printf("\n\n\t\t\t\t\t\t     *************************************************************\n");
	printf("\t\t\t\t\t\t\t****************  PROXIMAS PARTIDAS  ******************\n");
	printf("\t\t\t\t\t\t     *************************************************************\n\n\n");
	printf("\t\t\t\t\t\t%s%8s%8s%8s", "\t\tFutebol", "\t\tVolei", "\t\tNatacao\n");

	for (i = 0; i < 5; i++) {
		printf("%s", lista[i].pais);
		for (j = 0; j < 3; j++) {
			printf("\t%8s", lista[i].horarios[j]);
		}
		printf("\n");
	}

	fclose(hora);
	printf("\n\n\t\t\t\t        °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	printf("\n\n\n\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   1 - PARA ATUALIZAR OUTRO HORARIO DE PARTIDA      |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   2 - PARA VOLTAR AO MENU PRINCIPAL                |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t   |   3 - PARA SAIR                                    |\n");
	printf("\t\t\t\t\t\t\t   |----------------------------------------------------|\n");
	printf("\t\t\t\t\t\t\t       DIGITE A OPCAO DESEJADA: ");
	scanf("%d", &op);
	if (op == 1) {
		system("CLS");
		horarios();
	}
	else if (op == 2) {
		system("CLS");
		opcaoAtleta();
	}
	else if (op >= 3) {
		system("CLS");
		printf("\n\n\t\t\t\t\t\t\t\t---------------------------------------\n");
		printf("\t\t\t\t\t\t\t\t     O Programa esta se encerrando...\n");
		printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
		exit;
	}

}