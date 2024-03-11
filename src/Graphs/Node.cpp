#include "Graphs/Node.h"

Node::Node(const std::string& name) : name(name) {}

Node::~Node() {}

const std::string& Node::getName() const {
    return name;
}