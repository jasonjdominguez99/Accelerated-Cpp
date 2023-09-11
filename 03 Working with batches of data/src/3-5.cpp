// Write a program that will keep track of grades for several students at once.

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <map>
#include <vector>

using std::cin;             using std::setprecision;
using std::cout;            using std::string;
using std::endl;            using std::streamsize;
using std::map;             using std::vector;
using std::numeric_limits;

int main()
{
    map<string, vector<double> > studentGrades;

    bool addStudent = true;
    while (addStudent)
    {
        cout << "Please enter the student's name: ";
        string studentName;
        cin >> studentName;

        // ask for student grades
        cout << "Enter all your student's grades, "
                "followed by n ";

        // a variable into which to read
        double studentGrade;

        while (cin >> studentGrade)
        {
            studentGrades[studentName].push_back(studentGrade);
        }
        cin.clear();
        cin.sync();

        cout << "Add another student? (y/n) ";
        string input;
        cin >> input;

        addStudent = input == "y";
    }
    
    for (const auto & [student, grades] : studentGrades)
    {
        cout << endl << student << endl;
        for (const auto grade : grades)
            cout << grade << " ";
        cout << endl;
    }

    return 0;
}