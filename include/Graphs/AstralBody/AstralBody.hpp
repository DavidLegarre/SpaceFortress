#ifndef ASTRALBODY_H
#define ASTRALBODY_H

#include <string>

#include "Graphs/Node.hpp"
#include "Utils/Coordinate.hpp"

class AstralBody : public Node {
 private:
  Coordinate coordinates;

 public:
  AstralBody(const std::string& name, const Coordinate& coordinates);
  virtual ~AstralBody();

  int getX() { return coordinates.getX(); }
  int getY() { return coordinates.getY(); }
};

#endif