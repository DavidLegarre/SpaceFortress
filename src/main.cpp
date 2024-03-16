#include <iostream>

#include "Generators/GalaxyMap.hpp"
#include "Graphs/AstralBody/Galaxy.hpp"
#include "Utils/Coordinate.hpp"

int main() {
  GalaxyMap galaxyMap;

  Coordinate positionTest = Coordinate(1, 2);
  Galaxy galaxyTest = Galaxy("Andromeda", positionTest, 4);
  Coordinate positionTestChild = Coordinate(9, 4);
  Galaxy galaxyTestChild = Galaxy("Milky Way", positionTestChild, 45);
  galaxyTest.addChild(&galaxyTestChild);

  galaxyMap.addBody(galaxyTest);
  galaxyMap.addBody(galaxyTestChild);

  galaxyMap.printMap();
  galaxyTest.printChildren();

  return 0;
}