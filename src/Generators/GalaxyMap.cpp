#include "./GalaxyMap.hpp"

#include <SFML/Graphics.hpp>
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

void GalaxyMap::addBody(AstralBody& astralBody) {
  Bodies.push_back(&astralBody);

  populateMap();
}

void GalaxyMap::deleteBody(AstralBody& astralBody) {
  auto element = std::find(Bodies.begin(), Bodies.end(), &astralBody);

  if (element != Bodies.end()) {
    Bodies.erase(element);
  }
  populateMap();
}

void GalaxyMap::populateMap() {
  for (auto& body : Bodies) {
    int x = body->getX();
    int y = body->getY();

    map[y][x] = '*';
  }
}

void GalaxyMap::renderMap(sf::RenderWindow& window) {
  // Render nodes (astral bodies)
  for (auto body : Bodies) {
    int x = body->getX();
    std::cout << "x: " << x << "\n";
    sf::CircleShape nodeShape(10);
    nodeShape.setFillColor(sf::Color::White);
    nodeShape.setPosition(body->getX(), body->getY());

    window.draw(nodeShape);
  }
}
