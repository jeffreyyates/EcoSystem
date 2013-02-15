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
#include <gameboard.h>
using namespace std;

Gameboard::Gameboard(){
	int i;
	int j;
	for(i = 0; i < X; i++){
		for(j = 0; j < Y; j++){
			board[X][Y] = new Gamesquare();
		}
	}
}

void Gameboard::printBoard(int xcenter, int ycenter, int size){
	//Variables for each attribute of the square
	//For loop around all squares
	//If there is an animal, first animal code -> animal attribute
	//If there is...
	//Set terrain attribute
	//Print all attributes in square using GUI, background, w/e

	//FIND OUT FROM SANTOS
}
