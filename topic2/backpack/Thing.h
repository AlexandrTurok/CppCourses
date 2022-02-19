#ifndef THING_H
#define THING_H

#include <string>
class Thing
{
private:
    std::string name;
    int weight;
    int cost;
public:
    Thing(std::string name, int weight, int cost);
    ~Thing();
    int getWeight() const;
    int getCost() const;
    std::string getName() const;
};


//std::ostream& operator<<(std::ostream& out,  Thing& thing);


#endif
