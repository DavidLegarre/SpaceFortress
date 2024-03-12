#ifndef GRAPHS_NODE_H
#define GRAPHS_NODE_H

#include <string>
#include <vector>

class Node {
   protected:
    std::string name;
    std::vector<Node*> nodes;
   public:
      Node(const std::string& name);
      virtual ~Node();

      const std::string& getName();
      virtual void printDetails() = 0;
      virtual void addChild(Node* child);
};

#endif
