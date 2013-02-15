/*
 * gameboard.h
 *
 *  Created on: Feb 12, 2013
 *      Author: Alex
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#define X 10
#define Y 10

class Gameboard{
	Gamesquare board[X][Y];



public:
	Gameboard();

	~Gameboard(){};

	void printBoard(int xcenter, int ycenter, int size);

};



#endif /* GAMEBOARD_H_ */
