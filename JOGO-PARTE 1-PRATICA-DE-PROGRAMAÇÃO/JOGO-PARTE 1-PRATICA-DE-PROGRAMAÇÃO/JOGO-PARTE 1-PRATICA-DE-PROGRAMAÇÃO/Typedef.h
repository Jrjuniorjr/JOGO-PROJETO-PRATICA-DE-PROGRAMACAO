#pragma once
#ifndef Typedef
#define Typedef

#include <stdio.h>
#include <stdlib.h>
#include "Inicializacao.h"
#include <allegro.h>

enum { TELA_INICIAL, TELA_FASE_1, TELA_CREDITOS, SAIR, TELA_FASE_2, TELA_FASE_3, TUTORIAL_0, TELA_ESPERA, TELA_VOCE_VENCEU };
int screen_state;
int fase;
int xy_fase1;
int xy_fase2;
int xy_fase3;
float aceleracao;



typedef struct quadradoMatriz1 {
	BITMAP *quadrado;
	int pos_x_inicial;
	int pos_y_inicial;
	int pos_x_final;
	int pos_y_final;
}q1;

typedef struct pos_matriz {
	q1 matriz1[4];
}POSICOES;

typedef struct matriz_original {
	BITMAP *quadrado;
	int pos_x_inicial;
	int pos_y_inicial;
	int pos_x_final;
	int pos_y_final;
}MATRIZ_ORIGINAL;


#endif