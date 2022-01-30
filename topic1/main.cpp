#include <iostream>

class Person
{
private:
    std::string name;
    std::string surname;
    int age;
    float averageScore; // Average score on the assessment
public:
    Person(std::string name, std::string surname, int age, float averageScore);

    // Getters and setters.
    void setAverageScore(int averageScore) {this->averageScore = averageScore;}
    float getAverageScore() const { return averageScore;}
    int getAge() const {return age;}
    std::string getName() const {return name;}
};

Person::Person(std::string name, std::string surname, int age, float averageScore): name(name), surname(surname), age(age), averageScore(averageScore) {}

Person persons[3] = {Person("David", "Davidov", 23, 45), Person("Josef", "Marconi", 43, 90), Person("Ben", "Lerman", 33, 30)};

//Bubble sort function for array of Persons
void sortPerson(Person* persons, int length)
{
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-1; j++) {
            if (persons[j].getAverageScore() < persons[j + 1].getAverageScore()) {
                Person b = persons[j]; 
                persons[j] = persons[j + 1]; 
                persons[j + 1] = b; 
            }
        }
    }
}

// Count avarage age of Person array
double avarageAge(Person* persons, int length)
{
    long summ = 0;
    for(int i=0; i<length; ++i){
        summ += persons[i].getAge();
    }
    return (double) summ/length;
}

void showPersonsArr(Person* persons, int length)
{
    for(int i=0; i<length; ++i)
    {
        std::cout << persons[i].getName() << " " << persons[i].getAge() << " years old. Average score is: " << persons[i].getAverageScore() << std::endl;
    }
}

int main()
{
    int pers_length = sizeof(persons)/sizeof(persons[0]);
    showPersonsArr(persons, pers_length);
    sortPerson(persons, pers_length);
    showPersonsArr(persons, pers_length);

    std::cout << "Average age: " << avarageAge(persons, pers_length) << std::endl;
 
    return 0;
}
