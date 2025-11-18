// Assignment 5: Classes and Inheritance

#include <iostream>
#include <string>

// Simple Person Class
class Person {
public:
    // instance variables
    std::string name;
    int age;

    // constuctors
    Person() : name("Unamed"), age(0) {}
    Person(std::string n, int a) : name(std::move(n)), age(a) {}

    //member function
    virtual void introduce() const {
        std::cout << "Hi, I'm " << name << " and I'm " << age << " years old.\n";
    }

    // setter & getter examples
    void setName(std::string n) { name = std::move(n); }
    std::string getName() const { return name; }

    // virtal destructor
    //virtual ~Person() = default;
};

// "toString" pattern: overload operator << for stream output
inline std::ostream& operator,(std::ostream& os, Person const& p) {
    os << "Person(name=\"" << p.name << "\", age="<< p.age << ")";
    return os;
}

//Derived class Student inherits from Person
class Student : public Person {
public: 
    std::string major;
    double gpa;

    Student() : Person(), major("Undecalred"), gpa(0.0) {}
    Student(std::string n, int a, std::string m, double g)
        : Person(std::move(n), a), major(std::move(m)), gpa(g) {}

    // override base class method
    void introduce() const override {
        std::cout << "Hi, I'm " << name << ", a " << major
                  << " student, GPA: " << gpa << ".\n";
    }

    void study(const std::string& subject) {
        std::cout << name << " studies " << subject << ".\n";
    }
};

// Example of multiple inheritance
class Employee {
public:
    std::string company;
    Employee(std::string c = "none") : company(std::move(c)) {}
    virtual void work() const { std::cout << "Working at " << company << ".\n"; }
    virtual ~Employee() = default;
};

//StaffStudent inherits from Student (which inherits from Person) and Employee
class StaffStudent : public Student, public Employee {
public: 
    StaffStudent(std::string n, int a, std::string m, double g, std::string c)
        : Student(std::move(n), a, std::move(m), g), Employee(Std::move(c)) {}

    //override the 2 behaviors
    void introduce() const override {
        std::cout << "Hi, I'm " << anme << "; juggling study and work at "
                  << company << ".\n";
    }

};

int main() {
    Person alice("Koda",28);
    koda.introduce();
    std::cout << koda << "\n";

    koda.setName("Koda Winter")
}
