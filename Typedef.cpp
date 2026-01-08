#include <iostream>

typedef std::string str; // this renames std::string to str which makes it easy for us to write the code 
typedef double decimal; // Works for this too 

int main(){
    str a = "This is a string";
    decimal b = 10.1;
    std::cout << a <<" "<< b;
}
