#include "Fase3.h"
#include "Typedef.h"

void voltar_pos_inicial_peca1_fase3(q1 matriz1[], int p) {

	if (p == 0) {

		matriz1[0].pos_x_inicial = 600;
		matriz1[0].pos_y_inicial = 400;
		matriz1[0].pos_x_final = 640;
		matriz1[0].pos_y_final = 440;
		matriz1[1].pos_x_inicial = 560;
		matriz1[1].pos_y_inicial = 440;
		matriz1[1].pos_x_final = 600;
		matriz1[1].pos_y_final = 480;
		matriz1[2].pos_x_inicial = 520;
		matriz1[2].pos_y_inicial = 480;
		matriz1[2].pos_x_final = 560;
		matriz1[2].pos_y_final = 520;
	}
	else {

		matriz1[0].pos_x_inicial = 600;
		matriz1[0].pos_y_inicial = 400;
		matriz1[0].pos_x_final = 640;
		matriz1[0].pos_y_final = 440;
		matriz1[1].pos_x_inicial = 640;
		matriz1[1].pos_y_inicial = 440;
		matriz1[1].pos_x_final = 680;
		matriz1[1].pos_y_final = 480;
		matriz1[2].pos_x_inicial = 680;
		matriz1[2].pos_y_inicial = 480;
		matriz1[2].pos_x_final = 720;
		matriz1[2].pos_y_final = 520;
	
	}
}


int verificar_se_posicao_ok_fase3_peca1(MATRIZ_ORIGINAL matriz[][5], q1 matriz1[]) {
	if (matriz1[0].pos_x_inicial >= matriz[1][1].pos_x_inicial - xy_fase3 && matriz1[0].pos_y_inicial >= matriz[1][1].pos_y_inicial - xy_fase3 && matriz1[0].pos_x_final <= matriz[1][1].pos_x_final + xy_fase3 && matriz1[0].pos_y_final <= matriz[1][1].pos_y_final + xy_fase3
		&& matriz1[1].pos_x_inicial >= matriz[2][2].pos_x_inicial - xy_fase3 && matriz1[1].pos_y_inicial >= matriz[2][2].pos_y_inicial - xy_fase3 && matriz1[1].pos_x_final <= matriz[2][2].pos_x_final + xy_fase3 && matriz1[1].pos_y_final <= matriz[2][2].pos_y_final + xy_fase3
		&& matriz1[2].pos_x_inicial >= matriz[3][3].pos_x_inicial - xy_fase3 && matriz1[2].pos_y_inicial >= matriz[3][3].pos_y_inicial - xy_fase3 && matriz1[2].pos_x_final <= matriz[3][3].pos_x_final + xy_fase3 && matriz1[2].pos_y_final <= matriz[3][3].pos_y_final + xy_fase3) {
		return 1;
	}
	else {
		return -1;
	}

}


void posicoes_fase3_matriz(MATRIZ_ORIGINAL matriz[][5]){
	int i;
	int j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			matriz[i][j].pos_x_inicial = 100 + (40 * i);
			matriz[i][j].pos_y_inicial = 100 + (40 * j);
			matriz[i][j].pos_x_final = 100 + (40 * i) + 40;
			matriz[i][j].pos_y_final = 100 + (40 * j) + 40;
			if ((i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3)) {
				matriz[i][j].quadrado = load_bitmap("quadradoMatriz2.bmp", NULL);
			}
			else {
				matriz[i][j].quadrado = load_bitmap("quadradoMatriz.bmp", NULL);
			}
		}
	}
}

void posicoes_fase3_peca1(POSICOES pos[]) {


	pos[0].matriz1[0].pos_x_inicial = 600;
	pos[0].matriz1[0].pos_y_inicial = 400;
	pos[0].matriz1[0].pos_x_final = 640;
	pos[0].matriz1[0].pos_y_final = 440;
	pos[0].matriz1[0].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[0].matriz1[1].pos_x_inicial = 560;
	pos[0].matriz1[1].pos_y_inicial = 440;
	pos[0].matriz1[1].pos_x_final = 600;
	pos[0].matriz1[1].pos_y_final = 480;
	pos[0].matriz1[1].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[0].matriz1[2].pos_x_inicial = 520;
	pos[0].matriz1[2].pos_y_inicial = 480;
	pos[0].matriz1[2].pos_x_final = 560;
	pos[0].matriz1[2].pos_y_final = 520;
	pos[0].matriz1[2].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);

	pos[1].matriz1[0].pos_x_inicial = 600;
	pos[1].matriz1[0].pos_y_inicial = 400;
	pos[1].matriz1[0].pos_x_final = 640;
	pos[1].matriz1[0].pos_y_final = 440;
	pos[1].matriz1[0].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[1].matriz1[1].pos_x_inicial = 640;
	pos[1].matriz1[1].pos_y_inicial = 440;
	pos[1].matriz1[1].pos_x_final = 680;
	pos[1].matriz1[1].pos_y_final = 480;
	pos[1].matriz1[1].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[1].matriz1[2].pos_x_inicial = 680;
	pos[1].matriz1[2].pos_y_inicial = 480;
	pos[1].matriz1[2].pos_x_final = 720;
	pos[1].matriz1[2].pos_y_final = 520;
	pos[1].matriz1[2].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);

}



void funcao_tela_fase_3(int *screen_state, int *fase) {
	//VARIAVEIS

	POSICOES pos[2];
	MATRIZ_ORIGINAL matriz[5][5];

	BITMAP *buffer;
	BITMAP *mouse;

	SAMPLE *respostaCerta;
	SAMPLE *respostaErrada;


	int i;
	int j;
	int click;
	int ok;
	int p;
	int q;
	int primeira_vez_peca2;
	int enter;
	int x;
	int y;
	int aux_x;
	int aux_y;
	float tempo;

	click = 0;
	ok = 0;
	p = 0;
	q = 0;
	primeira_vez_peca2 = 0;
	enter = 0;
	x = 0;
	y = 0;
	aux_x = 0;
	aux_y = 0;
	tempo = 0.05;

	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	mouse = load_bitmap("ponteiroMouse.bmp", NULL);

	respostaCerta = load_sample("RespostaCerta.wav");
	respostaErrada = load_sample("RespostaErrada.wav");

	posicoes_fase3_matriz(matriz);
	posicoes_fase3_peca1(pos);


	while (*screen_state == TELA_FASE_3) {
		if (enter == 0) {
			while (!key[KEY_ENTER]) {
				for (i = 0; i < 5; i++) {
					for (j = 0; j < 5; j++) {
						draw_sprite(buffer, matriz[i][j].quadrado, matriz[i][j].pos_x_inicial, matriz[i][j].pos_y_inicial);
					}
				}
				if (primeira_vez_peca2 == 0) {
					draw_sprite(buffer, pos[0].matriz1[0].quadrado, pos[0].matriz1[0].pos_x_inicial, pos[0].matriz1[0].pos_y_inicial);
					draw_sprite(buffer, pos[0].matriz1[1].quadrado, pos[0].matriz1[1].pos_x_inicial, pos[0].matriz1[1].pos_y_inicial);
					draw_sprite(buffer, pos[0].matriz1[2].quadrado, pos[0].matriz1[2].pos_x_inicial, pos[0].matriz1[2].pos_y_inicial);
					draw_sprite(screen, buffer, 0, 0);
					clear(buffer);
				}
				if (key[KEY_RIGHT]) {
					primeira_vez_peca2 = 1;
					draw_sprite(buffer, pos[0].matriz1[0].quadrado, pos[0].matriz1[0].pos_x_inicial, pos[0].matriz1[0].pos_y_inicial);
					draw_sprite(buffer, pos[0].matriz1[1].quadrado, pos[0].matriz1[1].pos_x_inicial, pos[0].matriz1[1].pos_y_inicial);
					draw_sprite(buffer, pos[0].matriz1[2].quadrado, pos[0].matriz1[2].pos_x_inicial, pos[0].matriz1[2].pos_y_inicial);
					p = 0;
					draw_sprite(screen, buffer, 0, 0);
					clear(buffer);
				}
				if (key[KEY_LEFT]) {
					primeira_vez_peca2 = 1;
					draw_sprite(buffer, pos[1].matriz1[0].quadrado, pos[1].matriz1[0].pos_x_inicial, pos[1].matriz1[0].pos_y_inicial);
					draw_sprite(buffer, pos[1].matriz1[1].quadrado, pos[1].matriz1[1].pos_x_inicial, pos[1].matriz1[1].pos_y_inicial);
					draw_sprite(buffer, pos[1].matriz1[2].quadrado, pos[1].matriz1[2].pos_x_inicial, pos[1].matriz1[2].pos_y_inicial);
					p = 1;
					draw_sprite(screen, buffer, 0, 0);
					clear(buffer);
				}
				if (key[KEY_ENTER]) {
					enter = 1;
				}

			}
		}
		if (enter == 1) {
			tempo += aceleracao;
			if (tempo >= 1.00) {
				tempo = 0;
				if (aux_x == 0 && aux_y == 0) {
					x++;
					if (x >= 150) {
						aux_x = 1;
					}
					for (i = 0; i < 5; i++) {
						for (j = 0; j < 5; j++) {
							matriz[i][j].pos_x_inicial += 1;
							matriz[i][j].pos_x_final = matriz[i][j].pos_x_inicial + 40;
						}
					}
				}
				else if (aux_x == 1 && aux_y == 0) {
					y++;
					if (y >= 150) {
						aux_y = 1;
					}
					for (i = 0; i < 5; i++) {
						for (j = 0; j < 5; j++) {
							matriz[i][j].pos_y_inicial += 1;
							matriz[i][j].pos_y_final = matriz[i][j].pos_y_inicial + 40;
						}
					}
				}
				else if (aux_x == 1 && aux_y == 1) {
					x--;
					if (x <= 0) {
						aux_x = 0;
					}
					for (i = 0; i < 5; i++) {
						for (j = 0; j < 5; j++) {
							matriz[i][j].pos_x_inicial -= 1;
							matriz[i][j].pos_x_final = matriz[i][j].pos_x_inicial + 40;
						}
					}
				}
				else {
					y--;
					if (y <= 0) {
						aux_y = 0;
					}
					for (i = 0; i < 5; i++) {
						for (j = 0; j < 5; j++) {
							matriz[i][j].pos_y_inicial -= 1;
							matriz[i][j].pos_y_final = matriz[i][j].pos_y_inicial + 40;
						}
					}
				}
			}
		}
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				draw_sprite(buffer, matriz[i][j].quadrado, matriz[i][j].pos_x_inicial, matriz[i][j].pos_y_inicial);
			}
		}
		if (mouse_b == 1) {
			if ((mouse_x >= 600 && mouse_x <= 640 && mouse_y >= 400 && mouse_y <= 440) || (mouse_x >= 560 && mouse_x <= 600 && mouse_y >= 440 && mouse_y <= 480) || (mouse_x >= 520 && mouse_x <= 560 && mouse_y >= 480 && mouse_y <= 520)
				|| (mouse_x >= 600 && mouse_x <= 640 && mouse_y >= 400 && mouse_y <= 440) || (mouse_x >= 640 && mouse_x <= 680 && mouse_y >= 440 && mouse_y <= 480) || (mouse_x >= 680 && mouse_x <= 720 && mouse_y >= 480 && mouse_y <= 520)) {
				click = 1;
			}
		}
		if (mouse_b == 2) {
			click = 0;
			ok = verificar_se_posicao_ok_fase3_peca1(matriz, pos[p].matriz1);
			if (ok == 1) {
				play_sample(respostaCerta, 255, 128, 1000, FALSE);
				if (xy_fase3 > 0) {
					xy_fase3--;
				}
				if (aceleracao <= 0.45 && xy_fase3 == 0) {
					aceleracao += 0.05;
				}
				*screen_state = TELA_ESPERA;
				*fase = TELA_VOCE_VENCEU;
			}
			else {
				play_sample(respostaErrada, 255, 128, 1000, FALSE);
				enter = 0;
				voltar_pos_inicial_peca1_fase3(pos[p].matriz1, p);

			}
		}

		if (click == 1) {
			if (p == 0) {
				pos[p].matriz1[0].pos_x_inicial = mouse_x;
				pos[p].matriz1[0].pos_y_inicial = mouse_y;
				pos[p].matriz1[0].pos_x_final = pos[p].matriz1[0].pos_x_inicial + 40;
				pos[p].matriz1[0].pos_y_final = pos[p].matriz1[0].pos_y_inicial + 40;

				pos[p].matriz1[1].pos_x_inicial = mouse_x - 40;
				pos[p].matriz1[1].pos_y_inicial = mouse_y + 40;
				pos[p].matriz1[1].pos_x_final = pos[p].matriz1[1].pos_x_inicial + 40;
				pos[p].matriz1[1].pos_y_final = pos[p].matriz1[1].pos_y_inicial + 40;

				pos[p].matriz1[2].pos_x_inicial = mouse_x - 80;
				pos[p].matriz1[2].pos_y_inicial = mouse_y + 80;
				pos[p].matriz1[2].pos_x_final = pos[p].matriz1[2].pos_x_inicial + 40;
				pos[p].matriz1[2].pos_y_final = pos[p].matriz1[2].pos_y_inicial + 40;
			}
			else {
				pos[p].matriz1[0].pos_x_inicial = mouse_x;
				pos[p].matriz1[0].pos_y_inicial = mouse_y;
				pos[p].matriz1[0].pos_x_final = pos[p].matriz1[0].pos_x_inicial + 40;
				pos[p].matriz1[0].pos_y_final = pos[p].matriz1[0].pos_y_inicial + 40;

				pos[p].matriz1[1].pos_x_inicial = mouse_x + 40;
				pos[p].matriz1[1].pos_y_inicial = mouse_y + 40;
				pos[p].matriz1[1].pos_x_final = pos[p].matriz1[1].pos_x_inicial + 40;
				pos[p].matriz1[1].pos_y_final = pos[p].matriz1[1].pos_y_inicial + 40;

				pos[p].matriz1[2].pos_x_inicial = mouse_x + 80;
				pos[p].matriz1[2].pos_y_inicial = mouse_y + 80;
				pos[p].matriz1[2].pos_x_final = pos[p].matriz1[2].pos_x_inicial + 40;
				pos[p].matriz1[2].pos_y_final = pos[p].matriz1[2].pos_y_inicial + 40;

			}
		}
		if (p == 0) {
			draw_sprite(buffer, pos[0].matriz1[0].quadrado, pos[0].matriz1[0].pos_x_inicial, pos[0].matriz1[0].pos_y_inicial);
			draw_sprite(buffer, pos[0].matriz1[1].quadrado, pos[0].matriz1[1].pos_x_inicial, pos[0].matriz1[1].pos_y_inicial);
			draw_sprite(buffer, pos[0].matriz1[2].quadrado, pos[0].matriz1[2].pos_x_inicial, pos[0].matriz1[2].pos_y_inicial);
		}
		if (p == 1) {
			draw_sprite(buffer, pos[1].matriz1[0].quadrado, pos[1].matriz1[0].pos_x_inicial, pos[1].matriz1[0].pos_y_inicial);
			draw_sprite(buffer, pos[1].matriz1[1].quadrado, pos[1].matriz1[1].pos_x_inicial, pos[1].matriz1[1].pos_y_inicial);
			draw_sprite(buffer, pos[1].matriz1[2].quadrado, pos[1].matriz1[2].pos_x_inicial, pos[1].matriz1[2].pos_y_inicial);
		}
		//show_mouse(buffer);
		draw_sprite(buffer, mouse, mouse_x, mouse_y);
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
		if (ok == 1) {
			rest(2000);
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			destroy_bitmap(pos[i].matriz1[j].quadrado);

		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			destroy_bitmap(matriz[i][j].quadrado);
		}
	}



	destroy_sample(respostaCerta);
	destroy_sample(respostaErrada);



	destroy_bitmap(mouse);

	destroy_bitmap(buffer);
}
