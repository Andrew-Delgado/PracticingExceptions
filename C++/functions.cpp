#include "functions.h"
#include <iostream>
#include <vector>

using namespace std;

Person::Person(){
    name = "null";
    age = 0;
}

Person::Person(string newName, int newAge){
    name = newName;
    age = newAge;
}

void Person::setAge(int newAge){
    age = newAge;
}

int Person::getAge(){
    return age;
}

string Person::toString(){
    // Showing how to add an into to a string
   string output =  "Name: " + name + "\nAge: " + to_string(age);

   return output;
}


ostream& operator<<(ostream &stream, const Person &p){
    // overloading the '<<' operator
    return stream << "Person(Name: " << p.name << " Age: "<< p.age<< ")";
}

// Has it's own try-catch
void Person::method1(){
    try{

        vector<int> andrew = {1,2,3,4,5};
        int y = andrew.at(6);

    }catch(out_of_range){
        cout << "out of range" << endl;
    }
}

// Throws the exception to where it was called
void Person::method2() throw (out_of_range){
    // I read on stack overflow that this is bad practice.
}

// Uses the custom unchecked exception class
void Person::method3(){

}
