#ifndef GALAXY_H
#define GALAXY_H

#include "Graphs/AstralBody/AstralBody.h"
#include "Utils/Coordinate.h"

class Galaxy : public AstralBody {
 private:
  int numStars;
  Coordinate coordinates;

 public:
  Galaxy(const std::string& name, const Coordinate& coordinates,
         const int& numStars);

  void printDetails() override;
};

#endif  // GALAXY_H