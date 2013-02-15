/*
 * gamesquare.cpp
 *
 *  Created on: Feb 12, 2013
 *      Author: Alex
 */





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
