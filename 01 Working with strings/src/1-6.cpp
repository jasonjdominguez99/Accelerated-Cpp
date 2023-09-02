// What does the following program do if, when it asks for you to input,
// you type two names (for example, Jason Dominguez)? Predict the behaviour
// before running the program, then try it.

#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
    return 0;
}

// std::cin was given "Jason Dominguez", but >> reads characters from the input
// into name, until a whitespace character is encountered. Therefore, name
// becomes "Jason" and "Dominguez" is still left in the input. So when we
// read from std::cin again into name, name is assigned to "Dominguez"
