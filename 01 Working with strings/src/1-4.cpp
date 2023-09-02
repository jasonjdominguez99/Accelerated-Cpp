// What about this one? What if we change }} to };}
// in the third line from the end?

#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
      std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }}
    return 0;
}

// YES! This is valid as C++ allows for name hiding. When `s` is redfined
//      in the block scope of the second {},  the initial `s` is hidden
//      but after this scope, the original `s` definition is available again
