#include "Graphs/AstralBody/Galaxy.h"
#include <iostream>

Galaxy::Galaxy(const std::string& name, int numStars) : Node(name), numStars(numStars) {}

void Galaxy::printDetails() {
    std::cout << "Galaxy: " << name << ", Number of stars: " << numStars << std::endl;
}
