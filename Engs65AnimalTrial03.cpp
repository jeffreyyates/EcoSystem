/*
 * Engs65AnimalTrial03.cpp
 *
 *  Created on: Feb 24, 2013
 *      Author: yeunun
 */



#include <iostream>
using namespace std;

class grid
{
	/*
	 * I am going to pretend that this is the grid class for the animal
	 */
};

class animal
{
private:

	char name;

	float energy, thirst, hunger, currenthealth, foodvalue;
	/*
	 *  how much energy this animal has
	 *  how thirsty this animal is
	 *  how hungry this animal is
	 *  how healthy this animal is, on the scale of 0 to 1
	 *  how much a prdatator's energy increase if he eats this animal
	 *
	 */
	int myxloaction, myylocation, enemyxloaction, enemyylocation;
	/*
	 *  this animal's current location
	 *  	and its closest enemy's location
	 *  if there is no enemy around
	 *  	then enemy location is (-1,-1)
	 */
	int awareness;
	/*
	 *  how far an animal can see
	 *
	 */
	int isitfree;
	/*
	 *  if this animal can do a free move, whatever that is, in this turn.
	 *  if this animal has gone through an interaction by the interaction class
	 *  	then this animal cannot do a free move
	 *  if this animal remains untouched by the interaction class
	 *  	then it can do whatever it can do e.g. move, rest, drink
	 */
	float bedtime, wakeuptime; int isitsleeping;
	/*
	 *  each animal has its own circadian rhythm to sleep and wake up
	 *  set isitsleeping = 1 if sleeping
	 *  set isitsleeping = 0 if awake
	 */
	float age, maxage;
	/*
	 *  the age of an animal increases in the beginning of every turn
	 *  e.g. age = age + timeperturn;
	 *  the animal interaction class kills an animal if age>maxage
	 *
	 */
	int sex, tier;
	/*
	 *  sex == 1 if male
	 *  sex == 2 if female
	 *
	 *  tier 0 animals are herbivores
	 *  tier n carnivore can eat tier n-1 carnivore and below
	 *
	 */
	animal *hunttarget;
	/*
	 *  this animal's target for hunting in this turn
	 *  this target is reset in the beginning of every turn
	 *  the interaction class goes through all the targeted animals
	 *  	and determines if the hunting was successful
	 *
	 */
	grid thisworld;
	/*
	 *  an animal must know in which world it exists
	 */

	void findenemy();
		// look for an enemy
	void findtarget();
		// look for a target to hunt
	void findgrass();
		// look for a grass field
	void findwater();
		// look for a source of water

	void move();
		// have this animal move freely
	void eatgrass();
		// eat grass and become less hungry
	void drinkwater();
		// drink water now
	void sleep();
		// have this animal fall asleep
	void wakeup();
		// have this animal be awake
	void moreage();
		// have this animal age
	void rest();
		// regains energy at the cost of hunger and thirst

public:

	void moreenergy(float amount);
		// increase the energy by the amount given
	void lessenergy(float amount);
		// decrease the energy by the amount given
	void morethirst(float amount);
		// increase the thirst by the amount given
	void lessthirst(float amount);
		// decrease the thirst by the amount given
	void morehunger(float amount);
		// increase the hunger by the amount given
	void lesshunger(float amount);
		// decrease the hunger by the amount given
	void morehealth(float amount);
		// increase the health by the amount given
	void lesshealth(float amount);
		// decrease the health by the amount given

	int returnfreedomstatus();
		/*
		 *  returns isitfree variable
		 *  if this animal was moved by the interaction
		 *  	then this should be 0
		 *  if this animal was not moved the interaction
		 *  	then this should be 1
		 *
		 */
	int returnsex();
		// return the sex of this animal
	int returntier();
		// return the tier of this animal

	animal* returntarget();
		// return the target of this animal

	void dofreethings();
		// an animal gets do some free things
};


void animal::findenemy()
{
	// look for an enemy
}
void animal::findtarget()
{
	// look for a target to hunt
}
void animal::findgrass()
{
	// look for a grass field
}
void animal::findwater()
{
	// look for a source of water
}

void animal::move()
{
	// have this animal move freely
}
void animal::eatgrass()
{
	// eat grass and become less hungry
}
void animal::drinkwater()
{
	// drink water now
}
void animal::sleep()
{
	// have this animal fall asleep
}
void animal::wakeup()
{
	// have this animal be awake
}
void animal::moreage()
{
	// have this animal age
}
void animal::rest()
{
	// regains energy at the cost of hunger and thirst
}



void animal::moreenergy(float amount)
{
	energy += amount;
	// increase the energy by the amount given
}
void animal::lessenergy(float amount)
{
	energy -= amount;
	// decrease the energy by the amount given
}
void animal::morethirst(float amount)
{
	thirst += amount;
	// increase the thirst by the amount given
}
void animal::lessthirst(float amount)
{
	thirst -= amouht;
	// decrease the thirst by the amount given
}
void animal::morehunger(float amount)
{
	hunger += amount;
	// increase the hunger by the amount given
}
void animal::lesshunger(float amount)
{
	hunger -= amount;
	// decrease the hunger by the amount given
}
void animal::morehealth(float amount)
{
	currenthealth += amount;
	// increase the health by the amount given
}
void animal::lesshealth(float amount)
{
	currenthealth -= amount;
	// decrease the health by the amount given
}

int animal::returnfreedomstatus()
{
	return isitfree;
	/*
	 *  returns isitfree variable
	 *  if this animal was moved by the interaction
	 *  	then this should be 0
	 *  if this animal was not moved the interaction
	 *  	then this should be 1
	 *
	 */
}
int animal::returnsex()
{
	return sex;
	// return the sex of this animal
}
int animal::returntier()
{
	return tier;
	// return the tier of this animal
}

animal* animal::returntarget()
{
	return hunttarget;
	// return the target of this animal
}

void animal::dofreethings()
{
	// an animal gets do some free things
}



