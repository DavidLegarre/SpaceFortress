#include <iostream>

#include "Generators/GalaxyMap.h"
#include "Graphs/AstralBody/Galaxy.h"

int main() {
    GalaxyMap galaxyMap;
    galaxyMap.printMap();
    Galaxy galaxyTest = Galaxy("Andromeda", 4);
    galaxyTest.printDetails();
    return 0;
}