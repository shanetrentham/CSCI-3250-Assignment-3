//
//  Planets.hpp
//  Trentham_Assign1
//
//  Created by Shane Trentham on 8/30/19.
//  Copyright © 2019 Shane Trentham. All rights reserved.
//

#ifndef Planets_hpp
#define Planets_hpp

#include "Planet.hpp"
#include "vector"
#include <stdio.h>

class Planets {
    
private:
    std::vector<Planet> planets;
    
public:
    Planets() {}
    void addPlanet(Planet);
    int getCount();
    Planet getMostPopulatedPlanet();
    Planet get(int i);
    
};

#endif /* Planets_hpp */
