#pragma once 
#include <iostream>

class Bird {
    private:
        std::string name;
        double wingspan;
        std::string beakShape;
        bool fried;

    public:

        Bird();
        Bird(std::string name, double wingspan, std:string beakShape, bool fried);

        void fry();
        bool isFried();
	std::string getName(); 
	double getWingspan(); 
	std::string getBeakShape(); 
};
