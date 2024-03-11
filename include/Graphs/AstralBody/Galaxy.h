#ifndef GALAXY_H
#define GALAXY_H

#include "Graphs/Node.h"

// Derived class representing a galaxy
class Galaxy : public Node {
private:
    int numStars;

public:
    Galaxy(const std::string& name, int numStars);

    void printDetails() const override;
};

#endif // GALAXY_H