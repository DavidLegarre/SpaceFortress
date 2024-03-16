#include "Graphs/AstralBody/Galaxy.hpp"

#include <iostream>

#include "Graphs/AstralBody/AstralBody.hpp"
#include "Utils/Coordinate.hpp"

Galaxy::Galaxy(const std::string& name, const Coordinate& coordinates,
               const int& numStars)
    : AstralBody(name, coordinates),
      numStars(numStars),
      coordinates(coordinates) {}

void Galaxy::printDetails() {
  std::cout << "Galaxy: " << name << ", Number of stars: " << numStars
            << std::endl;
}
