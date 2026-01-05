# cppDSA

This repo is to save my DSA progress and keep track of what I am doing.

## Variables (learned so far)
- `int` — whole numbers
- `double` — decimals
- `char` — single characters
- `bool` — true or false (case-sensitive)
- `std::string` — strings

## Keywords
- `const`
  - Cannot be changed later
  - Gives a compile-time error if modified
  - Common naming convention is **ALL CAPS**
- `namespace`
    - works like a object has own local variables
    - can we use like namespace_name::variable_name
    - if i type using namespace namespace_name, when i use a variable which exists in that namespace i dont need to add the prefix like namespace_name::
    - but from different name space i need to add the prefix 
    - you can type using namespace std and now use cout instead of std::cout but it is not a good practice 
    - rather use using std::cout or std::string does the same job but is safer and does not cause any ambiguity 
    - multiple name spaces can have variables with same identifier 
