#ifndef SIMPLENODE_H
#define SIMPLENODE_H


// Class SimpleNode
class SimpleNode {
protected:
    int nodeId;
    int neighborCount;
    SimpleNode** arrNeighbors;

public:
    SimpleNode();                                                          // Default Constructor
    SimpleNode(int nodeId, int count);                                     // Overloaded Constructor
    ~SimpleNode();                                                         // Destructor

    //functions
    void addEdge(const SimpleNode& neighbor);                              // Create Link 
    void getNeighbors() const;

    //Setters and Getters of SimpleNode
    void setNodeId(int nodeid);         
    int getNodeId() const;
    void setNeighborCount(int count);
    int getNeighborCount() const;
};

#endif  // SIMPLENODE_H
