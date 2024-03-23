#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include "Graphs/Nodes/AstralBody/AstralBody.hpp"

class GalaxyMap {
 private:
  std::vector<AstralBody *> Bodies;

 public:
  GalaxyMap();

  const std::vector<AstralBody *> &getBodies() const { return Bodies; }
  void addBody(AstralBody &astralBody);
  void deleteBody(AstralBody &astralBody);

  void renderMap(sf::RenderWindow &window);
};
