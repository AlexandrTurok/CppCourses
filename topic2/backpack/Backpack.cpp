#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include "Thing.h"
#include "Backpack.h"

Backpack::Backpack(int maxW): maxW(maxW)
{
    totalCost = 0;
    totalWeight = 0;
}

bool Backpack::addThing(Thing& thing)
{
    if (thing.getWeight() + totalWeight > maxW) {
        return false;
    }
    things.push_back(thing);
    totalWeight += thing.getWeight();
    totalCost += thing.getCost();
    return true;
}

void Backpack::showThings() const
{
    for(auto& val: things)
    {

        std::cout << std::setw(10);
        std::cout << val;
        std::cout << '\n';
    }
    std::cout << "Total cost= " << totalCost << '\n';
    std::cout << "Total weight= " << totalWeight << '\n';
}

std::vector<Thing> Backpack::getAllThings() const
{
    return things;
}


Backpack::~Backpack()
{
}

