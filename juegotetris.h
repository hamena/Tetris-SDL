/// \file juegotetris.h

#ifndef JUEGO_TETRIS_H_
#define JUEGO_TETRIS_H_

#include <iostream>
#include <unistd.h>
#include <curses.h>
#include <SDL/SDL.h>
#include "matriztetris.h"
#include "controlTetris.h"

using std::cout;
using std::endl;

bool tocaMover(Uint32, unsigned);

class JuegoTetris{
	public:
		JuegoTetris();
		void preparar();
		void iniciar();
		~JuegoTetris();
	private:
		vector<unsigned>* delay;
		MatrizTetris* mt;
		ControlTetris* ct;
		Piezas* piezas;
		Uint32 tiempo;
		bool LETSPLAYBABY;
		bool curses;
		unsigned cont;
		
		void clearScreen();
		void iniciaCurses();
		void finCurses();
		void mostrarControles() const;
		void finDelJuego();
};

#endif //JUEGO_TETRIS_H_
