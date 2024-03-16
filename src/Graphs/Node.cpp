#include "./Node.hpp"

Node::Node(const std::string &name) : name(name) {}

Node::~Node() {}

const std::string &Node::getName() { return name; }

void Node::addChild(Node *node) { nodes.push_back(node); }

void Node::printChildren() {
  printDetails();
  std::printf("Conexions from %s:\n", name.c_str());

  for (auto &childrenNode : nodes) {
    childrenNode->printDetails();
  }
}