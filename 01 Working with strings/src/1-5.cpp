// Is this program valid? If so, what does it do? If not, say why not,
// and rewrite it to be valid.

#include <iostream>
#include <string>

int main()
{
    { std::string s = "a string";
    { std::string x = s + ", really";
    std::cout << s << std::endl; }
    std::cout << x << std::endl;
    }
    return 0;
}

// NO! The variable x does not exist outside of the scope of the inner {}
//     Therefore the compiler cannot see it, it is undefined. To fix it,
//     extend the scope of the inner {} to include the statement on line 12

#include <iostream>
#include <string>

int main()
{
    { std::string s = "a string";
    { std::string x = s + ", really";
    std::cout << s << std::endl;
    std::cout << x << std::endl; }
    }
    return 0;
}
