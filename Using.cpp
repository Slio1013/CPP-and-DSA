#include <iostream>
using str = std::string; // does the same as typedef
using decimal = double;


int main(){
    str a = "This is a string";
    decimal b = 10.1;
    std::cout << a <<" "<< b;
}