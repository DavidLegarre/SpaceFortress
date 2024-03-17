#pragma once
class Coordinate {
 private:
  int positionX;
  int positionY;

 public:
  Coordinate(int x, int y) : positionX(x), positionY(y) {}

  int getPositionX() { return positionX; }
  int getPositionY() { return positionY; }
};
