#include "Thing.h"

Thing::Thing(std::string name, int weight, int cost): name(name), weight(weight), cost(cost)
{
}

int Thing::getCost() const
{
    return cost;
}

int Thing::getWeight() const
{
    return weight;
}

std::string Thing::getName() const
{
    return name;
}

Thing::~Thing()
{
}

/*
std::ostream& operator<<(std::ostream& os, const Thing& thing)
{
    os << thing.getName();
    os << ": weight=";
    os << thing.getWeight();
    os << " cost=";
    os << thing.getCost();
    return  os; 
}
*/