#ifndef GENERATORS_GALAXYMAP_H
#define GENERATORS_GALAXYMAP_H

class GalaxyMap {
   private:
    static constexpr int WIDTH = 28;
    static constexpr int HEIGHT = 28;
    char map[HEIGHT][WIDTH];

   public:
    GalaxyMap();
    void generateMap();
    void printMap();
};

#endif  // GENERATORS_GALAXYMAP_H
