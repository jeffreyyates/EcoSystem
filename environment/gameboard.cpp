/*
 * gameboard.cpp
 *
 *  Created on: Feb 12, 2013
 *      Author: Alex
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include "gameboard.h"
#include"Gamesquare.h"
#include"Animal.h"
#include"Plant.h"
#include"Weather.h"
#include"Gameboard.h"

using namespace std;

Gameboard::Gameboard(){
	int i;
	int j;
	for(i = 0; i < X; i++){
		for(j = 0; j < Y; j++){
			board[X][Y] = *(new Gamesquare());
		}
	}
}

void Gameboard::printBoard(Gameboard thisboard, int xcenter, int ycenter, int size){
	int i;
	int j;
	WORD colorcode;
	char text;
	animal* aptr;
	plant* pptr;

	cout<<endl<<endl<<endl<<endl;
	for(i = 0; i < X; i++){
			for(j = 0; j < Y; j++){
				if ((*thisboard[i][j]).getAnimalptr() != NULL){
					aptr = (*board[i][j]).getAnimalptr();
				}
				if ((*thisboard[i][j]).Plantptr() != NULL){
					pptr = (*board[i][j]).getAnimalptr();
				}
				colorcode = (*thisboard[i][j]).getSquareColor();

				//Set the color for that square
				SetConsoleTextAttribute( hstdout, colorcode );

				//Display blank for no animals
				//Display animal if there is one
				//Display a plant if one and no animal
				if (aptr == NULL && pptr == NULL) cout<<" ";
				else if (aptr == NULL && pptr != NULL) cout<<pptr.getplantname();
				else if (pptr == NULL && aptr != NULL) cout<<aptr.whatisyourname();
				else cout<<aptr.whatisyourname();

		}
	}
}



