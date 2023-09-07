// Explain each of the uses of std:: in the following program:

#include <iostream>

int main() {
int k =  0;
    while (k != n) {            // invariant: we have wrtten k asterisks so far
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl;     // std:: is required here
    return 0;
}

// Answer: the `using std::cout` allows for the cout object of from the standard
//         library to be used without the namespace, i.e. cout instead of
//         std::cout. `std::cout << std::endl;' then has to be used to print a
//         newline and flush the buffer as it is outside of the while loop, so
//         the using statement no longer has scope