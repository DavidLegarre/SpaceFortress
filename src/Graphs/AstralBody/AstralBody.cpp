#include "Graphs/AstralBody/AstralBody.hpp"

AstralBody::AstralBody(const std::string& name, const Coordinate& coordinates)
    : Node(name), coordinates(coordinates){};

AstralBody::~AstralBody(){};
