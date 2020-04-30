#include <exception>
//#include <iostream>

using namespace std;

// Custom exception class
class MyException: public exception{
    public:
        virtual const char* what() const throw(){
            return "Exception thrown from class";
        }
};