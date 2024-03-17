#include "./Galaxy.hpp"

#include <iostream>

#include "Graphs/AstralBody/AstralBody.hpp"
#include "Utils/Coordinate.hpp"

Galaxy::Galaxy(const std::string& name, Coordinate& coordinates,
               const int& numStars)
    : AstralBody(name, coordinates), numStars(numStars) {}

void Galaxy::printDetails() {
  int posX = coordinates.getPositionX();
  int posY = coordinates.getPositionY();
  std::cout << "Name: " << name << "\n";
  std::cout << "Number of stars: " << numStars << "\n";
  std::cout << "Position: X: " << posX << " Y: " << posY << "\n";
}