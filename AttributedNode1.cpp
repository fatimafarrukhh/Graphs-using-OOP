#include<iostream>
#include "AttributedNode1.h"
using namespace std;

AttributedNode1::AttributedNode1():gender('O'), Age(1){}
AttributedNode1::AttributedNode1(char gen, int age): gender(gen), Age(age){}
void AttributedNode1::setGender(char gen){gender = gen;}
char AttributedNode1::getGender(){return gender;}

void AttributedNode1::setAge(int age){Age = age;}
int AttributedNode1::getAge(){return Age;}
AttributedNode1::~AttributedNode1(){
    cout<<"Destructor Called by AttributedNode1."<<endl;
}
