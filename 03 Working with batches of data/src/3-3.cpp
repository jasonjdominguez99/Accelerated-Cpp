// Write a program to count how many times each distinct word appears in its
// input

#include <iostream>
#include <string>
#include <unordered_map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unordered_map;

int main()
{
    // ask for the set of words
    cout << "Enter all the words, "
            "followed by end-of-file: ";

    string word;
    unordered_map<string, int> distinctWords;

    // invariant: distinct_words contains the number of occurrences of all the
    //            dinstinct words read so far
    while (cin >> word)
        ++distinctWords[word];

    // display the number of times each distinct word appeared in the input
    cout << endl;
    for (const auto & [word, numAppeared] : distinctWords)
    {
        cout << word << " appeared " << numAppeared << " times" << endl;
    }

    return 0;
}