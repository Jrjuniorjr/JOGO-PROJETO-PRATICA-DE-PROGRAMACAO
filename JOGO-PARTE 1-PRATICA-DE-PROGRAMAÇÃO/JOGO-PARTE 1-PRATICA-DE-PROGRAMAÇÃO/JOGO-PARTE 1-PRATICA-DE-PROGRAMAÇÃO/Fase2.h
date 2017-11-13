#pragma once

#ifndef FASE2
#define FASE2

#include<stdio.h>
#include <stdlib.h>
#include <allegro.h>
#include "Typedef.h"
#include "Inicializacao.h"

//PEÇA 1
int verificar_se_posicao_ok_fase2_peca1_formato1(q1 matriz1[]);
int verificar_se_posicao_ok_fase2_peca1_formato2(q1 matriz1[]);
void posicoes_fase2_peca1(POSICOES pos[]);
void voltar_pos_inicial_peca1_fase2(q1 matriz[], int p);

//PEÇA 2
int verificar_se_posicao_ok_fase2_peca2_formato1(q1 matriz1[]);
int verificar_se_posicao_ok_fase2_peca2_formato2(q1 matriz1[]);
void posicoes_fase2_peca2(POSICOES pos[]);
void voltar_pos_inicial_peca2_fase2(q1 matriz1[], int q);

//FASE 2

void funcao_tela_fase_2(int *screen_state, int *fase);

#endif
