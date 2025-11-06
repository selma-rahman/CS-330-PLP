#include <iostream>   // Allows you to print to the console using std::cout
#include <string>     // Provides the std::string type
#include <utility>    // Provides std::pair (used to return two values)
#include <stdexcept>  // Provides std::out_of_range for error handling

// -------------------------------------------------------------
// 1) A function that takes two numbers and returns their product
// -------------------------------------------------------------
//
// This is written as a *template* so it works with any numeric type
// (int, double, float, long, etc.). If you only needed ints, you could
// remove "template<typename T>" and just use: int multiply(int a, int b).
//
template<typename T>
T multiply(T a, T b) {
    return a * b;
}

// -------------------------------------------------------------
// 2) Recursive function: factorial
// -------------------------------------------------------------
//
// factorial(n) = n * factorial(n-1)
// factorial(1) = 1
//
// Stop recursion when n <= 1 to prevent infinite recursion.
unsigned long long factorial(unsigned int n) {
    if (n <= 1) return 1ULL;  // Base case to stop the recursion
    return static_cast<unsigned long long>(n) * factorial(n - 1);
}

// -------------------------------------------------------------
// 3) Function that splits a string into two parts and returns both
// -------------------------------------------------------------
//
// This version splits according to an index and returns a std::pair.
// A pair is a container holding two values:
//      pair.first  — first value
//      pair.second — second value
//
// Example: split_at_index("abcdef", 3) → ("abc", "def")
//
std::pair<std::string, std::string> split_at_index(const std::string& s, std::size_t idx) {
    if (idx > s.size())
        throw std::out_of_range("Index is past the end of the string!");

    // substr(pos, len) extracts a part of the string
    // If len is omitted, substr goes to the end of the string.
    return { s.substr(0, idx), s.substr(idx) };
}

// -------------------------------------------------------------
// Alternative split: split by a character delimiter (like ':')
// -------------------------------------------------------------
//
// Example: "hello:world" split by ':' into ("hello", "world")
//
std::pair<std::string, std::string> split_by_delim(const std::string& s, char delim) {
    std::size_t pos = s.find(delim); // find() returns index of delimiter or npos if not found

    if (pos == std::string::npos) {
        // No delimiter found then return whole string as first part
        return { s, std::string() };
    }

    // first part: before delimiter
    // second part: after delimiter
    return { s.substr(0, pos), s.substr(pos + 1) };
}

// -------------------------------------------------------------
// 4) Demonstration of pass-by-value vs pass-by-reference
// -------------------------------------------------------------
//
// Pass-by-value means the function gets a *copy* of the variable.
// Changing the copy does NOT affect the original.
//
void incr_by_value(int x) {
    x += 1;  // Only the copy changes. Caller won't see this change.
}

// Pass-by-reference uses & to modify the *original* variable.
//
void incr_by_reference(int& x) {
    x += 1;  // This modifies the caller's variable.
}

// -------------------------------------------------------------
// main(): Starting point of program
// -------------------------------------------------------------
int main() {

    // Call multiply and store result
    double a = 3.5, b = 2.0;
    double product = multiply(a, b);
    std::cout << "multiply(3.5, 2.0) = " << product << "\n";

    // Call factorial and store result
    unsigned int n = 6;
    unsigned long long result = factorial(n);
    std::cout << "factorial(6) = " << result << "\n";

    // Demonstrate split_by_delim
    std::string text = "hello:world";
    auto parts = split_by_delim(text, ':');
    std::cout << "split_by_delim(\"hello:world\", ':') -> \""
              << parts.first << "\" and \"" << parts.second << "\"\n";

    // Demonstrate split_at_index
    auto two = split_at_index("abcdef", 3);
    std::cout << "split_at_index(\"abcdef\", 3) -> \""
              << two.first << "\" and \"" << two.second << "\"\n";

    // Demonstrate pass-by-value vs reference
    int val = 10;

    incr_by_value(val);
    std::cout << "After incr_by_value(val): val = " << val << " (unchanged)\n";

    incr_by_reference(val);
    std::cout << "After incr_by_reference(val): val = " << val << " (changed)\n";

    return 0; // Success
}
