#include "Typedef.h"
#include "Fase2.h"

void voltar_pos_inicial_peca1_fase2(q1 matriz1[], int p) {
	
	if (p == 0) {
		matriz1[0].pos_x_inicial = 600;
		matriz1[0].pos_y_inicial = 400;
		matriz1[0].pos_x_final = 640;
		matriz1[0].pos_y_final = 440;
		matriz1[1].pos_x_inicial = 640;
		matriz1[1].pos_y_inicial = 400;
		matriz1[1].pos_x_final = 680;
		matriz1[1].pos_y_final = 440;
		matriz1[2].pos_x_inicial = 640;
		matriz1[2].pos_y_inicial = 440;
		matriz1[2].pos_x_final = 680;
		matriz1[2].pos_y_final = 480;
		matriz1[3].pos_x_inicial = 640;
		matriz1[3].pos_y_inicial = 480;
		matriz1[3].pos_x_final = 680;
		matriz1[3].pos_y_final = 520;

	}
	else {

		matriz1[0].pos_x_inicial = 600;
		matriz1[0].pos_y_inicial = 400;
		matriz1[0].pos_x_final = 640;
		matriz1[0].pos_y_final = 440;
		matriz1[1].pos_x_inicial = 600;
		matriz1[1].pos_y_inicial = 440;
		matriz1[1].pos_x_final = 640;
		matriz1[1].pos_y_final = 480;
		matriz1[2].pos_x_inicial = 600;
		matriz1[2].pos_y_inicial = 480;
		matriz1[2].pos_x_final = 640;
		matriz1[2].pos_y_final = 520;
		matriz1[3].pos_x_inicial = 640;
		matriz1[3].pos_y_inicial = 480;
		matriz1[3].pos_x_final = 680;
		matriz1[3].pos_y_final = 520;
	}
}


void voltar_pos_inicial_peca2_fase2(q1 matriz1[], int q) {
	
	if (q == 0) {

		matriz1[0].pos_x_inicial = 600;
		matriz1[0].pos_y_inicial = 400;
		matriz1[0].pos_x_final = 640;
		matriz1[0].pos_y_final = 440;
		matriz1[1].pos_x_inicial = 600;
		matriz1[1].pos_y_inicial = 440;
		matriz1[1].pos_x_final = 640;
		matriz1[1].pos_y_final = 400;
		
	}
	else {
		matriz1[0].pos_x_inicial = 600;
		matriz1[0].pos_y_inicial = 400;
		matriz1[0].pos_x_final = 640;
		matriz1[0].pos_y_final = 440;
		matriz1[1].pos_x_inicial = 640;
		matriz1[1].pos_y_inicial = 400;
		matriz1[1].pos_x_final = 680;
		matriz1[1].pos_y_final = 440;
	}
}



int verificar_se_posicao_ok_fase2_peca1_formato1(q1 matriz1[]) {
	if (matriz1[0].pos_x_inicial >= 140 - xy_fase2 && matriz1[0].pos_y_inicial >= 140 - xy_fase2 && matriz1[0].pos_x_final <= 180 + xy_fase2 && matriz1[0].pos_y_final <= 180 + xy_fase2
		&& matriz1[1].pos_x_inicial >= 180 - xy_fase2 && matriz1[1].pos_y_inicial >= 140 - xy_fase2 && matriz1[1].pos_x_final <= 220 + xy_fase2 && matriz1[1].pos_y_final <= 180 + xy_fase2
		&& matriz1[2].pos_x_inicial >= 180 - xy_fase2 && matriz1[2].pos_y_inicial >= 180 - xy_fase2 && matriz1[2].pos_x_final <= 220 + xy_fase2 && matriz1[2].pos_y_final <= 220 + xy_fase2
		&& matriz1[3].pos_x_inicial >= 180 - xy_fase2 && matriz1[3].pos_y_inicial >= 220 - xy_fase2 && matriz1[3].pos_x_final <= 220 + xy_fase2 && matriz1[3].pos_y_final <= 260 + xy_fase2) {
		return 1;
	}
	else {
		return -1;
	}

}


int verificar_se_posicao_ok_fase2_peca1_formato2(q1 matriz1[]) {
	if (matriz1[0].pos_x_inicial >= 140 - xy_fase2 && matriz1[0].pos_y_inicial >= 140 - xy_fase2 && matriz1[0].pos_x_final <= 180 + xy_fase2 && matriz1[0].pos_y_final <= 180 + xy_fase2
		&& matriz1[1].pos_x_inicial >= 140 - xy_fase2 && matriz1[1].pos_y_inicial >= 180 - xy_fase2 && matriz1[1].pos_x_final <= 180 + xy_fase2 && matriz1[1].pos_y_final <= 220 + xy_fase2
		&& matriz1[2].pos_x_inicial >= 140 - xy_fase2 && matriz1[2].pos_y_inicial >= 220 - xy_fase2 && matriz1[2].pos_x_final <= 180 + xy_fase2 && matriz1[2].pos_y_final <= 260 + xy_fase2
		&& matriz1[3].pos_x_inicial >= 180 - xy_fase2 && matriz1[3].pos_y_inicial >= 220 - xy_fase2 && matriz1[3].pos_x_final <= 220 + xy_fase2 && matriz1[3].pos_y_final <= 260 + xy_fase2) {
		return 2;
	}
	else {
		return -2;
	}
}


int verificar_se_posicao_ok_fase2_peca2_formato1(q1 matriz1[]) {
	if (matriz1[0].pos_x_inicial >= 140 - xy_fase2 && matriz1[0].pos_y_inicial >= 180 - xy_fase2 && matriz1[0].pos_x_final <= 180 + xy_fase2 && matriz1[0].pos_y_final <= 220 + xy_fase2
		&& matriz1[1].pos_x_inicial >= 140 - xy_fase2 && matriz1[1].pos_y_inicial >= 220 - xy_fase2 && matriz1[1].pos_x_final <= 180 + xy_fase2 && matriz1[1].pos_y_final <= 260 + xy_fase2) {
		return 3;
	}
	else {
		return -3;
	}

}


int verificar_se_posicao_ok_fase2_peca2_formato2(q1 matriz1[]) {
	if (matriz1[0].pos_x_inicial >= 180 - xy_fase2 && matriz1[0].pos_y_inicial >= 140 - xy_fase2 && matriz1[0].pos_x_final <= 220 + xy_fase2 && matriz1[0].pos_y_final <= 180 + xy_fase2
		&& matriz1[1].pos_x_inicial >= 180 - xy_fase2 && matriz1[1].pos_y_inicial >= 180 - xy_fase2 && matriz1[1].pos_x_final <= 220 + xy_fase2 && matriz1[1].pos_y_final <= 220 + xy_fase2) {
		return 4;
	}
	return -4;
}

void posicoes_fase2_peca1(POSICOES pos[]) {
	pos[0].matriz1[0].pos_x_inicial = 600;
	pos[0].matriz1[0].pos_y_inicial = 400;
	pos[0].matriz1[0].pos_x_final = 640;
	pos[0].matriz1[0].pos_y_final = 440;
	pos[0].matriz1[0].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[0].matriz1[1].pos_x_inicial = 640;
	pos[0].matriz1[1].pos_y_inicial = 400;
	pos[0].matriz1[1].pos_x_final = 680;
	pos[0].matriz1[1].pos_y_final = 440;
	pos[0].matriz1[1].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[0].matriz1[2].pos_x_inicial = 640;
	pos[0].matriz1[2].pos_y_inicial = 440;
	pos[0].matriz1[2].pos_x_final = 680;
	pos[0].matriz1[2].pos_y_final = 480;
	pos[0].matriz1[2].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[0].matriz1[3].pos_x_inicial = 640;
	pos[0].matriz1[3].pos_y_inicial = 480;
	pos[0].matriz1[3].pos_x_final = 680;
	pos[0].matriz1[3].pos_y_final = 520;
	pos[0].matriz1[3].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);


	pos[1].matriz1[0].pos_x_inicial = 600;
	pos[1].matriz1[0].pos_y_inicial = 400;
	pos[1].matriz1[0].pos_x_final = 640;
	pos[1].matriz1[0].pos_y_final = 440;
	pos[1].matriz1[0].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[1].matriz1[1].pos_x_inicial = 600;
	pos[1].matriz1[1].pos_y_inicial = 440;
	pos[1].matriz1[1].pos_x_final = 640;
	pos[1].matriz1[1].pos_y_final = 480;
	pos[1].matriz1[1].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[1].matriz1[2].pos_x_inicial = 600;
	pos[1].matriz1[2].pos_y_inicial = 480;
	pos[1].matriz1[2].pos_x_final = 640;
	pos[1].matriz1[2].pos_y_final = 520;
	pos[1].matriz1[2].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[1].matriz1[3].pos_x_inicial = 640;
	pos[1].matriz1[3].pos_y_inicial = 480;
	pos[1].matriz1[3].pos_x_final = 680;
	pos[1].matriz1[3].pos_y_final = 520;
	pos[1].matriz1[3].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);

}

void posicoes_fase2_peca2(POSICOES pos[]) {
	pos[0].matriz1[0].pos_x_inicial = 600;
	pos[0].matriz1[0].pos_y_inicial = 400;
	pos[0].matriz1[0].pos_x_final = 640;
	pos[0].matriz1[0].pos_y_final = 440;
	pos[0].matriz1[0].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[0].matriz1[1].pos_x_inicial = 600;
	pos[0].matriz1[1].pos_y_inicial = 440;
	pos[0].matriz1[1].pos_x_final = 640;
	pos[0].matriz1[1].pos_y_final = 400;
	pos[0].matriz1[1].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	


	pos[1].matriz1[0].pos_x_inicial = 600;
	pos[1].matriz1[0].pos_y_inicial = 400;
	pos[1].matriz1[0].pos_x_final = 640;
	pos[1].matriz1[0].pos_y_final = 440;
	pos[1].matriz1[0].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	pos[1].matriz1[1].pos_x_inicial = 640;
	pos[1].matriz1[1].pos_y_inicial = 400;
	pos[1].matriz1[1].pos_x_final = 680;
	pos[1].matriz1[1].pos_y_final = 440;
	pos[1].matriz1[1].quadrado = load_bitmap("quadradoMatriz1.bmp", NULL);
	
}



void funcao_tela_fase_2(int *screen_state, int *fase) {
	//VARIAVEIS

	POSICOES pos[2];
	POSICOES pos1[2];


	BITMAP *buffer;
	BITMAP *quadradoMatriz;
	BITMAP *quadradoLugarColocarPeca;
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
	int enter1;
	int enter;
	int click1;

	click = 0;
	ok = 0;
	p = 0;
	q = 0;
	primeira_vez_peca2 = 0;
	enter1 = 0;
	enter = 0;
	click1 = 0;

	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	quadradoMatriz = load_bitmap("quadradoMatriz.bmp", NULL);
	quadradoLugarColocarPeca = load_bitmap("quadradoMatriz2.bmp", NULL);
	mouse = load_bitmap("ponteiroMouse.bmp", NULL);

	respostaCerta = load_sample("RespostaCerta.wav");
	respostaErrada = load_sample("RespostaErrada.wav");
	
	posicoes_fase2_peca1(pos);
	posicoes_fase2_peca2(pos1);


	while (*screen_state == TELA_FASE_2) {
		if (ok == -1 || ok == 0 || ok == -2) {
			if (enter == 0) {
				while (!key[KEY_ENTER]) {
					for (i = 1; i <= 5; i++) {
						for (j = 1; j <= 5; j++) {
							if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3)) {
								draw_sprite(buffer, quadradoLugarColocarPeca, 100 + (40 * i), 100 + (40 * j));
							}
							else {
								draw_sprite(buffer, quadradoMatriz, 100 + (40 * i), 100 + (40 * j));
							}
						}
					}
					if (primeira_vez_peca2 == 0) {
						draw_sprite(buffer, pos[0].matriz1[0].quadrado, pos[0].matriz1[0].pos_x_inicial, pos[0].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos[0].matriz1[1].quadrado, pos[0].matriz1[1].pos_x_inicial, pos[0].matriz1[1].pos_y_inicial);
						draw_sprite(buffer, pos[0].matriz1[2].quadrado, pos[0].matriz1[2].pos_x_inicial, pos[0].matriz1[2].pos_y_inicial);
						draw_sprite(buffer, pos[0].matriz1[3].quadrado, pos[0].matriz1[3].pos_x_inicial, pos[0].matriz1[3].pos_y_inicial);
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_RIGHT]) {
						primeira_vez_peca2 = 1;
						draw_sprite(buffer, pos[0].matriz1[0].quadrado, pos[0].matriz1[0].pos_x_inicial, pos[0].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos[0].matriz1[1].quadrado, pos[0].matriz1[1].pos_x_inicial, pos[0].matriz1[1].pos_y_inicial);
						draw_sprite(buffer, pos[0].matriz1[2].quadrado, pos[0].matriz1[2].pos_x_inicial, pos[0].matriz1[2].pos_y_inicial);
						draw_sprite(buffer, pos[0].matriz1[3].quadrado, pos[0].matriz1[3].pos_x_inicial, pos[0].matriz1[3].pos_y_inicial);
						p = 0;
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_LEFT]) {
						primeira_vez_peca2 = 1;
						draw_sprite(buffer, pos[1].matriz1[0].quadrado, pos[1].matriz1[0].pos_x_inicial, pos[1].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos[1].matriz1[1].quadrado, pos[1].matriz1[1].pos_x_inicial, pos[1].matriz1[1].pos_y_inicial);
						draw_sprite(buffer, pos[1].matriz1[2].quadrado, pos[1].matriz1[2].pos_x_inicial, pos[1].matriz1[2].pos_y_inicial);
						draw_sprite(buffer, pos[1].matriz1[3].quadrado, pos[1].matriz1[3].pos_x_inicial, pos[1].matriz1[3].pos_y_inicial);
						p = 1;
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_ENTER]) {
						enter = 1;
					}
				}
			}
			
			for (i = 1; i <= 5; i++) {
				for (j = 1; j <= 5; j++) {
					if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3)) {
						draw_sprite(buffer, quadradoLugarColocarPeca, 100 + (40 * i), 100 + (40 * j));
					}
					else {
						draw_sprite(buffer, quadradoMatriz, 100 + (40 * i), 100 + (40 * j));
					}
				}
			}

			if (mouse_b == 1) {
				if (mouse_x >= 600 && mouse_x <= 680 && mouse_y >= 400 && mouse_y <= 520) {
					click = 1;
				}
			}
			if (mouse_b == 2) {
				click = 0;

				ok = verificar_se_posicao_ok_fase2_peca1_formato1(pos[p].matriz1);
				if (ok == 1) {
					play_sample(respostaCerta, 255, 128, 1000, FALSE);
					primeira_vez_peca2 = 0;
				}
				else {

					ok = verificar_se_posicao_ok_fase2_peca1_formato2(pos[p].matriz1);
					if (ok == 2) {
						primeira_vez_peca2 = 0;
						play_sample(respostaCerta, 255, 128, 1000, FALSE);
					}
					else {
						play_sample(respostaErrada, 255, 128, 1000, FALSE);
						enter = 0;
						voltar_pos_inicial_peca1_fase2(pos[p].matriz1, p);
					}
				}
			}

			if (click == 1) {
				if (p == 0) {
					pos[p].matriz1[0].pos_x_inicial = mouse_x;
					pos[p].matriz1[0].pos_y_inicial = mouse_y;
					pos[p].matriz1[0].pos_x_final = pos[p].matriz1[0].pos_x_inicial + 40;
					pos[p].matriz1[0].pos_y_final = pos[p].matriz1[0].pos_y_inicial + 40;

					pos[p].matriz1[1].pos_x_inicial = mouse_x + 40;
					pos[p].matriz1[1].pos_y_inicial = mouse_y;
					pos[p].matriz1[1].pos_x_final = pos[p].matriz1[1].pos_x_inicial + 40;
					pos[p].matriz1[1].pos_y_final = pos[p].matriz1[1].pos_y_inicial + 40;

					pos[p].matriz1[2].pos_x_inicial = mouse_x + 40;
					pos[p].matriz1[2].pos_y_inicial = mouse_y + 40;
					pos[p].matriz1[2].pos_x_final = pos[p].matriz1[2].pos_x_inicial + 40;
					pos[p].matriz1[2].pos_y_final = pos[p].matriz1[2].pos_y_inicial + 40;

					pos[p].matriz1[3].pos_x_inicial = mouse_x + 40;
					pos[p].matriz1[3].pos_y_inicial = mouse_y + 80;
					pos[p].matriz1[3].pos_x_final = pos[p].matriz1[3].pos_x_inicial + 40;
					pos[p].matriz1[3].pos_y_final = pos[p].matriz1[3].pos_y_inicial + 40;

				}
				else {
					pos[p].matriz1[0].pos_x_inicial = mouse_x;
					pos[p].matriz1[0].pos_y_inicial = mouse_y;
					pos[p].matriz1[0].pos_x_final = pos[p].matriz1[0].pos_x_inicial + 40;
					pos[p].matriz1[0].pos_y_final = pos[p].matriz1[0].pos_y_inicial + 40;

					pos[p].matriz1[1].pos_x_inicial = mouse_x;
					pos[p].matriz1[1].pos_y_inicial = mouse_y + 40;
					pos[p].matriz1[1].pos_x_final = pos[p].matriz1[1].pos_x_inicial + 40;
					pos[p].matriz1[1].pos_y_final = pos[p].matriz1[1].pos_y_inicial + 40;

					pos[p].matriz1[2].pos_x_inicial = mouse_x;
					pos[p].matriz1[2].pos_y_inicial = mouse_y + 80;
					pos[p].matriz1[2].pos_x_final = pos[p].matriz1[2].pos_x_inicial + 40;
					pos[p].matriz1[2].pos_y_final = pos[p].matriz1[2].pos_y_inicial + 40;

					pos[p].matriz1[3].pos_x_inicial = mouse_x + 40;
					pos[p].matriz1[3].pos_y_inicial = mouse_y + 80;
					pos[p].matriz1[3].pos_x_final = pos[p].matriz1[3].pos_x_inicial + 40;
					pos[p].matriz1[3].pos_y_final = pos[p].matriz1[3].pos_y_inicial + 40;
				}
			}
			if (p == 0) {
				draw_sprite(buffer, pos[0].matriz1[0].quadrado, pos[0].matriz1[0].pos_x_inicial, pos[0].matriz1[0].pos_y_inicial);
				draw_sprite(buffer, pos[0].matriz1[1].quadrado, pos[0].matriz1[1].pos_x_inicial, pos[0].matriz1[1].pos_y_inicial);
				draw_sprite(buffer, pos[0].matriz1[2].quadrado, pos[0].matriz1[2].pos_x_inicial, pos[0].matriz1[2].pos_y_inicial);
				draw_sprite(buffer, pos[0].matriz1[3].quadrado, pos[0].matriz1[3].pos_x_inicial, pos[0].matriz1[3].pos_y_inicial);
			}
			if (p == 1) {
				draw_sprite(buffer, pos[1].matriz1[0].quadrado, pos[1].matriz1[0].pos_x_inicial, pos[1].matriz1[0].pos_y_inicial);
				draw_sprite(buffer, pos[1].matriz1[1].quadrado, pos[1].matriz1[1].pos_x_inicial, pos[1].matriz1[1].pos_y_inicial);
				draw_sprite(buffer, pos[1].matriz1[2].quadrado, pos[1].matriz1[2].pos_x_inicial, pos[1].matriz1[2].pos_y_inicial);
				draw_sprite(buffer, pos[1].matriz1[3].quadrado, pos[1].matriz1[3].pos_x_inicial, pos[1].matriz1[3].pos_y_inicial);
			}
		}
		else if (ok == 1 || ok == -3) {
			if (enter1 == 0) {
				while (!key[KEY_ENTER]) {
					for (i = 1; i <= 5; i++) {
						for (j = 1; j <= 5; j++) {
							if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3)) {
								draw_sprite(buffer, quadradoLugarColocarPeca, 100 + (40 * i), 100 + (40 * j));
							}
							else {
								draw_sprite(buffer, quadradoMatriz, 100 + (40 * i), 100 + (40 * j));
							}
						}
					}

					draw_sprite(buffer, pos[p].matriz1[0].quadrado, pos[p].matriz1[0].pos_x_inicial, pos[p].matriz1[0].pos_y_inicial);
					draw_sprite(buffer, pos[p].matriz1[1].quadrado, pos[p].matriz1[1].pos_x_inicial, pos[p].matriz1[1].pos_y_inicial);
					draw_sprite(buffer, pos[p].matriz1[2].quadrado, pos[p].matriz1[2].pos_x_inicial, pos[p].matriz1[2].pos_y_inicial);
					draw_sprite(buffer, pos[p].matriz1[3].quadrado, pos[p].matriz1[3].pos_x_inicial, pos[p].matriz1[3].pos_y_inicial);

					if (primeira_vez_peca2 == 0) {
						draw_sprite(buffer, pos1[0].matriz1[0].quadrado, pos1[0].matriz1[0].pos_x_inicial, pos1[0].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos1[0].matriz1[1].quadrado, pos1[0].matriz1[1].pos_x_inicial, pos1[0].matriz1[1].pos_y_inicial);
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_RIGHT]) {
						primeira_vez_peca2 = 1;
						draw_sprite(buffer, pos1[0].matriz1[0].quadrado, pos1[0].matriz1[0].pos_x_inicial, pos1[0].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos1[0].matriz1[1].quadrado, pos1[0].matriz1[1].pos_x_inicial, pos1[0].matriz1[1].pos_y_inicial);
						q = 0;
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_LEFT]) {
						primeira_vez_peca2 = 1;
						draw_sprite(buffer, pos1[1].matriz1[0].quadrado, pos1[1].matriz1[0].pos_x_inicial, pos1[1].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos1[1].matriz1[1].quadrado, pos1[1].matriz1[1].pos_x_inicial, pos1[1].matriz1[1].pos_y_inicial);
						q = 1;
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_ENTER]) {
						enter1 = 1;
					}
				}
			}

			for (i = 1; i <= 5; i++) {
				for (j = 1; j <= 5; j++) {
					if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3)) {
						draw_sprite(buffer, quadradoLugarColocarPeca, 100 + (40 * i), 100 + (40 * j));
					}
					else {
						draw_sprite(buffer, quadradoMatriz, 100 + (40 * i), 100 + (40 * j));
					}
				}
			}

			draw_sprite(buffer, pos[p].matriz1[0].quadrado, pos[p].matriz1[0].pos_x_inicial, pos[p].matriz1[0].pos_y_inicial);
			draw_sprite(buffer, pos[p].matriz1[1].quadrado, pos[p].matriz1[1].pos_x_inicial, pos[p].matriz1[1].pos_y_inicial);
			draw_sprite(buffer, pos[p].matriz1[2].quadrado, pos[p].matriz1[2].pos_x_inicial, pos[p].matriz1[2].pos_y_inicial);
			draw_sprite(buffer, pos[p].matriz1[3].quadrado, pos[p].matriz1[3].pos_x_inicial, pos[p].matriz1[3].pos_y_inicial);


			if (mouse_b == 1) {
				if (mouse_x >= 600 && mouse_x <= 640 && mouse_y >= 400 && mouse_y <= 480) {
					click1 = 1;
				}
			}
			if (mouse_b == 2) {
				click1 = 0;
				ok = verificar_se_posicao_ok_fase2_peca2_formato1(pos1[q].matriz1);
				if (ok == 3) {
					play_sample(respostaCerta, 255, 128, 1000, FALSE);
					if (xy_fase2 > 0) {
						xy_fase2--;
					}

					*screen_state = TELA_ESPERA;
					*fase = TELA_FASE_3;
				}
				else if (ok == -3) {
					play_sample(respostaErrada, 255, 128, 1000, FALSE);
					enter1 = 0;
					voltar_pos_inicial_peca2_fase2(pos1[q].matriz1, q);
				}
			}

			if (click1 == 1) {
				if (q == 0) {
					pos1[q].matriz1[0].pos_x_inicial = mouse_x;
					pos1[q].matriz1[0].pos_y_inicial = mouse_y;
					pos1[q].matriz1[0].pos_x_final = pos1[q].matriz1[0].pos_x_inicial + 40;
					pos1[q].matriz1[0].pos_y_final = pos1[q].matriz1[0].pos_y_inicial + 40;

					pos1[q].matriz1[1].pos_x_inicial = mouse_x;
					pos1[q].matriz1[1].pos_y_inicial = mouse_y + 40;
					pos1[q].matriz1[1].pos_x_final = pos1[q].matriz1[1].pos_x_inicial + 40;
					pos1[q].matriz1[1].pos_y_final = pos1[q].matriz1[1].pos_y_inicial + 40;


				}
				else {
					pos1[q].matriz1[0].pos_x_inicial = mouse_x;
					pos1[q].matriz1[0].pos_y_inicial = mouse_y;
					pos1[q].matriz1[0].pos_x_final = pos1[q].matriz1[0].pos_x_inicial + 40;
					pos1[q].matriz1[0].pos_y_final = pos1[q].matriz1[0].pos_y_inicial + 40;

					pos1[q].matriz1[1].pos_x_inicial = mouse_x + 40;
					pos1[q].matriz1[1].pos_y_inicial = mouse_y;
					pos1[q].matriz1[1].pos_x_final = pos1[q].matriz1[1].pos_x_inicial + 40;
					pos1[q].matriz1[1].pos_y_final = pos1[q].matriz1[1].pos_y_inicial + 40;


				}
			}
			if (q == 0) {
				draw_sprite(buffer, pos1[q].matriz1[0].quadrado, pos1[q].matriz1[0].pos_x_inicial, pos1[q].matriz1[0].pos_y_inicial);
				draw_sprite(buffer, pos1[q].matriz1[1].quadrado, pos1[q].matriz1[1].pos_x_inicial, pos1[q].matriz1[1].pos_y_inicial);
			}
			if (q == 1) {
				draw_sprite(buffer, pos1[q].matriz1[0].quadrado, pos1[q].matriz1[0].pos_x_inicial, pos1[q].matriz1[0].pos_y_inicial);
				draw_sprite(buffer, pos1[q].matriz1[1].quadrado, pos1[q].matriz1[1].pos_x_inicial, pos1[q].matriz1[1].pos_y_inicial);
			}
		}
		else if (ok == 2 || ok == -4) {
			if (enter1 == 0) {
				while (!key[KEY_ENTER]) {
					for (i = 1; i <= 5; i++) {
						for (j = 1; j <= 5; j++) {
							if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3)) {
								draw_sprite(buffer, quadradoLugarColocarPeca, 100 + (40 * i), 100 + (40 * j));
							}
							else {
								draw_sprite(buffer, quadradoMatriz, 100 + (40 * i), 100 + (40 * j));
							}
						}
					}

					draw_sprite(buffer, pos[p].matriz1[0].quadrado, pos[p].matriz1[0].pos_x_inicial, pos[p].matriz1[0].pos_y_inicial);
					draw_sprite(buffer, pos[p].matriz1[1].quadrado, pos[p].matriz1[1].pos_x_inicial, pos[p].matriz1[1].pos_y_inicial);
					draw_sprite(buffer, pos[p].matriz1[2].quadrado, pos[p].matriz1[2].pos_x_inicial, pos[p].matriz1[2].pos_y_inicial);
					draw_sprite(buffer, pos[p].matriz1[3].quadrado, pos[p].matriz1[3].pos_x_inicial, pos[p].matriz1[3].pos_y_inicial);

					if (primeira_vez_peca2 == 0) {
						draw_sprite(buffer, pos1[0].matriz1[0].quadrado, pos1[0].matriz1[0].pos_x_inicial, pos1[0].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos1[0].matriz1[1].quadrado, pos1[0].matriz1[1].pos_x_inicial, pos1[0].matriz1[1].pos_y_inicial);
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_RIGHT]) {
						primeira_vez_peca2 = 1;
						draw_sprite(buffer, pos1[0].matriz1[0].quadrado, pos1[0].matriz1[0].pos_x_inicial, pos1[0].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos1[0].matriz1[1].quadrado, pos1[0].matriz1[1].pos_x_inicial, pos1[0].matriz1[1].pos_y_inicial);
						q = 0;
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_LEFT]) {
						primeira_vez_peca2 = 1;
						draw_sprite(buffer, pos1[1].matriz1[0].quadrado, pos1[1].matriz1[0].pos_x_inicial, pos1[1].matriz1[0].pos_y_inicial);
						draw_sprite(buffer, pos1[1].matriz1[1].quadrado, pos1[1].matriz1[1].pos_x_inicial, pos1[1].matriz1[1].pos_y_inicial);
						q = 1;
						draw_sprite(screen, buffer, 0, 0);
						clear(buffer);
					}
					if (key[KEY_ENTER]) {
						enter1 = 1;
					}
				}
			}

			for (i = 1; i <= 5; i++) {
				for (j = 1; j <= 5; j++) {
					if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3)) {
						draw_sprite(buffer, quadradoLugarColocarPeca, 100 + (40 * i), 100 + (40 * j));
					}
					else {
						draw_sprite(buffer, quadradoMatriz, 100 + (40 * i), 100 + (40 * j));
					}
				}
			}

			draw_sprite(buffer, pos[p].matriz1[0].quadrado, pos[p].matriz1[0].pos_x_inicial, pos[p].matriz1[0].pos_y_inicial);
			draw_sprite(buffer, pos[p].matriz1[1].quadrado, pos[p].matriz1[1].pos_x_inicial, pos[p].matriz1[1].pos_y_inicial);
			draw_sprite(buffer, pos[p].matriz1[2].quadrado, pos[p].matriz1[2].pos_x_inicial, pos[p].matriz1[2].pos_y_inicial);
			draw_sprite(buffer, pos[p].matriz1[3].quadrado, pos[p].matriz1[3].pos_x_inicial, pos[p].matriz1[3].pos_y_inicial);


			if (mouse_b == 1) {
				if (mouse_x >= 600 && mouse_x <= 640 && mouse_y >= 400 && mouse_y <= 480) {
					click1 = 1;
				}
			}
			if (mouse_b == 2) {
				click1 = 0;
				ok = verificar_se_posicao_ok_fase2_peca2_formato2(pos1[q].matriz1);
				if (ok == 4) {
					play_sample(respostaCerta, 255, 128, 1000, FALSE);
					if (xy_fase2 > 0) {
						xy_fase2--;
					}
					*screen_state = TELA_ESPERA;
					*fase = TELA_FASE_3;
				}
				else if (ok == -4) {
					play_sample(respostaErrada, 255, 128, 1000, FALSE);
					enter1 = 0;
					voltar_pos_inicial_peca2_fase2(pos1[q].matriz1, q);

				}
			}

			if (click1 == 1) {
				if (q == 0) {
					pos1[q].matriz1[0].pos_x_inicial = mouse_x;
					pos1[q].matriz1[0].pos_y_inicial = mouse_y;
					pos1[q].matriz1[0].pos_x_final = pos1[q].matriz1[0].pos_x_inicial + 40;
					pos1[q].matriz1[0].pos_y_final = pos1[q].matriz1[0].pos_y_inicial + 40;

					pos1[q].matriz1[1].pos_x_inicial = mouse_x;
					pos1[q].matriz1[1].pos_y_inicial = mouse_y + 40;
					pos1[q].matriz1[1].pos_x_final = pos1[q].matriz1[1].pos_x_inicial + 40;
					pos1[q].matriz1[1].pos_y_final = pos1[q].matriz1[1].pos_y_inicial + 40;

				}
				else {
					pos1[q].matriz1[0].pos_x_inicial = mouse_x;
					pos1[q].matriz1[0].pos_y_inicial = mouse_y;
					pos1[q].matriz1[0].pos_x_final = pos1[q].matriz1[0].pos_x_inicial + 40;
					pos1[q].matriz1[0].pos_y_final = pos1[q].matriz1[0].pos_y_inicial + 40;

					pos1[q].matriz1[1].pos_x_inicial = mouse_x + 40;
					pos1[q].matriz1[1].pos_y_inicial = mouse_y;
					pos1[q].matriz1[1].pos_x_final = pos1[q].matriz1[1].pos_x_inicial + 40;
					pos1[q].matriz1[1].pos_y_final = pos1[q].matriz1[1].pos_y_inicial + 40;

				}
			}
			if (q == 0) {
				draw_sprite(buffer, pos1[q].matriz1[0].quadrado, pos1[q].matriz1[0].pos_x_inicial, pos1[q].matriz1[0].pos_y_inicial);
				draw_sprite(buffer, pos1[q].matriz1[1].quadrado, pos1[q].matriz1[1].pos_x_inicial, pos1[q].matriz1[1].pos_y_inicial);
			}
			if (q == 1) {
				draw_sprite(buffer, pos1[q].matriz1[0].quadrado, pos1[q].matriz1[0].pos_x_inicial, pos1[q].matriz1[0].pos_y_inicial);
				draw_sprite(buffer, pos1[q].matriz1[1].quadrado, pos1[q].matriz1[1].pos_x_inicial, pos1[q].matriz1[1].pos_y_inicial);
			}
		}
		//show_mouse(buffer);
		draw_sprite(buffer, mouse, mouse_x, mouse_y);
		draw_sprite(screen, buffer, 0, 0);
		clear(buffer);
		if (ok == 3 || ok == 4) {
			rest(2000);
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			destroy_bitmap(pos[i].matriz1[j].quadrado);

		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			destroy_bitmap(pos1[i].matriz1[j].quadrado);

		}
	}


	destroy_sample(respostaCerta);
	destroy_sample(respostaErrada);


	destroy_bitmap(quadradoLugarColocarPeca);
	destroy_bitmap(quadradoMatriz);

	destroy_bitmap(mouse);

	destroy_bitmap(buffer);
}
