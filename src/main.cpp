#include <iostream>

#include "Generators/GalaxyMap.h"
#include "Graphs/AstralBody/Galaxy.h"

int main() {
    GalaxyMap galaxyMap;
    galaxyMap.printMap();
    Galaxy galaxyTest = Galaxy("Andromeda", 4);
    galaxyTest.printDetails();
    Galaxy galaxyTestChild = Galaxy("Star", 45);
    //galaxyTest.addChild(galaxyTestChild);
    return 0;
}