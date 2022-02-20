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
    friend std::ostream& operator<<(std::ostream& os, Thing const& thing);

};





#endif
