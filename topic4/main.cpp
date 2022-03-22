#include<iostream>

struct Student
{
    char name[29];
    char surname[40];
    int faculty;
    int group;
    char email[50];
};
struct Student2
{
    int faculty;
    int group;
    char name[29];
    char surname[40];
    char email[50];
};

// Static array for 30 Students
Student students[30];

int main()
{

    int numStudents;
    std::cout << "Input num of students:";
    std::cin >> numStudents;

    // Allocate array of Student
    Student *dinamicArr = new(std::nothrow) Student[numStudents];

    if(dinamicArr == nullptr){
        std::cerr << "Allocation returned nullptr\n";
        std::exit(-1);
    }

    dinamicArr->group = 3;
    //Access to first element using operator *
    Student first = *dinamicArr;
    std::cout << first.group << std::endl;

    std::cout << "Size of dinamicArr = " << sizeof(Student) * numStudents << std::endl;

    for(int i=0; i<numStudents; i++, dinamicArr++)
    {
        std::cout << i << ": " << dinamicArr;
        if(i>0){
            size_t delta = (size_t) dinamicArr - (size_t) (dinamicArr-1) ;
            std::cout << " delta: " << delta;
        }
        std::cout << std::endl;
    }

    std::cout << &dinamicArr->name << " " << &dinamicArr->surname << " " << &dinamicArr->faculty  << " " << &dinamicArr->group << " " << &dinamicArr->email << std::endl;

    std::cout << "Size of Student = " << sizeof(Student) << std::endl;
    std::cout << "Size of Student2 = " << sizeof(Student2) << std::endl;

    Student2 st2;

    std::cout << &dinamicArr->name << " " << &dinamicArr->surname << " " << &dinamicArr->faculty  << " " << &dinamicArr->group << " " << &dinamicArr->email << std::endl;
    std::cout << &st2.name << " " << &st2.surname << " " << &st2.faculty  << " " << &st2.group << " " << &st2.email << std::endl;
 

    return 0;
}