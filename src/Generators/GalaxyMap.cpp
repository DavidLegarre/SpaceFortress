#include "Generators/GalaxyMap.h"

#include <algorithm>
#include <cstdlib>
#include <iostream>

void cls(void) { printf("\33[2J"); }

// Constructor definition
GalaxyMap::GalaxyMap() {
  for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
      map[y][x] = ' ';
    }
  }
}

void GalaxyMap::printMap() {
  populateMap();
  // Clear screen after printing Map
  cls();
  // Implementation of printMap function
  for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
      std::cout << map[y][x];
    }
    std::cout << std::endl;
  }
}

void GalaxyMap::deleteBody(AstralBody& astralBody) {
  auto element = std::find(Bodies.begin(), Bodies.end(), &astralBody);

  if (element != Bodies.end()) {
    Bodies.erase(element);
  }
}

void GalaxyMap::populateMap() {
  for (auto& body : Bodies) {
    int x = body->getX();
    int y = body->getY();

    map[y][x] = '*';
  }
}