/*
 * gamesquare.cpp
 *
 *  Created on: Feb 12, 2013
 *      Author: Alex
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include"Gamesquare.h"
#include"Animal.h"
#include"Plant.h"
#include"Weather.h"
#include"Gameboard.h"

	Gamesquare::Gamesquare(){
		animalptr = NULL;
		plantptr = NULL;
		weatherptr = NULL;
		terraincode = 0;
		xloc = 0;
		yloc = 0;
	}


	Gamesquare::Gamesquare(int newx, int newy){
		animalptr = NULL;
		plantptr = NULL;
		weatherptr = NULL;
		terraincode = 0;
		xloc = newx;
		yloc = newy;
	}

	~Gamesquare(){};


	Animal* getAnimalptr(){
		return(animalptr);
	}
	Plant* getPlantptr(){
		return(plantptr);
	}
	Weather* getWeatherptr(){
		return(weatherptr);
	}
	int getTerraincode(){
		return(terraincode);
	}
	int getXloc(){
		return(xloc);
	}
	int getYloc(){
		return(yloc);
	}



	void addAnimal(Animal* newptr){

	}
	void addPlant(Plant* newptr);
	void addWeather(Weather* newptr);
	void setTerrain(int newcode){
		terraincode = newcode;
	}
	void setXloc(int newx){
		xloc = newx;
	}
	void setYloc(int newy){
		yloc = newy;
	}


	WORD Gamesquare::getSquareColor(){
	//int animal;
	WORD color = 0xFF;

	color = (color | 0xF0);  //Make first four bits 1's to make it white

	switch (terraincode){
		case 1:
			color = (color | 0x01); //Maintain first 4 bits, set last 4 bits to 0001
			break;
		case 2:
			color = (color | 0x02); //Maintain first 4 bits, set last 4 bits to 0010
			break;
		case 3:
			color = (color | 0x0F); //Maintain first 4 bits, set last 4 bits to 1111
			break;
	}
}
