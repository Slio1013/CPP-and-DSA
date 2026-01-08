# CPP-and-DSA

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
    - Works like a object, has own local variables
    - Can we use like namespace_name::variable_name
    - If I type using namespace namespace_name, when i use a variable which exists in that namespace i dont need to add the prefix like namespace_name::
    - But from different name space i need to add the prefix 
    - You can type using namespace std and now use cout instead of std::cout but it is not a good practice 
    - Rather use using std::cout or std::string does the same job but is safer and does not cause any ambiguity 
    - Multiple name spaces can have variables with same identifier 
- `typedef` 
	- Used to rename datatypes so that it is easier to write the code
	- Very use full when it comes to nexted datatypes (Hopefully they call it that)