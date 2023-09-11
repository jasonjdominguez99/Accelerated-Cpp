// Write a program to compute and print the quartiles (that is, the quarter of
// the numbers with the largest values, the next quarter, and so on) of a set
// of integers

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;             using std::sort;
using std::cout;            using std::streamsize;
using std::endl;            using std::string;
using std::setprecision;    using std::vector;

typedef vector<int>::size_type vec_sz;

double computeMedian(vector<int> values);

int main()
{
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // ask for the set of integers
    cout << "Enter all the values, "
            "followed by end-of-file: ";

    int i;
    vector<int> values;

    // invariant: homework contains all the homework grades read so far
    while (cin >> i)
        values.push_back(i);

    // check that the student entered some homework grades
    vec_sz size = values.size();
    if (size == 0) {
        cout << endl << "You must enter some values.    "
                        "Please try again." << endl;
        return 1;
    }

    // sort the values
    sort(values.begin(), values.end());

    // compute the median
    double median = computeMedian(values);

    // compute the lower quartile
    vector<int> firstHalfValues = vector<int>(
        values.begin(),
        values.begin() + size/2
    );
    double lowerQ = computeMedian(firstHalfValues);

    // compute the upper quartile
    vector<int> secondHalfValues = vector<int>(
        values.begin() + size/2,
        values.end()
    );
    double upperQ = computeMedian(secondHalfValues);

    // compute and write the final grade
    streamsize prec = cout.precision();
    cout << "The quartiles are: " << setprecision(3)
         << "Q1: " << lowerQ << "\n"
         << "Q2: " << median << "\n"
         << "Q3: " << upperQ << setprecision(prec) << endl;

    return 0;
}

double computeMedian(vector<int> values)
{
    // given sorted integers `values` return the median value
    vec_sz size = values.size();
    vec_sz mid = size/2;
    double median;
    median = size % 2 == 0 ? (values[mid] + values[mid - 1]) / 2.
                           : values[mid];

    return median;
}