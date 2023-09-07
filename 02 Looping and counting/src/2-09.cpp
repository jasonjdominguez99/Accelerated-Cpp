// Write a program that asks the user to enter two numbers and tells the user
// which number is larger than the other

#include <iostream>

using std::cout; using std::cin;
using std::endl;

int main()
{
    cout << "Please enter the first number: ";
    int first;
    cin >> first;

    cout << "Please enter the second number: ";
    int second;
    cin >> second;

    if (first > second) {
        cout << first << " is larger than " << second << endl;
    }
    else if (second > first)
    {
        cout << second << " is larger than " << first << endl;
    }
    else
    {
        cout << "They are the same" << endl;
    }
    
    return 0;
}