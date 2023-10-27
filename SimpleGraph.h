#ifndef SIMPLEGRAPH_H
#define SIMPLEGRAPH_H

#include "SimpleNode.h"
// Class SimpleGraph

class SimpleGraph {
protected:
    int numNodes;
    int numEdges;
    SimpleNode** nodes;


public:
    SimpleGraph();
    SimpleGraph(int numNodes);
    ~SimpleGraph();
    void addNode(int nodeId);
    void addEdge(int nodeId1, int nodeId2);
    int getNeighborCount() const;
    void printNeighbors(int nodeId) const;
    void printGraphData() const;

    SimpleNode** getnodes();
    
    virtual void sendMessage() = 0;
    void print();
};

#endif  // SIMPLEGRAPH_H