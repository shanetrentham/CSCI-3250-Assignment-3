//
//  Planet.hpp
//  Trentham_Assign1
//
//  Created by Shane Trentham on 8/29/19.
//  Copyright © 2019 Shane Trentham. All rights reserved.
//
#include "string"
#ifndef Planet_hpp
#define Planet_hpp

#include <stdio.h>

class Planet {
private:
    std::string name;
    std::string madeOf;
    int alienPopulation;
    
public:
    Planet(std::string _name, std::string _madeOf, int _pop);
    Planet(){}
    std::string getName() { return name; }
    std::string getMadeOf() { return madeOf; }
    int getAlienPopulation() { return alienPopulation; }
    
    
};

#endif /* Planet_hpp */
