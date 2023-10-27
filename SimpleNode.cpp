#include <iostream>

#include "SimpleNode.h"
using namespace std;

SimpleNode::SimpleNode() {
    nodeId = 0;
    neighborCount = 0;
    arrNeighbors = nullptr;
}

SimpleNode::SimpleNode(int nodeId, int count) {
    this->nodeId = nodeId;
    this->neighborCount = count;
    arrNeighbors = new SimpleNode*[count];
    // cout << "Node " << nodeId << " created." << endl;
}


void SimpleNode::addEdge(const SimpleNode& neighbor) {
    SimpleNode** newNeighbors = new SimpleNode*[neighborCount + 1];
    for (int i = 0; i < neighborCount; i++) {
        newNeighbors[i] = arrNeighbors[i];
    }

    delete[] arrNeighbors;
    arrNeighbors = newNeighbors;
    arrNeighbors[neighborCount] = const_cast<SimpleNode*>(&neighbor);
    neighborCount++;
}

void SimpleNode::setNodeId(int id) {
    nodeId = id;
}

int SimpleNode::getNodeId() const {
    return nodeId;
}
void SimpleNode::setNeighborCount(int count) {
    neighborCount = count;
}
int SimpleNode::getNeighborCount() const {
    return neighborCount;
}

void SimpleNode::getNeighbors() const {
    cout << "Neighbors of Node " << nodeId << ": ";
    for (int i = 0; i < neighborCount; i++) {
        cout << arrNeighbors[i]->getNodeId() << " ";
    }
    cout << endl;
}

SimpleNode::~SimpleNode() {
    delete[] arrNeighbors;
    cout<<"This is The Destructor of SimpleNode Class"<<endl;
    cout << "Node " << nodeId << " destroyed." << endl;
}
