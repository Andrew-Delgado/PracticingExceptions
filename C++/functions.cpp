#include "functions.h"
#include <iostream>
#include <vector>
#include "MyException.cpp"

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

// Has it's own try-catch and own exception number
void Person::method2(){
    try{

        vector<int> andrew = {1,2,3,4,5};
        int i = 5;
        if(i > andrew.size() -1) throw 1;

    }catch(int x){
        cout << "method2: out of range" << endl;
    }
}

// Default catch-all block
void Person::method3(){
    try{
        int num1;
        cout << "Enter first number: ";
        cin >> num1;

        int num2;
        cout << "Enter second number: ";
        cin >> num2; 

        if(num2 == 0) throw 0;

        cout << num1/num2 << endl;

    }catch(...){
        cout << "Cannot divide by zero" << endl;
    }
}

// Uses the custom exception class
void Person::method4(){
    try{   
        int x = -1;

        if(x < 0) throw MyException();

    }catch(MyException &e){
        cout << e.what() << endl;
    }
}