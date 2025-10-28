// ============================================================================
// fopc_controls.cpp in PLP-3
// Purpose: Demonstrate selection (if, switch) and loop control in C++
// This file can be compiled and run directly into a C++ compiler.
// ============================================================================

#include <iostream>
#include <vector>

// Helper functions to show evaluation order in short-circuit examples
bool returns_true() {
    std::cout << "returns_true() called\n";
    return true;
}

bool returns_false() {
    std::cout << "returns_false() called\n";
    return false;
}

int main() {
  
    // =========================================================================
    // ONE-CONDITION IF/ELSE
    // =========================================================================
    std::cout << "\n=== one-condition if/else ===\n";

    bool x = true;

    // A simple one-condition if/else statement.
    // If x equals true, print the first message; otherwise, the else branch runs.
    if (x == true) {
        std::cout << "x is true\n";
    } else {
        std::cout << "x is false\n";
    }

    // =========================================================================
    // MULTI-CONDITION IF/ELSE
    // =========================================================================
    std::cout << "\n=== multi-condition if/else ===\n";

    int a = 5, b = 3;

    // Using logical AND (&&) and OR (||) to combine conditions.
    // Both conditions must be true for the block to execute.
    if (a > 0 && b < 10) {
        std::cout << "a > 0 AND b < 10\n";
    } else if (a > 0 || b < 10) {
        std::cout << "At least one of the conditions is true\n";
    } else {
        std::cout << "Neither condition true\n";
    }

    // =========================================================================
    // IF / ELSE IF / ELSE CHAIN
    // =========================================================================
    std::cout << "\n=== if / else if / else ladder ===\n";

    int n = 0;

    // Demonstrates multiple condition branches.
    if (n > 0) {
        std::cout << "positive\n";
    } else if (n == 0) {
        std::cout << "zero\n";
    } else {
        std::cout << "negative\n";
    }

    // =========================================================================
    // SHORT-CIRCUIT LOGIC
    // =========================================================================
    std::cout << "\n=== short-circuit logic ===\n";

    // In C++, the logical operators && and || are SHORT-CIRCUITING.
    // That means:
    //   - With '&&', if the left side is false, the right side is NEVER evaluated.
    //   - With '||', if the left side is true, the right side is NEVER evaluated.

    std::cout << "Case 1: first is false, second NOT called (&&):\n";
    if (returns_false() && returns_true()) {
        std::cout << "both true\n";
    } else {
        std::cout << "not both true\n";
    }

    std::cout << "Case 2: first true, second called (&&):\n";
    if (returns_true() && returns_true()) {
        std::cout << "both true\n";
    }

    // Bitwise & forces evaluation of BOTH sides, even if first is false:
    std::cout << "Using bitwise & evaluates both sides:\n";
    if (returns_false() & returns_true()) {
        std::cout << "both true (bitwise &)\n";
    } else {
        std::cout << "result false, but both functions were called\n";
    }

    // =========================================================================
    // SWITCH STATEMENT (with alternatives to break)
    // =========================================================================
    std::cout << "\n=== switch-case example ===\n";

    int code = 2;

    // The switch statement allows you to jump to a case label based on an integer or enum value.
    // Normally you'd use 'break' to stop falling through. But you can also use:
    //   - 'return' to exit the whole function
    //   - 'goto' to jump to a labeled statement
    //   - 'throw' to exit via an exception
    switch (code) {
        case 1:
            std::cout << "case 1 reached\n";
            // Example: use 'return' instead of 'break' to exit the whole function early.
            // (commented out so program continues)
            // return 0;
            break; // normal break ends this case only

        case 2:
            std::cout << "case 2 reached\n";
            // Demonstrating 'goto' instead of 'break':
            // Jump directly to label after switch.
            goto after_switch;

        case 3:
            std::cout << "case 3 reached (not printed if case 2 uses goto)\n";
            // Another alternative: 'throw' to exit the switch by throwing an exception.
            // throw std::runtime_error("Exiting switch via throw");
            break;

        default:
            std::cout << "default case\n";
    }

after_switch:
    std::cout << "Exited switch via goto label\n";

    // =========================================================================
    // LOOPING STRUCTURES
    // =========================================================================
    std::cout << "\n=== loops: for, range-for, while, do/while ===\n";

    // Classic for-loop: used when you know exactly how many times to iterate.
    for (int i = 0; i < 3; ++i) {
        std::cout << "for loop, i = " << i << '\n';
    }

    // Range-based for-loop: iterates directly over elements of a container.
    std::vector<int> v{6, 7, 8};
    for (int val : v) {
        std::cout << "range-for val = " << val << '\n';
    }

    // While-loop: tests condition before entering the body.
    int w = 2;
    while (w > 0) {
      w = w - 1; // or w--;
      std::cout << "while loop, w now = " << w << '\n';
    }

    int d = 0;
    // do/while runs the block first, then checks the condition.
    do {
      std::cout << "do/while executes once even if condition false\n";
    }
    while (d > 0); // condition is false, so loop stops after 1 run

    // =========================================================================
    // VARIABLE SCOPE IN LOOPS VS FUNCTIONS
    // =========================================================================
    std::cout << "\n=== variable scope ===\n";

    // Variables declared inside a for-loop header exist only within that loop.
    for (int i = 0; i < 1; ++i) {
        int inner = 42; // inner scoped only inside this block
        std::cout << "inside loop: inner = " << inner << '\n';
    }

    // Uncommenting the following line would cause a compiler error because
    // 'inner' and 'i' are not visible outside their respective scopes.
    // std::cout << inner << '\n'; // ERROR: 'inner' not declared in this scope

    // In contrast, variables declared in a function body live for the lifetime
    // of that function call (until the closing brace of main()).

    // =========================================================================
    // PROGRAM END
    // =========================================================================
    std::cout << "\nProgram completed successfully.\n";
    return 0;
}
