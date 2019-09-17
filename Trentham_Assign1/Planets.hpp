//
//  Planets.hpp
//  Trentham_Assign1
//  Shane Trentham
//  CSCI 3250
//  9/17/2019
//  Assignment 3

#ifndef Planets_hpp
#define Planets_hpp

#include "Planet.hpp"
#include "LinkedList.h"
#include <stdio.h>

class Planets {
    
private:
    LinkedList<Planet> planets;
    
public:
    Planets() {}
    void addPlanet(Planet);
    int getCount();
    void clear();
    Planet pop_back();
    Planet pop_front();
    
};

#endif /* Planets_hpp */
