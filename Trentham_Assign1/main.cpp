//
//  main.cpp
//  Trentham_Assign1
//  Shane Trentham
//  CSCI 3250
//  9/1/2019
//  Assignment 1
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
    ps->addPlanet(*p);
}

int getPopulation(Planets *ps, int i) {
    Planet selectPlanet = ps->get(i);
    return selectPlanet.getAlienPopulation();
}

void printList(Planets *ps) {
    
    for (int i = 0; i < ps->getCount(); i++) {
        Planet p = ps->get(i);
        std::cout << i + 1 << ". " << p.getName() << std::endl;
    }
    
}
void printCount(Planets *ps) {
    int num;
    std::cout << "Which planet would you like to see the count for: ";
    std::cin >> num;
    Planet p = ps->get(num - 1);
    std::cout << "The population for the planet " << p.getName() << " is: " << p.getAlienPopulation() << std::endl;
}

int main(int argc, const char * argv[]) {
    Planet *planet = new Planet();
    Planets *planets = new Planets();
    std::string name = "";
    std::string madeOf = "";
    int alienPop = 0;
    int choice = 0;
    
    while (choice != 5) {
        std::cout << "1. Add Planet." << std::endl;
        std::cout << "2. Get count." << std::endl;
        std::cout << "3. Show planet with highest Alien population." << std::endl;
        std::cout << "4. Get population for a planet." << std::endl;
        std::cout << "5. Quit." << std::endl;
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
                std::cout << "Number of Planet(s): " << planets->getCount() << std::endl;
                break;
            }
            case 3:
            {
                Planet mostPop = planets->getMostPopulatedPlanet();
                std::cout << "The most populated Planet is: " << mostPop.getName() << " with " << mostPop.getAlienPopulation() << " aliens that is made of " <<  mostPop.getMadeOf()<< std::endl;
                break;
            }
            case 4:
                printList(planets);
                printCount(planets);
                break;
            case 5:
                EXIT_SUCCESS;
                break;
                }
        }
    
    
    
    return 0;
}

