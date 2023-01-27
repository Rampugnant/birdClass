#include "birdClass.h" 

Bird::Bird() 
{
	name;
	wingspan;
	beakShape;
	fried; 
}

Bird::Bird(std::string name, double wingspan, std::string beakShape, bool fried)
{ 
	name = name; 
	wingspan = wingspan; 
	beakShape = beakShape; 
	fried = fried; 
} 

void Bird::fry(){ 
	//updates boolian fried to true 
} 

bool Bird::isFried(){ 
	//returns the bool fried within a bird object 
}  

std::string Bird::getName(){ 
	return name; 
} 

double Bird::getWingspan(){
	return wingspan; 
} 

std::string Bird::getBeakShape(){
	return beakShape; 
} 
