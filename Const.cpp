#include <iostream>
int main(){
    // Explains how const key word is used 
    const double PI = 3.14159;
    PI = 10; // const variable once declared cannot be changed later in the code 
    // naming convention for const is all caps
    // This code gives you error
    std::cout << PI;
    return 0;
}