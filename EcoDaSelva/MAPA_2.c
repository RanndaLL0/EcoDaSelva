#include <config.h>
#include <AL_MAPA.h>

void carregar_mapa_centro_baixo(struct al_mapa* mapa) {
	for (int k = 0; k < WINDOW_SIZE_PIXEL_Y; k++) {
		for (int j = 0; j < WINDOW_SIZE_PIXEL_X; j++) {
			mapa->matriz[k][j] = 0;
		}
	}
	mapa->background = al_load_bitmap("assets/mapa/baixo.png");

	mapa->matriz[0][11] = 3;
	mapa->matriz[0][12] = 3;
	mapa->matriz[0][13] = 3;

	mapa->next_mapa.pra_cima = 0;
	mapa->criado = true;
}