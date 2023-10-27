#include <iostream>
#include"SimpleGraph.h"
#include"SimpleGraph.cpp"
#include"SimpleNode.h"
#include"SimpleNode.cpp"
#include "AttributedGraph2.h"

using namespace std;

    AttributedGraph2::AttributedGraph2()
    {   
       // SimpleGraph();                 // Explicitly call BAse class Member
        AttrNodes2 = new AttributedNode2*[numNodes];
    }
    AttributedGraph2::AttributedGraph2(int nodes)
    {
        AttrNodes2 = new AttributedNode2*[numNodes];
    }
    AttributedGraph2::~AttributedGraph2()
    {
        delete[] AttrNodes2;
    }

    void AttributedGraph2::appendAttributes(int nodeid)
    {
        for (int i=0;i<numNodes;i++)
        {   string location;
            string profession;
            if(nodes[i]->getNodeId() == nodeid)
            {   cout<<"Enter City Name: "<<endl;
                cin>>location;
            {   cout<<"Enter Profession: "<<endl;
                cin>>profession;
                AttrNodes2[i] = new AttributedNode2();
                AttrNodes2[i]->setCityName(location);
                AttrNodes2[i]->setProfession(profession);
            }
        }
    }
    }

    void AttributedGraph2::printNeighbors(int nodeId)
    {
        for(int i=0;i<numNodes;i++)
        {
            if (nodes[i]->getNodeId()==nodeId)
            {
                cout<<"\nNode ID: "<<nodeId<<endl;
                cout<<"City Name: "<<AttrNodes2[i]->getCityName();
                cout<<"Profession: "<<AttrNodes2[i]->getProfession();
            }
        }    
    }

    void AttributedGraph2::printData()
    {
        for (int i = 0; i < numNodes; i++) 
        {
            cout<<"Data of Node "<<i+1<<endl;
            cout<<"\nNode "<<i+1<<" ID: "<<nodes[i]->getNodeId()<<endl;
            cout<<"City Name: "<<AttrNodes2[i]->getCityName()<<endl;
            cout<<"Profession: "<<AttrNodes2[i]->getProfession()<<endl;
            SimpleGraph::printNeighbors(nodes[i]->getNodeId());
            cout<<endl;
        }          
    }

//Q5
void AttributedGraph2::sendMessage()
{
    cout<<"\nThis is AttributedGraph2 calling the function.\n";
}

void AttributedGraph2::print(){
    AttributedGraph2::printData();
}