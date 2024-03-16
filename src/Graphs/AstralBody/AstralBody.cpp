#include "Graphs/AstralBody/AstralBody.h"

AstralBody::AstralBody(const std::string& name, const Coordinate& coordinates)
    : Node(name), coordinates(coordinates){};

AstralBody::~AstralBody(){};
