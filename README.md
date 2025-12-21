# C++ Tutorial 
This is a repo for learning C++ in CS330 Programming Languages at Simmons University

## History and Uses
C++ was officially released in 1985, created by Bjarne Stroustrup, a Danish computer scientist
working at AT&T Bell Labs in Murray Hill, New Jersey. Stroustrup wanted a language that built 
off the foundation of C but with more features such as different functions, better type checking, 
classes, etc. in order to support larger software development. 

C++ is a general purpose programming language. It can be seen in many areas, including:
- Game design and graphics
- Operating Systems
- Embedded systems and frmware
- Compilers
- Browsers
- Databases
- and much more?

## Installation
To install C++ and start compiling programs, you need a compiler. Common choices include:
- macOS/Linux: Clang or GCC (GNU Compler Collection)
- Windows: MinGW-w64 or Microsoft Visual C++ Build Tools

## Programming Environemnt / IDE
C++ does not require a specific IDE. Many options exist, including:
- Visual Studio Code (VS Code, plugin support)
- Visual Studio (VS)
- CLion
- Xcode
- Code::Blocks

- My Choice: Visual Studio Code

## Running Programs
To compile a program fron the terminal:
```
g++ fileame.cpp -o program
```
then run:
```
./program
```
On Windows MinGW:
```
program.exe
```

## Writng Comments in C++
Single line comments 
```
// this is a comment
```
Multi-line block comment
```
/*
comments can be
several lines
long
*/
```

**Sources:**
https://en.wikipedia.org/wiki/C%2B%2B 
https://www.geeksforgeeks.org/cpp/history-of-c/ 

## Naming Conventions
### Does C++ have reserved words?
Yes, C++ has about 90+ reserved keywords (though this depends on the standard version, c++11, C++20, etc). 
Some of these reserved words include: ``int``, ``class```, ``if``, ``else``, ``for``, ``return``, ``const``, ``while``.
The compiler obstructs from using them as identifiers. 

## Data Types

## Control Statements
*see fopc_controls.cpp for executable code examples

### Boolean Values
A boolean type is *bool*, which can take the values **true (1)** or **false(0)**. A boolean variable is declared with the *bool* keyword and can take the values *true* or *false*.

### Conditional Statements
#### *if* statement
The **if** statement is used to specify a block of code to be executed if a condition is true. Note that **if** is in lowercase, changing either or both letters to uppercase will produce an error.
```
if (some conditions)
  // statements
end
```
If the condition is true then do something, and if not then do something else.

#### *else* statement
The **else** statement is used to specify a block of code to be executed if the condition is false.
```
if (condiition)
// execute if the condition is true
} else {
// execute if the condition is false
}
```
#### *else if* statement
The **else if** statemennt is used to specify a new condition if the initial condition is false.
```
if (condition1) {
// execute soem code if condition1 is true
} else if (condition2) {e
// execute some code if condition1 is false and condtion2 is true
} else {
// execute some code if condition1 and condition2 is fals
```

#### *switch* statement

## Code Delimiters

## Short-Circuit Evaluation

## Problems...
### dangling else problem...

## Loops
### While
### For
### etc

## Block Variables vs Function Variables

## Functions

### What is the syntax for declaring a function?
### Rules about function placement
### Recursive functions
### Multiple Parameters 
### Returning multiple values at the same time
### Pass-by reference and Pass-by value
### 

## Classes & Inheritance
### Does C++ support objects / structs / records? 
Yes, C++ supports *class* and *struct* types, which are user-defined types that can contain data members (instance variables), member functions (methods), nested types, static mebers, etc. A *class* and a *struct* are nearly identical, the only difference being default access (private for class, public for struct). In C++ the term 'object' generally means an instance of any type (built-in or urser-defined).

Example:
```
struct Point {  // default publiic
  double x, y;
  double length() coonst {return std::hypot(x,y); }
};
class Person{ // default private
  std::string name;
public:
  Person(std::string n): name(std::move(n)) {}
  const std::string& getName() const { return name; }
};
```

### Naming conventions for objects, instance variables, and functions
C++ does not enforce naming conventions, but common community conventions help readability and consistency: 
- **Types (classes/structs/enum)**: PascalCase or CamelCase (Person, HttpServer, MyStruct)
- **Functions & Methods**: snake_case or camelCase depending on project style (compute_bug, getValue, toString).
- **Member variables**: m_prefix or trailing underscore to distinguish from parameters (m_value, value_). Example: int value_ or int m_value.
- **Constants/macros**: kPascalCase or ALL_CAPS (macros usually ALL_CAPS).
- **Namespaces**: lowercase or company::project style.

Pick a style consistent with your project. Conventions are typically community/team-driven rather than language-enforced.

### Standard methods for a common purpose 

### How does inheritance work? Multiple inheritance?

### If there is inheritance, how does C++ deal with overloading method names and resolving calls?

## Further notes about objects and inheritance 


## Resources

**Books:**
- The C++ Programming Language by Bjarne Stroustrup (4th Ed)
- Link: https://chenweixiang.github.io/docs/The_C++_Programming_Language_4th_Edition_Bjarne_Stroustrup.pdf
  
- C++  Primer by Stanley B. Lippman, Josee Lajoie, and Barbara E. Moo (5th Ed.)
- Link: https://bytes.usc.edu/cs455saty/m23_WhyCode/extras/docs/CPPPrimer.pdf 

**Websites:**
- C++ Reference: https://cppreference.com/ 
- cplusplus: https://cplusplus.com/

This list may be updated occasionally.
