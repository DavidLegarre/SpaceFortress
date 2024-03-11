#ifndef GRAPHS_NODE_H
#define GRAPHS_NODE_H

#include <string>

class Node {
   protected:
    std::string name;
   public:
      Node(const std::string& name);
      virtual ~Node();

      const std::string& getName();
      virtual void printDetails() = 0;
};

#endif
