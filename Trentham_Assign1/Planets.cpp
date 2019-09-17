//
//  Planets.cpp
//  Trentham_Assign1
//  Shane Trentham
//  CSCI 3250
//  9/17/2019
//  Assignment 3
#include "Planets.hpp"
void Planets::addPlanet(Planet p) {
    planets.push_back(p);
}

int Planets::getCount() {
    return planets.size();
}
Planet Planets::pop_back()
{
    return planets.pop_back();
}
Planet Planets::pop_front()
{
    return planets.pop_front();
}
void Planets::clear()
{
    planets.clear();
}

