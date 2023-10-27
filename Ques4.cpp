// #include<iostream>
// #include"AttributedGraph1.h"
// #include"AttributedGraph1.cpp"
// #include"AttributedGraph2.h"
// #include"AttributedGraph2.cpp"
// #include"AttributedNode1.h"
// #include"AttributedNode1.cpp"
// #include"AttributedNode2.h"
// #include"AttributedNode2.cpp"

// // #include"SimpleGraph.h"
// // #include"SimpleGraph.cpp"
// // #include"SimpleNode.h"
// // #include"SimpleNode.cpp"
// using namespace std;

// class AttributedWeightedGraph : public AttributedGraph2{
//     protected:
//     int** edgeWeights;           // 2D array to store edge weights
//     int elements;                // size of the graph

//     public:
//     AttributedWeightedGraph();
//     AttributedWeightedGraph(int elements);
//     ~AttributedWeightedGraph();
//     void appendWeight(int nodeId1, int nodeId2, int weight);
//     void printNeighbors(int nodeId);
//     void printData();

//     void edgeweightArray(int elements);
// };

// AttributedWeightedGraph::AttributedWeightedGraph(){
//     edgeWeights=nullptr;

//     edgeWeights = new int*[elements];               //Column
//     for (int i = 1; i < elements+1; i++) {
//         edgeWeights[i] = new int[elements+1];           // Rows
//         // Initialize all edge weights to zero
//         for (int j = 1; j < elements+1; j++) {
//             edgeWeights[i][j] = 0;
//         }
//     }
//     cout<<"Default Constructor of AttributedWeightedGraph."<<endl;}

//     AttributedWeightedGraph::AttributedWeightedGraph(int elements){
//     this->elements = elements;
//     // Allocate memory for the 2D array of edge weights
//     edgeWeights = new int*[elements+1];               //Column
//     for (int i = 1; i < elements+1; ++i) {
//         edgeWeights[i] = new int[elements+1];           // Rows
//         // Initialize all edge weights to zero
//         for (int j = 1; j < elements+1; ++j) {
//             edgeWeights[i][j] = 0;
//         }
//     }
//     }

//     void AttributedWeightedGraph::edgeweightArray(int elements){
//         this->elements = elements;
//         cout<<"EdgeWeight Array"<<endl;

//         for(int i=1; i<elements+1; i++){
//             for(int j=1; j<elements+1; j++){
//                 cout<<edgeWeights[i][j]<<"  ";
//             }
//             cout<<endl;
//         }
//     }

    
// AttributedWeightedGraph::~AttributedWeightedGraph(){
//     for (int i = 0; i < elements; ++i) {
//         delete[] edgeWeights[i];
//     }
//     delete[] edgeWeights;
//     cout<<"Destructor of AttributedWeightedGraph."<<endl;}


// void AttributedWeightedGraph::appendWeight(int nodeId1,int nodeId2,int weight){
//     if ( nodeId1 < 0 || nodeId2 < 0) {
//         cout << "node IDs Not Found." << endl;
//         return;
//     }

//     // Assign the weight to both directions in the 2D array (undirected graph)
//     edgeWeights[nodeId1][nodeId2] = weight;
//     edgeWeights[nodeId2][nodeId1] = weight;
// }


// void AttributedWeightedGraph::printNeighbors(int nodeId) {
//     if (nodeId >= elements || nodeId < 0) {                // Valididity Check
//         cout << "Node ID not found." << endl;
//         return;
//     }

//     cout << "Neighbors of Node " << nodeId << ":" <<endl;

//     for (int i = 0; i < elements; ++i) {
//         if (edgeWeights[nodeId][i] > 0) {         // edgeweight[10,0] >> 10 is the ID and (10,0) is the place where its weight is stored.
//             cout << "Node " << i << ": \nWeight: " << edgeWeights[nodeId][i]<<endl;
//             AttributedGraph2::printNeighbors(nodeId);
            
//         }
//     }
// }

// void AttributedWeightedGraph::printData() {

//     // Loop through all nodes and print their data, neighbors, weights, and attributes
//     for (int i = 0; i < elements; i++) {

//         AttributedGraph1::printGraphData();

//         for (int j = 1; j < elements; j++) {
//             if (edgeWeights[i][j] != 0) {
//                 cout << "Weight between Node " << nodes[i]->getNodeId() << " and " << nodes[j]->getNodeId() << ": " << edgeWeights[i + 1][j + 1] << endl;
//             }
//         }

//         AttributedGraph2::printData();
//     }

// }

// int main() {
//     // AttributedWeightedGraph g;

//     int total_number_of_Nodes, id, num_of_neighbours, neighbour1, neighbour2;

//     cout << "How Many Nodes do you want to add: " << endl;
//     cin >> total_number_of_Nodes;

//     AttributedWeightedGraph graph(total_number_of_Nodes);

//     for (int i = 0; i < total_number_of_Nodes; i++) {
//         cout << "Enter the ID of Node " << i + 1 << ": " << endl;
//         cin>>id;

//         graph.SimpleGraph::addNode(id);
//         graph.AttributedGraph2::appendAttributes(id);
//     }

//     // New Array of Nodes to access it here.
//     SimpleNode** nodesArray = graph.getnodes();

//     for (int i = 0; i < total_number_of_Nodes; i++) {
//         int nodeId = nodesArray[i]->getNodeId();
//         cout << "Node ID: " << nodeId << endl;
//     }
//     cout<<endl<<endl;
    
//     graph.edgeweightArray(total_number_of_Nodes);

//     cout<<endl<<endl;

//     for (int i = 0; i < total_number_of_Nodes; i++) {
//         for (int j = i + 1; j < total_number_of_Nodes; j++) {
//             int id1,id2;

//             id1 = nodesArray[i]->getNodeId();
//             id2 = nodesArray[j]->getNodeId();
            
//             cout << "Enter the weight between Node " << id1 << " and Node " << id2<< ": ";
//             int weight;
//             cin >> weight;
//             graph.appendWeight(id1, id2, weight);

//             graph.edgeweightArray(total_number_of_Nodes);

//         }
//     }



//     cout << "How many Neighbours do you want to add: " << endl;
//     cin >> num_of_neighbours;

//     for (int i = 0; i < num_of_neighbours; i++) {
//         cout << "\nSet " << i + 1 << " of Neighbours: " << endl;
//         cout << "Enter ID of Neighbour 1: " << endl;
//         cin >> neighbour1;
//         cout << "Enter ID of Neighbour 2: " << endl;
//         cin >> neighbour2;
//         graph.SimpleGraph::addEdge(neighbour1, neighbour2);
//     }

//     graph.AttributedGraph1::appendAttributes();
//     graph.printData();

//     return 0;
// }

#include<iostream>
#include"AttributedGraph1.h"
#include"AttributedGraph1.cpp"
#include"AttributedGraph2.h"
#include"AttributedGraph2.cpp"
#include"AttributedNode1.h"
#include"AttributedNode1.cpp"
#include"AttributedNode2.h"
#include"AttributedNode2.cpp"
// #include"SimpleGraph.h"
// #include"SimpleGraph.cpp"
// #include"SimpleNode.h"
// #include"SimpleNode.cpp"
using namespace std;

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
};

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
    // Allocate memory for the 2D array of edge weights
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
    // Loop through all nodes and print their data, neighbors, weights, and attributes
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

int main() {
    // AttributedWeightedGraph g;

    int total_number_of_Nodes, id, num_of_neighbours, neighbour1, neighbour2;

    cout << "How Many Nodes do you want to add: " << endl;
    cin >> total_number_of_Nodes;

    AttributedWeightedGraph graph(total_number_of_Nodes);

    for (int i = 0; i < total_number_of_Nodes; i++) {
        cout << "Enter the ID of Node " << i + 1 << ": " << endl;
        cin>>id;

        graph.SimpleGraph::addNode(id);
        graph.AttributedGraph2::appendAttributes(id);
    }

    // New Array of Nodes to access it here.
    SimpleNode** nodesArray = graph.getnodes();

    for (int i = 0; i < total_number_of_Nodes; i++) {
        int nodeId = nodesArray[i]->getNodeId();
        cout << "Node ID: " << nodeId << endl;
    }
    cout<<endl<<endl;
    
    graph.edgeweightArray(total_number_of_Nodes);

    cout<<endl<<endl;

    for (int i = 0; i < total_number_of_Nodes; i++) {
        for (int j = i + 1; j < total_number_of_Nodes; j++) {
            int id1,id2;

            id1 = nodesArray[i]->getNodeId();
            id2 = nodesArray[j]->getNodeId();
            
            cout << "Enter the weight between Node " << id1 << " and Node " << id2<< ": ";
            int weight;
            cin >> weight;
            graph.appendWeight(id1, id2, weight);

            graph.edgeweightArray(total_number_of_Nodes);

        }
    }



    cout << "How many Neighbours do you want to add: " << endl;
    cin >> num_of_neighbours;

    for (int i = 0; i < num_of_neighbours; i++) {
        cout << "\nSet " << i + 1 << " of Neighbours: " << endl;
        cout << "Enter ID of Neighbour 1: " << endl;
        cin >> neighbour1;
        cout << "Enter ID of Neighbour 2: " << endl;
        cin >> neighbour2;
        graph.SimpleGraph::addEdge(neighbour1, neighbour2);
    }

    graph.AttributedGraph1::appendAttributes();
    graph.printData();

    return 0;
}

