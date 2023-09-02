// Are the following definitions valid? Why or why not?

#include <string>

const std::string hello = "Hello";
const std::string message = hello + ", world" + "!";

// Answer: YES! Below shows the strings display correctly

#include <iostream>

int main()
{
    std::cout << hello << '\n'
              << message << std::endl;

    return 0;
}