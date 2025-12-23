// PLP-2 –> Data Types & Naming Conventions

// "#includes" are header files, they are needed in order to use
// things such as input/output, strings, vectors, and maps.
// they are a part of the C++ standard library.

#include <iostream> // gives access to tools for input/output programming
#include <string>   // gives access to the std::string class, allowing the creation/managment of strings.
#include <vector>   // gives access to the std::vector class, allowing creation/management of vectors and resizing
#include <map>  // gives access to the std::map class, containers that store data as sorted pairs of keys and values.

using namespace std;    // lets you use standard library names without having to use "std::" everytime

int main() {
    // C++ naming conections: variables are case sensitive, they must start with
    // a letter or underscore (_), NOT a number or symbols like @, $, %, &, etc..
    // typically written in camelCase or snake_case.

// COMMON DATA TYPES:
    int theInteger = 10;   // int (integer) –> whole numbers only
    double theFloat = 2.5; // double (floating point) –> numbers with decimals
    bool youAreCool = true; // boolean –> holds only true or false values
    string theString = "Hello Fellow Programmer";   // "string" –> text in quotes

// OTHER TYPES:
   // vector -- will update soon
    vector<int> numd = [1, 2, 3};
    nums.push_back(4)l
    cout << "Vector size: " << nums.size() << endl;

    //Pointer Example;
    int x = 5;
    int* ptr = &x;
    cout << "Pointer value:  << *ptr << endl;

// OPERATIONS WITH THE SAME TYPE
    int sum = theInteger + 3;   // adds 10 + 3 = 13
    double product = theFloat * 3.0;    // multiples 2.5 * 3.0 = 7.5
    string greeting = theString + " Saluations"; // adds two strings together
// OUTPUT RESULTS
    // cout means console output
    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;
    cout << greeting << endl;

// OPERATIONS WITH MIXED TYPES
    double mixAns = theInteger + theFloat; // 10 + 2.5 = 12.5
    cout << "Mixed type operation result: " << mixAns << endl;
    // in this example, adding an int and a double will make the answer a double

// CONVERTING TYPES
    // sometimes coverting one data type to another happens implicitally, and other times explicitly (you have to manually do it).

    // EXPLICIT CONVERSION (aka TYPE CASTING)
    // ex: int –> double
    int fromDouble = static_cast<int>(theFloat);    // turns 2.5 into 2
    cout << "Double cast to int: " << fromDouble << endl;
    // ex: string –> int
    string numString = "67";
    int converted = stoi(numString);    // note: stoi stands for string to integer
    cout << "String to int is: " << converted << endl;
    
    // MUTABILITY
    theInteger = 17; // changing the original value of theInteger (which was 10)
    cout << "New theInteger value is: " << theInteger << endl;

    // CONST
    // const makes things unchangeable
    const double e = 2.71828;   // e cannot change now
    // e = 2.7 would cause an error

    // END
    return 0;   // doing this tells the computer the program finished
}


// other sources:
// https://en.cppreference.com/w/cpp/language/static_cast.html 
