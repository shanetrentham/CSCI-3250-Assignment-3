//
//  Planet.cpp
//  Trentham_Assign1
//  Shane Trentham
//  CSCI 3250
//  9/17/2019
//  Assignment 3

#include "Planet.hpp"


Planet::Planet(std::string _name, std::string _madeOf, int _pop) {
   if(_name.length() == 0)
       throw std::invalid_argument("Name must not be empty");
    else
        name = _name;
    if(_madeOf.length() == 0)
        throw std::invalid_argument("Made of must not be empty");
    else
        madeOf = _madeOf;
    if(_pop < 0)
        throw std::invalid_argument("Population must not be negative");
    else
        alienPopulation = _pop;
}

