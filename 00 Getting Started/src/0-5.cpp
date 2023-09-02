// Is this a valid program? Why or why not?
#include <iostream>
int main()    std::cout << "Hello, world!" << std::endl;

// Answer: NO! The function requires {}. To make this valid do
#include <iostream>
int main()    {std::cout << "Hello, world!" << std::endl;}
