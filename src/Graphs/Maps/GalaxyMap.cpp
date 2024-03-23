#include "./GalaxyMap.hpp"

#include <SFML/Graphics.hpp>
#include <algorithm>
#include <cstdlib>
#include <iostream>

// Constructor definition
GalaxyMap::GalaxyMap() {}

void GalaxyMap::addBody(AstralBody& astralBody) {
  Bodies.push_back(&astralBody);
}

void GalaxyMap::deleteBody(AstralBody& astralBody) {
  auto element = std::find(Bodies.begin(), Bodies.end(), &astralBody);

  if (element != Bodies.end()) {
    Bodies.erase(element);
  }
}

void GalaxyMap::renderMap(sf::RenderWindow& window) {
  // Render edges
  for (const auto& edge : edges) {
    sf::Vertex(Bodies[edge.fromNode].position),
    sf::Vertex(Bodies)
  }
}
