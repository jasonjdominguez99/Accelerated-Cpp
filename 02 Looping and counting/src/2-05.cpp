// Write a set of "*" characters so that they form a square, a rectangle,
// and a triangle.

#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main()
{
    const string symbol = "*";
    
    // square (a x a)
    cout << endl;
    const int a = 4;
    for (int r = 0; r < a; ++r)
    {
        for (int c = 0; c < a; ++c)
        {
            cout << symbol;
        }
        cout << endl;
    }

    // rectangle (x x y)
    cout << endl;
    const int x = 4;
    const int y = 8;
    for (int r = 0; r < x; ++r)
    {
        for (int c = 0; c < y; ++c)
        {
            cout << symbol;
        }
        cout << endl;
    }

    // triangle (z x z)
    cout << endl;
    const int z = 5;
    for (int r = 0; r < z; ++r)
    {
        for (int c = 0; c <= r; ++c)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}