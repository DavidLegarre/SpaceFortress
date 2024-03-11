#include "Graphs/Node.h"

Node::Node(const std::string& name) : name(name) {}

Node::~Node() {}

const std::string& Node::getName() {
    return name;
}