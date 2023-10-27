#ifndef ATTRIBUTEDGRAPH1_H
#define ATTRIBUTEDGRAPH1_H

#include "SimpleGraph.h"
#include "AttributedNode1.h"

#include <iostream>
using namespace std;

class AttributedGraph1 : public SimpleGraph {
    protected:
    AttributedNode1* Attributednodes;                             // Array to store created nodes
    public:
    AttributedGraph1();
    ~AttributedGraph1();
    void appendAttributes();
    void printGraphData() const;

    //Q5
    void sendMessage() override;
    void print();
};

#endif  // ATTRIBUTEDGRAPH1_H