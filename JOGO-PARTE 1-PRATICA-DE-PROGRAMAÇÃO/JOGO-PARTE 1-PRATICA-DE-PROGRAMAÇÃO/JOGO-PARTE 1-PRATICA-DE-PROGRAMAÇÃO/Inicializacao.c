#include "Inicializacao.h"
#include "Typedef.h"

void sair() {
	screen_state = SAIR;
}

void init() {
	allegro_init();
	install_timer();
	install_keyboard();
	install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL);
	install_mouse();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
	set_window_title("JOGO");

	LOCK_FUNCTION(sair);
	set_close_button_callback(sair);

	screen_state = TELA_ESPERA;
	fase = TELA_INICIAL;
	xy_fase1 = 4;
	xy_fase2 = 4;
	xy_fase3 = 4;
	aceleracao = 0.01;
}