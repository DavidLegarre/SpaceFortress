#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include "Graphs/AstralBody/AstralBody.hpp"

class GalaxyMap {
 private:
  static constexpr int WIDTH = 12;
  static constexpr int HEIGHT = 12;
  char map[HEIGHT][WIDTH];
  std::vector<AstralBody *> Bodies;
  void populateMap();

 public:
  GalaxyMap();
  void printMap();
  void addBody(AstralBody &astralBody);
  void deleteBody(AstralBody &astralBody);
  void renderMap(sf::RenderWindow &window);
};
