#include <iostream>

#include "Generators/GalaxyMap.h"
#include "Graphs/AstralBody/Galaxy.h"

int main() {

  GalaxyMap galaxyMap;
  galaxyMap.printMap();

  Galaxy galaxyTest = Galaxy("Andromeda", 4);
  Galaxy galaxyTestChild = Galaxy("Milky Way", 45);
  galaxyTest.addChild(&galaxyTestChild);
  galaxyTest.printChildren();

  return 0;
}