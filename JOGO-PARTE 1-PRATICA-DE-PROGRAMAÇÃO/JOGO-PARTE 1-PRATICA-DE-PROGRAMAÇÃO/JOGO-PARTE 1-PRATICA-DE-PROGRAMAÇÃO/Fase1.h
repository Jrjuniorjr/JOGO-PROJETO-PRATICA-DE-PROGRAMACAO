#pragma once

#ifndef FASE1
#define FASE1

#include<stdio.h>
#include <stdlib.h>
#include <allegro.h>
#include "Typedef.h"
#include "Inicializacao.h"

//PEÇA 1
int verificar_se_posicao_ok_fase1_peca1(q1 matriz1[]);
void posicoes_fase1_peca1(POSICOES pos[]);
void voltar_pos_inicial_peca1_fase1(q1 matriz[], int p);

//PEÇA 2

int verificar_se_posicao_ok_fase1_peca2(q1 matriz1[]);
void posicoes_fase1_peca2(POSICOES pos[]);
void voltar_pos_inicial_peca2_fase1(q1 matriz1[], int q);

//FASE 1

void funcao_tela_fase_1(int *screen_state, int *fase);

#endif
