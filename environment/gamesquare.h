/*
 * gamesquare.h
 *
 *  Created on: Feb 12, 2013
 *      Author: Alex
 */

#ifndef GAMESQUARE_H_
#define GAMESQUARE_H_

class Gamesquare{
	Animal* animalptr;
	Plant* plantptr;
	Weather* weatherptr;
	int terraincode;	  	//Need to define terrain coding scheme
	int xloc;				//Knows it's own coordinate
	int yloc;

public:
	Gamesquare();
	Gamesquare(int newx, int newy);
//	~Gamesquare(){};
//
//	void addAnimal(Animal* newptr);
//	void addPlant(Plant* newptr);
//	void addWeather(Weather* newptr);
//
//	Animal* getAnimalptr();
//	Plant* getPlantptr();
//	Weather* getWeatherptr();
//	int getTerraincode();
	int getXloc();
	int getYloc();

	void setTerrain(int newcode);
	void setXloc(int newx);
	void setYloc(int newy);

	WORD getSquareColor();
};




#endif /* GAMESQUARE_H_ */
