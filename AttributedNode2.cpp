#include<iostream>
using namespace std;

#include "AttributedNode2.h"
  
    AttributedNode2::AttributedNode2():Profession("X"), CityName("X"){cout<<"This is the default Constructor of AttributeNode2"<<endl;}
    AttributedNode2::~AttributedNode2(){cout<<"Destructor of AttributedNode2."<<endl;}
    
    void AttributedNode2::setProfession(string profession){Profession = profession;}
    void AttributedNode2::setCityName(string cityname){CityName = cityname;}
    string AttributedNode2::getProfession(){return Profession;}
    string AttributedNode2::getCityName(){return CityName;}
