#include "Generators/GalaxyMap.h"

#include <cstdlib>
#include <iostream>

void cls(void) { printf("\33[2J"); }

// Constructor definition
GalaxyMap::GalaxyMap() { generateMap(); }

void GalaxyMap::generateMap() {
    // Initialize map with empty strings
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            map[y][x] = ' ';
        }
    }

    // Add stars and planets
    for (int i = 0; i < WIDTH * HEIGHT / 25; i++) {
        int x = rand() % WIDTH;
        int y = rand() % HEIGHT;
        map[y][x] = (rand() % 2 == 0) ? '*' : 'o';
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