#ifndef INT_H
#define INT_H


#include<iostream>

class Int
{
private:
    int a;
public:

    Int():a(0){};
    Int(int a);
    Int(Int& a);
    
    int get() const {return a;}
    
    Int& operator= (const Int& I);
    Int& operator= (const int& i);

//    Int& operator+ (const Int& I);

    Int& operator- (const Int& I);
    Int& operator* (const Int& I);
    Int& operator/ (const Int& I);

    Int& operator+ (const int&);
    Int& operator- (const int&);
    Int& operator* (const int&);
    Int& operator/ (const int&);

    friend std::ostream& operator<< (std::ostream& out, Int const& I);
    friend std::ostream& operator>> (std::ostream& in, Int const& I);
    friend Int operator+ (Int& rv, Int& lv);

};



#endif