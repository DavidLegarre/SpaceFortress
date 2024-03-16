#pragma once

#include "Graphs/AstralBody/AstralBody.hpp"
#include "Utils/Coordinate.hpp"

class Galaxy : public AstralBody {
 private:
  int numStars;
  Coordinate coordinates;

 public:
  Galaxy(const std::string& name, const Coordinate& coordinates,
         const int& numStars);

  void printDetails() override;
};
