#include <iostream>
#include "functions.h"

using namespace std;

int main(){
    
    Person p1 = Person("Andrew", 24);

    cout << p1.toString() << endl;

    cout << p1 << endl;
}