// The string literal "\t" represents a tab character; different
// C++ implementations display tabs in different ways. Experiment
// with your implementation to learn how it treats tabs.

#include <iostream>

int main()
{
    std::cout << "\thello tab\t\ttwotabs" << std::endl;
    std::cout << "-\thello tab\t\ttwotabs" << std::endl;
    std::cout << "hello\thello tab\t\ttwotabs" << std::endl;
    std::cout << "long first phrase\thello tab\t\ttwotabs" << std::endl;
    return 0;
}