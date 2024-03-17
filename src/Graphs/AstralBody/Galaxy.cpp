#include "./Galaxy.hpp"

#include <iostream>

#include "Graphs/AstralBody/AstralBody.hpp"
#include "Utils/Coordinate.hpp"

Galaxy::Galaxy(const std::string& name, Coordinate& coordinates,
               const int& numStars)
    : AstralBody(name, coordinates), numStars(numStars) {}

void Galaxy::printDetails() {
  std::cout << "Galaxy: " << name << ", Number of stars: " << numStars
            << std::endl;
}
