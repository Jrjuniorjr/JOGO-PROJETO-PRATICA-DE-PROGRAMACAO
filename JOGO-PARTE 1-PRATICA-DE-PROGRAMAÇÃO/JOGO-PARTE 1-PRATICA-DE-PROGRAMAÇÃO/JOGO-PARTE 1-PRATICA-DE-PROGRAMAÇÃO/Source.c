#include <stdio.h>
#include <stdlib.h>
#include <allegro.h>
#include "Fase1.h"
#include "Typedef.h"
#include "Inicializacao.h"
#include "Fase2.h"
#include "Fase3.h"

//STRUCT

//VARIAVEIS



//FUNÇÕES
void funcao_tela_inicial(int *screen_state, int *fase);
void tutorial_0(int *screen_state, int *fase);
void funcao_tela_espera(int *screen_state, int *fase);
void funcao_tela_voce_venceu(int *screen_state, int *fase);
void funcao_tela_creditos(int *screen_state, int *fase);



//MAIN
void main() {
	//VARIAVEIS

	//INICIALIZAÇÃO

	init();

	//GAME LOOPING
	while (screen_state != SAIR) {
		switch (screen_state) {
		case TELA_INICIAL: funcao_tela_inicial(&screen_state, &fase);
			break;
		case TELA_CREDITOS: funcao_tela_creditos(&screen_state, &fase);
			break;
		case TELA_FASE_1: funcao_tela_fase_1(&screen_state, &fase);
			break;
		case TELA_FASE_2:
			funcao_tela_fase_2(&screen_state, &fase);
			break;
		case TELA_FASE_3:
			funcao_tela_fase_3(&screen_state, &fase);
			break;
		case TELA_ESPERA:
			funcao_tela_espera(&screen_state, &fase);
			break;
		case TUTORIAL_0:
			tutorial_0(&screen_state, &fase);
			break;
		case TELA_VOCE_VENCEU:
			funcao_tela_voce_venceu(&screen_state, &fase);
			break;
		case SAIR:
			sair();
			break;
		}

	}
}
END_OF_MAIN()

void funcao_tela_creditos(int *screen_state, int *fase) {
	BITMAP *buffer;
	BITMAP *imagem;
	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	imagem = load_bitmap("TelaCreditos.bmp", NULL);
	while (*screen_state == TELA_CREDITOS) {
		draw_sprite(buffer, imagem, 0, 0);
		if (key[KEY_ENTER]) {
			*screen_state = TELA_INICIAL;
			*fase = TELA_INICIAL;
		}
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
	}

	destroy_bitmap(imagem);
	destroy_bitmap(buffer);

}

void funcao_tela_voce_venceu(int *screen_state, int *fase) {
	BITMAP *buffer;
	BITMAP *imagem;
	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	imagem = load_bitmap("TelaVoceVenceu.bmp", NULL);

	while (*screen_state == TELA_VOCE_VENCEU) {
		draw_sprite(buffer, imagem, 0, 0);
		if (key[KEY_ENTER]) {
			*screen_state = TELA_ESPERA;
			*fase = TELA_INICIAL;
		}
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
	}

	destroy_bitmap(imagem);
	destroy_bitmap(buffer);

}

void tutorial_0(int *screen_state, int *fase) {
	BITMAP *buffer;
	BITMAP *imagem;
	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	imagem = load_bitmap("Tutorial0.bmp", NULL);
	while (*screen_state == TUTORIAL_0) {
		draw_sprite(buffer, imagem, 0, 0);
		if (key[KEY_ENTER]) {
			*screen_state = TELA_ESPERA;
			*fase = TELA_FASE_1;
		}
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
	}

	destroy_bitmap(imagem);
	destroy_bitmap(buffer);
}


void funcao_tela_espera(int *screen_state, int *fase) {
	BITMAP *vet[3];
	BITMAP *buffer;
	float tempo;
	int i;
	tempo = 0;
	i = 0;
	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	vet[0] = load_bitmap("TelaEspera1.bmp", NULL);
	vet[1] = load_bitmap("TelaEspera2.bmp", NULL);
	vet[2] = load_bitmap("TelaEspera3.bmp", NULL);
	
	while (*screen_state == TELA_ESPERA) {
		switch (i) {
		case 0:
			draw_sprite(buffer, vet[i], 0, 0);
			i++;
			break;
		case 1:
			draw_sprite(buffer, vet[i], 0, 0);
			i++;
			break;
		case 2:
			draw_sprite(buffer, vet[i], 0, 0);
			i++;
			*screen_state = *fase;
			break;
		}
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
		rest(500);
	}

	for (i = 0; i < 3; i++) {
		destroy_bitmap(vet[i]);
	}
	destroy_bitmap(buffer);
}

void funcao_tela_inicial(int *screen_state, int *fase) {
	//BITMAPS
	BITMAP *buffer;
	BITMAP *vetor_menu[3];
	SAMPLE *musica;

	//VARIAVEIS
	int i;

	i = 0;

	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	vetor_menu[0] = load_bitmap("menu1.bmp", NULL);
	vetor_menu[1] = load_bitmap("menu2.bmp", NULL);
	vetor_menu[2] = load_bitmap("menu3.bmp", NULL);
	musica = load_sample("musicaIntro.wav");

	play_sample(musica, 255, 128, 1000, TRUE);

	while (*screen_state == TELA_INICIAL) {
		if (key[KEY_DOWN]) {
			if (i == 0 || i == 1) {
				i++;
			}
		}
		if (key[KEY_UP]) {
			if (i == 1 || i == 2) {
				i--;
			}
		}
		rest(120);
		if (key[KEY_ENTER]) {
			switch (i) {
			case 0:
				stop_sample(musica);
				*screen_state = TELA_ESPERA;
				*fase = TUTORIAL_0;
				rest(500);
				break;
			case 1:
				stop_sample(musica);
				*screen_state = TELA_CREDITOS;
				rest(500);
				break;
			case 2:
				stop_sample(musica);
				*screen_state = SAIR;
				break;
			}
		}

		draw_sprite(buffer, vetor_menu[i], 0, 0);

		textprintf(buffer, font, 100, 100, makecol(255, 0, 0), "%d", i);
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
	}
	destroy_bitmap(vetor_menu[0]);
	destroy_bitmap(vetor_menu[1]);
	destroy_bitmap(vetor_menu[2]);
	destroy_sample(musica);
	destroy_bitmap(buffer);
}
