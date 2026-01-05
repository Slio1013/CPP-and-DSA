#include <iostream>
int main(){
    // Data types and declaration
    int a = 10; // Identifiers store thje value assigned to them and can be used later 
    double b = 10.99;
    char c = 'A'; //Single charaters btw 
    bool d = true;
    // The identifiers here are a,b,c,d
    // Special declaration of a string 
    std::string e = "Slio";
    std::cout << "HI! " << e << " The sum is " << a+b; // use << to join strings & variables while printing
    // Note: << is also used for left shift so be careful when it comes to integers 

}