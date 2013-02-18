/*
 * Eat.cpp
 *
 *  Created on: Feb 18, 2013
 *      Author: Kendall
 */

#include "Eat.h"
#include "Animal.h"
#include "Plant.h"

Eat::Eat() {}

Eat::~Eat() {}

Eat::Eat(Animal* a1, Animal* a2) {
  if (a1.predatorLevel == a2.predatorLevel) {
		a1.move();			// walk by each other...no fight
		a2.move();
	}
	else if (a1.predatorLevel > a2.predatorLevel) {
		a1.gotFood();		// would increase energy, decrease hunger level, etc.
		delete a2;
	} else {
		a2.gotFood();
		delete a1;
	}
}


Eat::Eat(Animal* a, Plant* p) {
	a.gotFood();
	p.gotEaten();		// deplete resource a little bit
}
