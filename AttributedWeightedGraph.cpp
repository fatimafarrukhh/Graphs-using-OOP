#include <iostream>
#include "AttributedWeightedGraph.h"

using namespace std;

AttributedWeightedGraph::AttributedWeightedGraph(){
    edgeWeights=nullptr;

    edgeWeights = new int*[elements];               //Column
    for (int i = 1; i < elements+1; i++) {
        edgeWeights[i] = new int[elements+1];           // Rows
        // Initialize all edge weights to zero
        for (int j = 1; j < elements+1; j++) {
            edgeWeights[i][j] = 0;
        }
    }
    cout<<"Default Constructor of AttributedWeightedGraph."<<endl;}

    AttributedWeightedGraph::AttributedWeightedGraph(int elements){
    this->elements = elements;
    // Memory Alloaction
    edgeWeights = new int*[elements+1];               //Column
    for (int i = 1; i < elements+1; ++i) {
        edgeWeights[i] = new int[elements+1];           // Rows
        // Initialize all edge weights to zero
        for (int j = 1; j < elements+1; ++j) {
            edgeWeights[i][j] = 0;
        }
    }
    }

    void AttributedWeightedGraph::edgeweightArray(int elements){
        this->elements = elements;
        cout<<"EdgeWeight Array"<<endl;

        for(int i=1; i<elements+1; i++){
            for(int j=1; j<elements+1; j++){
                cout<<edgeWeights[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

    
AttributedWeightedGraph::~AttributedWeightedGraph(){
    for (int i = 0; i < elements; ++i) {
        delete[] edgeWeights[i];
    }
    delete[] edgeWeights;
    cout<<"Destructor of AttributedWeightedGraph."<<endl;}


void AttributedWeightedGraph::appendWeight(int nodeId1,int nodeId2,int weight){
    if ( nodeId1 < 0 || nodeId2 < 0) {
        cout << "node IDs Not Found." << endl;
        return;
    }

    // Assign the weight to both directions in the 2D array (undirected graph)
    edgeWeights[nodeId1][nodeId2] = weight;
    edgeWeights[nodeId2][nodeId1] = weight;
}


void AttributedWeightedGraph::printNeighbors(int nodeId) {
    if (nodeId >= elements || nodeId < 0) {                // Valididity Check
        cout << "Node ID not found." << endl;
        return;
    }

    cout << "Neighbors of Node " << nodeId << ":" <<endl;

    for (int i = 0; i < elements; ++i) {
        if (edgeWeights[nodeId][i] > 0) {         // edgeweight[10,0] >> 10 is the ID and (10,0) is the place where its weight is stored.
            cout << "Node " << i << ": \nWeight: " << edgeWeights[nodeId][i]<<endl;
            AttributedGraph2::printNeighbors(nodeId);
            
        }
    }
}

void AttributedWeightedGraph::printData() {
    // Print ID, City, proffesion, gender, Age, Weight between Nodes
        AttributedGraph1::printGraphData();
        AttributedGraph2::printData();
    for (int i = 0; i < elements; i++) {
        for (int j = 1; j < elements; j++) {
            if (edgeWeights[i][j] != 0) {
                cout << "Weight between Node " << nodes[i]->getNodeId() << " and " << nodes[j]->getNodeId() << ": " << edgeWeights[i + 1][j + 1] << endl;
            }
        }
    }
}

void AttributedWeightedGraph::sendMessage()
    {
    cout<<"\nThis is AttributedWeighted sendMessage() function."<<endl;
}