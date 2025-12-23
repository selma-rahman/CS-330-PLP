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
- Embedded systems and firmware
- Compilers
- Browsers
- Databases
- and much more!

## Installation
To install C++ and start compiling programs, you need a compiler. Common choices include:
- macOS/Linux: Clang or GCC (GNU Complier Collection)
- Windows: MinGW-w64 or Microsoft Visual C++ Build Tools

## Programming Environemnt / IDE
C++ does not require a specific IDE. Many options exist, including:
- Visual Studio Code (VS Code, plugin support)
- Visual Studio (VS)
- CLion
- Xcode
- Code::Blocks

- **My Choice**: Visual Studio Code

## Running Programs
To compile a program from the terminal:
```
g++ filename.cpp -o program
```
then run:
```
./program
```
On Windows MinGW:
```
program.exe
```

## Writing Comments in C++
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

## Data Types & Naming Conventions 
### Does C++ have reserved words?
Yes, C++ has about 90+ reserved keywords (though this depends on the standard version, C++11, C++20, etc). 
Some of these reserved words include: ``int``, ``class``, ``if``, ``else``, ``for``, ``return``, ``const``, ``while``.
The compiler obstructs from using them as identifiers. 

### Naming Requirements & Conventions
#### C++ variable naming rules (which are enforced by the compiler)
- Case sensitive
- Must begin with a latter or underscore
- Cannot start with a number
- Only letter, number. and underscores allowed
- Cannot use reserved keywords
#### Community conventions (not compiler enforced)
- Classes/Structs: PascalCase -> example ```TheClass```
- Methods/Functions: camelCase -> ```doSomething()```
- Variables: camelCase -> ```userCount```
- Constants: SCREAMING_SNAKE_CASE -> ```SUPER_MAX```
- Namespaces: lowercase -> ```image::render```
- Private Data: camelCase + _ suffix -> ```data_```
- Macros: SCREAMING_SNAKE_CASE -> ```GO_MODE```

#### Is C++ statically typed or dynamically typed?
C++ is **statically typed**. Variables types are determined at compile time.

#### Strongly typed or weakly typed?
C++ is generally considered strongly typed, though it allows certain implicit conversioins.
- Incompatible types cause compiler errors
- Pointers require explicit conversions
- Implicit conversions exist but are limited

#### Explicitly typed or implicitly typed?
Traditionally, C++ is explicitly typed. 
```
int x = 42;
```
However, C++11 implicit type inferece exists with ``auto``.
```
auto x = 42; // x becomes int implicitly
```
#### Mutable vs Immutable Variables
- Variables are mutable by default
- to make identifiers immutable, you can use ``const``.
```
const int x =  42;
```

#### Operators 
Operators depend on the type. Common ones include:

**int**, **float**:
- *: addition
- **-**: subtraction
- *: multiplication
- **/**: division
- **Int division**: Performs integer division, discarding any remainder
- **Floats division**: Performs floating-point division
- **%**: Modulus. Returns the remainder of division. **Only for integers**.
- **++**: Increments a value by 1
- **--**: Decrements a value by 1

**bool**:
- **&&**: Logical AND; returns ``true`` if both operands are ``true``.
- **||**: Logical OR; returns ``true`` if at least one operand is ``true``.
- **!**: Logical NOT, Inverts the value; ``true`` becomes ``false`` and vice versa
Alternatively, ``and``, ``or``, and ``not`` can be used nterchangeably with ``&&``, ``||``, and ``!``.

**NOTE**: ``&&`` and ``||`` perform short-circuiting, meaning the second operand is only evaluated if the result is not gauranteed by the first.

**Comparison Operators**:
These operators compare values and return a ``bool`` (1 for ``true``, 0 for ``false``).
- ``==`` (Equal to)
- ``!=`` (Not equal to)
- ``<``, ``>``, ``<=``, ``>=``

**string**:
- **+**: Concatenate
- **+=**: Append
- **Comparison**
- **<<**: Output stream
- **>>**: Input stream

**pointers**:
- *: accesses value at pointer address
- **&**: returns memory address of a variable
- **->**: accesses array elements via pointer
- ``new``: allocates memory on the heap and returns a pointer to it.
- ``delete``: frees memory previously  allocated with ``new``

**arrays/vector**:
- **[]**; Subscript, accesses elements by index

#### Mixed type operations
Mixed type operations are allowed in C++, as it performs **type promotion**
```
int x = 5;
double y = 2.5;
auto res = x + y; // becomes double
```

#### Limitations
- cannot add strings + ints without conversion
- cannot store mixed types in standard arrays/vectors
- must explicitly convert some data between types

### Built-In Complex Data Types
C++ includes support for complex numbers through the ``<complex>`` library. The ``std::complex<T>`` type provides an abstraction for real and imaginary components and overloads arithmetic operators.
- it stores a real part + an imaginary part
- overloads operators so the math works naturally
- the type os templated: see below
```
complex<float>
complex<double>
complex<long double>
```

## Control Statements
*see fopc_controls.cpp for executable code examples

### Boolean Values
A boolean type is *bool*, which can take the values:
- **true (1)**
- **false(0)**.

A boolean variable is declared with the *bool* keyword and can take the values *true* or *false*.

Expressions that evaluate to non-zero integers convert to true implicitly:
```
bool b6 = 4; // true
bool b7 = 0; // false
```

### Conditional Statements
C++ supports: ``if``, ``if/else``, ``if/else f/else``, and ``switch/case``.

C++ does *not* provide alternative keywords. (Such as Perl's ``unless``).

#### *if* statement
The **if** statement is used to specify a block of code to be executed if a condition is true. Note that **if** is in lowercase, changing either or both letters to uppercase will produce an error.
```
if (condition)
  // statements
}
```
If the condition is true then do something, and if not then do something else.

#### *else* statement
The **else** statement is used to specify a block of code to be executed if the condition is false.
```
if (condition)
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
``break`` us required to exit a ``switch`` statement once a matching case has executed, otherwise the program will fall through and execute all subsequent cases regardless of their conditions.
So in short:
- C++ allows fall-through between cases if break is omitted.
- You usually need ``break`` to prevent execution from continuing.
- ``continue`` does not force the evaluation of the next case, it acts on loops, instead.
- Alternatives to break include ``return``, ``goto``.

## Code Delimiters
use braces ``{}`` to form blocks in selecton and loop constructs.

example:
```
if ( x > 0) {
    cout < "positive";
}
```

## Short-Circuit Evaluation
- ``&&`` short-circuits when the left operand is false
- ``||`` short-circuits when the left operand is true

for example, the second operand s NOT evaulated here:
```
if (returns_false() && returns_true()) {
  ...
}
```

here, both are evaulated (bitwise & instead of logical &&):
```
if (returns_false() & returns_true()) {
  ...
}
```

### Dangling else problem...
``else`` always binds to the **nearest preceding unmatched if**.
for example:
```
if (a)
    if (b)
        cout << "inner";
    else
        cout << "else binds to the inner if";
```

to avoid this sort of ambiguity, use braces:
```
if (a) {
    if (b) {
        ...
    }
} else {
    ...
}
```


## Loops
C++ has the following loop types: ``for``, ``while``, ``do-while``.
| loop          | condition checked at... | typically used for...
| ------------- | -------------  | ------------------|
| for  | top/before each iteration  |  counted repetition |
| while  | top/before loop  | unknown number of iterations |
| do-while | bottom/after block runs | must run the body at least once |

## Scope: Block Variables vs Function Variables
Variables declared inside a loop *block* or *header* have block scope, they are then destroyed when the loop finishes. Variables in function scope live until the function returns.

for example:
```
for (int i = 0; i < 3; i++) {}
cout << i; // compiler error: i is not visible
```
on the other hand, variables declared before the loop persist throughout the function:
```
int i = 0;
for (; i < 3; i++) {}
cout << i; // prints 3
```

## Functions
Functions allow code to be reused, organzied,and abstracted. A function in C++ can accept parameters, perform operations, and optionally return a value. 
Executable examples for all topics in this section can be found in ``functions.cpp``.

### What is the syntax for declaring a function?
The general syntax for declaring a function is:
```
return_type function_name(parameter_type parameter_name, ...) {
  // function body
}
```
for example:
```
int multiply(int a, int b) {
    return a * b;
}
```
- ``return_type`` specifies the type of value returned (or ``void``)
- ``function_name`` is the identifier
- parameters are optional and separated by commas
  
### Rules about function placement
In C++ a function must be declared before it is used. If the function is defined after ``main()`` or another function that tries to use, then the compiler will not recognize it. Declaring a function can be done in the following ways:
1. Define a function *above* ``main()``.
2. Declare a function prototype before ``main()`` and define it later.

Further explanation with ``main()``:
There is not a strict rule on where ``main()`` needs to be, but it's common practice to have either at the very top or bottom of a file. 
- **Top-down**: ``main()`` at the top, with helper functions define belowed. Doing this requires forward declarations, aka prototypes.
- **Bottom-up**: helper functions are defined first, with ``main()`` at the bottom. This allows calling functions without declarations.

Example with prototype:
```
int multiply(int a, int b);

int main() {
    multiply(2, 3);
}

int multiply(int a, int b) {
    return a * b;
}
```
### Recursive functions
A recursive function must:
- Call itself
- Include a base case to stop recursion

Example (factorial):
```
unsigned long long factorial(unsigned int n) {
    if (n<= 1) return 1;
    return n * factorial(n - 1);
}
```
Note that without a base case, recursion causes stack overflow!
### Multiple Parameters
C++ functions may accept:
- any number of parameters
- parameters of different data types
for example:
```
double compute(double x, int y, bool flag);
```
**Note** templates (as used in ``multiply<T>``) allow generic parameter types. Recall, a generic type parameter is a placeholder for a specific data type like ``int``, that is substituted with an actual type at compile time.
### Returning multiple values at the same time
C++ functions can return **only one value**, but there are couple workarounds with this, which include:
- ``std::pair``
- ``std::tuple``
- passing parameters by reference
- returning a struct or class

example using ``std::pair'':
```
std::pair<std::string, std::string> split(const std::string& s);
```
check ``functions.cpp`` to  see this approach
### Pass-by-Value & Pass-by-Reference
C++ supports both:
- Pass-by-value (default): function receives a copy
- Pass-by-reference: function modifies original variable using ``&``

Example:
```
void incr_by_value(iint x);
void incr_by_reference(int& x);
```
### Where are parameters and variables stored during execution?
- **Primitive values**: stored on the stack
- **References**: stored on the stack but refer to data elsewhere
- **Heap-allocated objects**: stored on the heap, via ``new``
- **Local variables**: stack-allocated unless optimized

### What are the scoping rules?
C++ uses lexical (static) scoping.
- Variables are visible only withiin the block {} where declared
- Function-local variables exist until function returns
- Block variables exist only within their block

Example:
```
if (true) {
    innt x = 5;
}
// x no longer exists here
```
### Side Effects
Side effects *are* possible with C++.
Side effects can be seen by:
- Modifying reference parameters
- Changing global variables
- Writing to files or output streams

Guard-rails exist as well, which include:
- ``const`` correctness
- Pass-by-value
- Encapsulation with classes
Example:
```
void safe(const int& x): // cannot modify x
```

### Where are local variables stored?
- Local variables: **stack**
- Dynamically allocated objects (``new``):  **heap**
- Static  local variables: **static storage**

Example:
```
static int counter = 0; // persists across calls
```
### Function Overloading
C++ allows multiple functions with the same name, as long as their parameter lists differ in type or number.

Example:
```
int add(int a, int b);
double add(double a, double b);
```
The compiler determines which version to class at compile time based on argument types.
**Note**: Return type alone is *not* sufficient for overloading.

### Default Arguments
Functions can define default values for parameters. If the caller omits those arguments, the default is used.

Example:
```
void longMessage(const std::string& msg, int level = 1);
```
Calling:
```
longMessage("Hello");
```
is equivalent to:
```
longMessage("Hello", 1);
```
Default parameters must appear after non-default parameters.

### Const-Correctness
The ``const`` keyword is used to prevent unintended modification of parameters and objects.

Example:
```
void print(const std::string& s);
```
This ensures the function cannot alter `s`.

const-correctness benefits:
- improves safety
- enables compiler optimizations
- clarifies the prorgammers intent

### Inline Functions
An ``inline`` function suggests to the compiler that it should replace the function call with the function body.
Example:
```
inline int square(int x) {
    return x * x;
}
```
Benefits include:
- reduces function-call overhead
- often used for small, frequently called functions

**NOTE**: The compiler might ignore ``inline`` if it deems it inefficient

### Templates and Generic Functions
Templates allow functions to operate on multiple data types without rewriting code.
Example:
```
template<typename T>
T multiply(T a, T b) {
    return a * b;
}
```
This enables:
- compile-time type safety
- high performance
- generic programming

### Lambda Functions (Anonymous Functions)
lambda expressions can define unnamed functions inline.
Example:
```
auto square = [] (int x) { return x * x; };
```
They are usually used for:
- short callbacks
- algorithms (``std::sort``, ``std::find_if``)
- functional-style programming
lambdas can capture variables by value or reference

### Exception Handling in Functions
Functions may throw and handle exceptions using ``throw``, ``try``, and ``catch``.
Example:
```
if safeDivide(int a, int b) {
    if (b == 0) throw std::runtime_error("Division by zero");
    return a / b;
}
```
Exceptions:
- separate error-handling from logic
- propagate up the call stack
- must be explicitly caught

### Static Local Variables
A function may contain static local variables that persist across function calls.
Example:
```
int counter() {
    static int count = 0;
    return ++count;
}
```
- initialized once
- retain value between calls
- stored in static storage, not on the stack

### Name Mangling and Linkage
| Feature          | Name Mangling | Linkage (``extern "C"``
| ------------- | -------------  | ------------------|
| Purpose  | Distinguish overloaded/scoped functions  |  Facilitate C/C++ interoperability  |
| Compiler Action  | Renames symbols (ex: ``foo`` -> ``_Z3fooi``)  | Keeps symbols as-is (ex: ``foo`` -> ``foo``) |
| Scope | Internal binary representation | Visibility across files |

Example:
```
void foo(int);
void foo(double);
```
These become different symbols at link time.

### Stack Unwinding
When an exception is thrown C++ automatically:
- destroys local objects
- calls destructors
- frees stack memory
This is central to RAII (Resource  Acquisition Is Initialization). RAII binds the life cycle of a resource (like heap memory) to the lifetime of an object.Ensures that resources acquired during object creation (constructor) and automatically released when the object goes out of scope (destructor).

### Static vs Dynamic Scope
C++ uses static (lexical) scoping:
- Variable bindings determined at compile time
- Function behavior does not change based on call stack
Dynamic scoping is NOT supported.


## Classes & Inheritance
### Does C++ support objects or something similar?
Yes, C++ supports objects through *classes* and *structs* types, which are user-defined types that can contain data members (instance variables), member functions (methods), nested types, static members, etc. A *class* and a *struct* are nearly identical, the only difference being default access (private for class, public for struct). In C++ the term *object* generally means an instance of any type (built-in or user-defined).

A **class** groups:
- instance variables (data members)
- functions (member methods)
Objects  are instances of a class

Example:
```
#include <cmath>
#include <string>

//example using struct (default public access)
struct Point {
  double x, y;
  double length() const {
      return std::hypot(x, y);
  }
};

//example using class (default private access)
class Person{
  std::string name;
public:
  Person(std::string n): name(std::move(n)) {}
  const std::string& getName() const {
      return name;
  }
};
```
C++ supports object-oriented programming through the use of ``class`` and ``struct`` types. Both allow programmers to define custom data types that bundle data (instance variables) together with behavior (member functions).

The primary differences between ``struct`` and ``class`` in C++ is **defult access control**: members of a ``struct`` are public by default, and members of a ``class`` are private by default. Aside from this they're functionally identical.

Objects are created by instantiating these types, and they support constructors, methods, encapsulation, inheritance, and polymorphism.

### Naming conventions for objects, instance variables, and functions
C++ does **not enforce** naming conventions, but common community conventions help readability and consistency: 
- **Types (classes/structs/enum)**: PascalCase or CamelCase (Person, HttpServer, MyStruct)
- **Functions / Methods**: snake_case or camelCase depending on project style (compute_bug, getValue, toString).
- **Member variables**: m_prefix or trailing underscore to distinguish from parameters (m_value, value_). Example: int value_ or int m_value.
- **Constants/macros**: kPascalCase or ALL_CAPS (macros usually ALL_CAPS).
- **Namespaces**: lowercase or company::project style.

Pick a style consistent with your project. Conventions are typically community/team-driven rather than language-enforced.

### Standard methods for common purposes
C++ does not have a built-in ``toString()`` methods like Java or Python.

Instead, C++ uses **operator overloading**, most commonly ``operator<<`` for output streams.

Example:
```
std::cout << person;
```

Implemented as:
```
std::ostream& operator<<(std::ostream& os, const Person& p);
```

### How does inheritance work? Multiple inheritance?
Inheritance is declared using a colon (``:``):
```
class Student : public Person {};
```
- ``public`` inheritance preserves access levels
- ``protected`` and ``private`` inheritance exist but are less common

C++ supports multiple inheritance, unlike java:
```
class StaffStudent : public Student, public Employee {};
```

**Note** However, multiple inheritance can introduce complexity, so be sure to use it carefully.

### Method overriding & call resolution
C++ uses virtual functions for runtime polymorphism.
- Base class function must be marked ``virtual``
- derived class overrides it
- calls are resolved at runtime through a vtable

Example:
```
class Person {
public:
    virtual void introduce() const;
};

class Student : public Person {
public:
    void introduce() const override;
};
```
The ``override`` keyword:
- is optional
- but helps the compiler catch mistakes

## Further notes about objects and inheritance 
**Virtual destructors**
If a class is intended to be inherited from, it must have a virtual destructor:
```
virtual ~Person() = default;
```
This ensures derived objects are destroyed correctly.

**Access control**
C++ has three access levels:
- ``public``
- ``protected``
- ``private``

**Object slicing**
Assigning a deriived object to a base object by value removes derived parts.

Example:
```
Person p = Student(...); // slicing occurs
```
Using references or pointers avoids this:
```
Person& p = student;
```

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
