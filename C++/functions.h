#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <ostream>

using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person();
        Person(string newName, int newAge);
        void setAge(int newAge);
        int getAge();
        string toString();
        
        // you only need to add friend to the header file
        friend ostream& operator<<(ostream&, const Person&);
};
#endif