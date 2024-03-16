#ifndef GENERATORS_GALAXYMAP_H
#define GENERATORS_GALAXYMAP_H

#include <vector>

#include "Graphs/AstralBody/AstralBody.h"

class GalaxyMap {
 private:
  static constexpr int WIDTH = 12;
  static constexpr int HEIGHT = 12;
  char map[HEIGHT][WIDTH];
  std::vector<AstralBody*> Bodies;
  void populateMap();

 public:
  GalaxyMap();
  void printMap();
  void addBody(AstralBody& astralBody) { Bodies.push_back(&astralBody); }
  void deleteBody(AstralBody& astralBody);
};

#endif  // GENERATORS_GALAXYMAP_H
