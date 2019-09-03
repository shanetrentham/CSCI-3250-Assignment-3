//
//  Planets.cpp
//  Trentham_Assign1
//
//  Created by Shane Trentham on 8/30/19.
//  Copyright © 2019 Shane Trentham. All rights reserved.
//
#include "Planets.hpp"
void Planets::addPlanet(Planet p) {
    planets.push_back(p);
}

int Planets::getCount() {
    return planets.size();
}

Planet Planets::getMostPopulatedPlanet(){
    Planet highest = planets[0];
    if(planets.size() == 0)
        throw std::runtime_error("List is empty!");
    else {
        for(int i = 0; i < planets.size(); i++) {
            if(planets[i].getAlienPopulation() > highest.getAlienPopulation())
                highest = planets[i];
        }
        return highest;
    }
}

Planet Planets::get(int i) {
    return planets[i];
}
