#pragma once

#ifndef FASE3
#define FASE3

#include<stdio.h>
#include <stdlib.h>
#include <allegro.h>
#include "Typedef.h"
#include "Inicializacao.h"

//PEÇA 1
int verificar_se_posicao_ok_fase3_peca1(MATRIZ_ORIGINAL matriz[][5], q1 matriz1[]);
void posicoes_fase3_peca1(POSICOES pos[]);
void voltar_pos_inicial_peca1_fase3(q1 matriz[], int p);

//MATRIZ ORIGINAL

void posicoes_fase3_matriz(MATRIZ_ORIGINAL matriz[][5]);

//FASE 3

void funcao_tela_fase_3(int *screen_state, int *fase);

#endif
