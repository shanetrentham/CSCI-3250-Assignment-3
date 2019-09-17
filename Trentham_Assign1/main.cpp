//
//  main.cpp
//  Trentham_Assign1
//  Shane Trentham
//  CSCI 3250
//  9/17/2019
//  Assignment 3
#include "Planet.hpp"
#include "Planets.hpp"
#include <iostream>

std::string getName()
{
    std::string name;
    std::cout << "Enter the Planets name: ";
    std::cin >> name;
    return name;
}

std::string getMadeOf() {
    
    std::string madeOf;
    std::cout << "Enter what the Planet is made of: ";
    std::cin >> madeOf;
    return madeOf;
    
}

int getAlienPopulation() {
    
    int pop;
    std::cout << "Enter the number of Aliens on the Planet: ";
    std::cin >> pop;
    return pop;
    
}
void buildPlanet(std::string name, std::string madeOf, int pop, Planet *p, Planets *ps) {
    
    p = new Planet(name, madeOf, pop);
    for(int i = 0; i < 1000; i++)
    {
        ps->addPlanet(*p);
    }
}
int main(int argc, const char * argv[]) {
    Planet *planet = new Planet();
    Planets *planets = new Planets();
    std::string name = "";
    std::string madeOf = "";
    int alienPop = 0;
    int choice = 0;
    
    while (choice != 6) {
        std::cout << "1. Add Planet to the beginning." << std::endl;
        std::cout << "2. Remove the first planet." << std::endl;
        std::cout << "3. Remove the last planet." << std::endl;
        std::cout << "4. Remove every planet." << std::endl;
        std::cout << "5. Get the number of Planets in the list." << std::endl;
        std::cout << "6. Quit." << std::endl;
        std::cin >> choice;
        switch(choice) {
            case 1:
            {
                name = getName();
                madeOf = getMadeOf();
                alienPop = getAlienPopulation();
                buildPlanet(name, madeOf, alienPop,planet, planets);
                break;
            }
            case 2:
            {
                planets->pop_back();
                break;
            }
            case 3:
            {
                planets->pop_front();
                break;
            }
            case 4:
            {
                planets->clear();
                break;
            }
            case 5:
            {
                std::cout << "There are " << planets->getCount() << " in the list." << std::endl;
            }
            case 6:
                EXIT_SUCCESS;
                break;
                }
        }
    
    
    
    return 0;
}

