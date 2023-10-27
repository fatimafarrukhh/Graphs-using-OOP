#ifndef ATTRIBUTEDNODE1_H
#define ATTRIBUTEDNODE1_H

class AttributedNode1{
    protected:
    char gender;
    int Age;

    public:
    AttributedNode1();
    AttributedNode1(char gen, int age);
    ~AttributedNode1();
    void setGender(char gen);
    char getGender();

    void setAge(int age);
    int getAge();
};
#endif  // ATTRIBUTEDNODE1_H
