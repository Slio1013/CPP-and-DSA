#include <iostream>
namespace first{
    int x = 10;
}
namespace second{
    int x = 20;
}
int main(){

    int x = 0;
    std::cout << x <<"\n"; // prints x of main
    std::cout << first::x <<"\n"; // prints x of first 
    std::cout << second::x <<"\n"; // prints x of second namespace
    
    // remove comment for his to check how it runs
    // using namespace first;
    // std::cout << x; // if x is undeclared in main this is working 

}