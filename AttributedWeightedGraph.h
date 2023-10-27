#ifndef ATTRIBUTEDWEIGHTEDGRAPH_H
#define ATTRIBUTEDWEIGHTEDGRAPH_H

#include "AttributedGraph2.h"
#include "AttributedGraph1.h"
#include "SimpleGraph.h"

class AttributedWeightedGraph : public AttributedGraph2{
    protected:
    int** edgeWeights;           // 2D array to store edge weights
    int elements;                // size of the graph

    public:
    AttributedWeightedGraph();
    AttributedWeightedGraph(int elements);
    ~AttributedWeightedGraph();
    void appendWeight(int nodeId1, int nodeId2, int weight);
    void printNeighbors(int nodeId);
    void printData();

    void edgeweightArray(int elements);

    void sendMessage();
};


#endif