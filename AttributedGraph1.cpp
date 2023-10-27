#include <iostream>

#include "AttributedGraph1.h"

using namespace std;

AttributedGraph1::AttributedGraph1():SimpleGraph(){
    Attributednodes = new AttributedNode1[numNodes];
    cout<<"Default Constructor of Attributed Graph 1."<<endl;
}
void AttributedGraph1::appendAttributes() {
    for (int i = 0; i < numNodes; i++) {
        int nodeId = nodes[i]->getNodeId();                        // SimpleNode>> getNodeID

        char gender;
        int age;

        cout << "Enter gender for node with ID " << nodeId << ": ";
        cin >> gender;
        cout << "Enter age for node with ID " << nodeId << ": ";
        cin >> age;

        Attributednodes[i].setGender(gender);
        Attributednodes[i].setAge(age);
    }
}

void AttributedGraph1::printGraphData() const {
    for (int i = 0; i < numNodes; i++) {
        cout << "Node ID: " << nodes[i]->getNodeId() << endl;
        cout << "Gender: " <<Attributednodes[i].getGender() << endl;
        cout << "Age: " << Attributednodes[i].getAge() << endl;
        cout << " \n";
       nodes[i]->getNeighbors();
        cout << endl;
    }
}

AttributedGraph1::~AttributedGraph1() {
    delete[] Attributednodes;
    cout << "Destructor of AttributedGraph1." << endl;
}

void AttributedGraph1::sendMessage()
{
    cout<<"This is AttributedGraph1 sendMessage() function."<<endl;

}


//print Function of Q5;
void AttributedGraph1::print(){
    AttributedGraph1::printGraphData();
}