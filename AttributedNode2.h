#ifndef ATTRIBUTEDNODE2_H
#define ATTRIBUTEDNODE2_H
// #include <string>
using namespace std;

class AttributedNode2{
    protected:
    string Profession;
    string CityName;

    public:
    AttributedNode2();
    ~AttributedNode2();
    void setProfession(string profession);
    string getProfession();
    
    void setCityName(string cityname);
    string getCityName();
};

#endif  // ATTRIBUTEDNODE2_H
