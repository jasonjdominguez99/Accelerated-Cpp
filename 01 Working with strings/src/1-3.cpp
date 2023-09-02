// Is the following program valid? If so, what does it do? If not, why not?

#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
      std::cout << s << std::endl; }
    { const std::string s = "another string";
      std::cout << s << std::endl; }
    return 0;
}

// YES! This is valid becuase s is a local variable in the first scope,
//      defined by the first set of {}, then destroyed upon leaving that scop
//      There is then no concern of redefining/reinitializing s in the
//      second scope
