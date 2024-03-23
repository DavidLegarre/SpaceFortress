#pragma once
#include <string>

#include "Graphs/Node.hpp"
#include "Utils/Coordinate.hpp"

class AstralBody : public Node {
 protected:
  Coordinate coordinates;

 public:
  AstralBody(const std::string& name, const Coordinate& coordinates);
  virtual ~AstralBody();

  int getX() { return coordinates.getPositionX(); }
  int getY() { return coordinates.getPositionY(); }
};
