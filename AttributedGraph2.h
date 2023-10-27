#ifndef ATTRIBUTEDGRAPH2_H
#define ATTRIBUTEDGRAPH2_H

#include "SimpleGraph.h"
#include"AttributedGraph1.h"
#include "AttributedNode2.h"

class AttributedGraph2 : public AttributedGraph1{
protected:
    AttributedNode2** AttrNodes2;
public:
    AttributedGraph2();
    AttributedGraph2(int nodes);
    ~AttributedGraph2();
    void appendAttributes(int nodeId);
    void printNeighbors(int nodeId);
    void printData();

    //Q5
    void sendMessage();
    void print();
};

#endif  // ATTRIBUTEDGRAPH2_H