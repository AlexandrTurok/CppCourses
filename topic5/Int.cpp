#include "Int.h"

Int::Int(int _a): a(_a){}
Int::Int(Int& I): a(I.a){}

std::ostream& operator<< (std::ostream& out, Int const& I)
{
    return out << I.get();
}

Int& Int::operator= (const int& i)
{
    a = i;
    return *this;
}

Int& Int::operator= (Int const& I)
{
    a = I.a;
    return *this;
}

Int operator+ (Int& rv, Int& lv)
{
    Int res = lv.a + rv.a;
    return res;
}

Int& Int::operator- (const Int& I)
{
    a -= I.a;
    return *this;
}
Int& Int::operator* (const Int& I)
{
    a *= I.a;
    return *this;
}
Int& Int::operator/ (const Int& I)
{
    a /= I.a;
    return *this;
}

Int& Int::operator+ (const int& i)
{
    a += i;
    return *this;
}

Int& Int::operator- (const int& i)
{
    a -= i;
    return *this;
}

Int& Int::operator* (const int& i)
{
    a *= i;
    return *this;
}

Int& Int::operator/ (const int& i)
{
    a /= i;
    return *this;
}

