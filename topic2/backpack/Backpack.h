#ifndef BACKPACK_H
#define BACKPACK_H
#include "Thing.h"
class Backpack
{
private:
    int maxW;
    int totalWeight;
    int totalCost;
    std::vector<Thing> things;
public:
    Backpack(int maxW);
    ~Backpack();
    bool addThing(Thing& thing);
    void removeThing(Thing thing);
    std::vector<Thing> getAllThings() const;
    void showThings() const;
};

#endif