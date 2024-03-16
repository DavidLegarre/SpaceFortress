#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
 private:
  int positionX;
  int positionY;

 public:
  Coordinate(int x, int y) : positionX(x), positionY(y) {}

  int getX() { return positionX; }
  int getY() { return positionY; }
};

#endif  // COORDINATE_H
