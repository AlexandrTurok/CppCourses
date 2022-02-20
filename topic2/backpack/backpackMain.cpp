#include <vector>
#include <algorithm>
#include "Backpack.h"
#include "Thing.h"

int main ()
{
    // Create backpack with maxW==60
    Backpack backpack{60};

    // Create box with things
    std::vector<Thing> box{
                            Thing{"Beer", 2, 3},
                            Thing{"Dark Beer", 5, 9},
                            Thing{"Fish", 5, 30},
                            Thing{"Ground", 1000, 1},
                            Thing{"Gold", 1, 3000},
                            Thing{"Jacket", 3, 30},
                            Thing{"Phone", 1, 200},
                            Thing{"A", 1, 1},
                            Thing{"B", 5, 5},
                            Thing{"C", 8, 10},
                            Thing{"D", 11, 1},
                            Thing{"E", 15, 5},
                            Thing{"F", 18, 10},
                            Thing{"G", 20, 1},
                            Thing{"H", 25, 15},
                            Thing{"J", 30, 20}
                            };
    
    // Sorting things by price-to-weight ratio
    std::sort(box.begin(), box.end(), [](Thing a, Thing b){return static_cast<double>(a.getCost())/static_cast<double>(a.getWeight()) > static_cast<double>(b.getCost())/static_cast<double>(b.getWeight());});
    
    // Add things from the box to the backpack
    for(auto val: box)
    {
        // The addThing method does not allow you to add an item to the backpack that weighs more than the remaining space in the backpack.
        backpack.addThing(val);
    }
    
    backpack.showThings();

    return 0;
}