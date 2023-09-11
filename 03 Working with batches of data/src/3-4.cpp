// Write a program to report the length of the longest and shortest string in
// its input

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // ask for the set of words
    cout << "Enter all the words, "
            "followed by end-of-file: ";

    string word;
    string::size_type longest = 0;
    string::size_type shortest = word.max_size();

    // invariant: unique_words contains all the unique words read so far
    while (cin >> word)
    {
        string::size_type length = word.size();
        if (length > longest) longest = length;
        if (length < shortest) shortest = length;
    }

    cout << "Shortest word length: " << shortest << "\n"
         << "Longest word length: " << longest << endl;

    return 0;
}