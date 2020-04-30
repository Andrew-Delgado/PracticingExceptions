#include "functions.h"

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
   string output =  "Name: " + name + "\nAge: " + to_string(age);

   return output;
}


ostream& operator<<(ostream &stream, const Person &p){

    return stream << "Person(Name: " << p.name << " Age: "<< p.age<< ")";
}

