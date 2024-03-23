#pragma once

#include "Graphs/Nodes/AstralBody/AstralBody.hpp"
#include "Utils/Coordinate.hpp"

class Galaxy : public AstralBody {
 private:
  int numStars;

 public:
  Galaxy(const std::string& name, Coordinate& coordinates,
         const int& numStars);

  void printDetails() override;
};
