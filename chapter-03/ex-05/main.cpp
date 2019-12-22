#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::string;
using std::streamsize;
using std::vector;

int main() {
    std::vector<string> names;
    std::vector<double> grades;

    for (int i = 0; i < 2; i++) {

        // ask for and read the student's name
        cout << "Please enter your first name: ";
        string name;
        cin >> name;
        cout << "Hello, " << name << "!" << endl;

        // ask for and read the midterm and final grades
        cout << "Please enter your midterm and final exam grades: ";
        double midterm, final;
        cin >> midterm >> final;

        // ask for the homework grades
        cout << "Enter your 3 homework grades: ";

        vector<double> homework;
        double x;

        // invariant: homework contains all the homework grades read so far
        for (int f = 0; f < 3; f++) {
            cin >> x;
            homework.push_back(x);
        }

        // check that the student entered some homework grades
        typedef vector<double>::size_type vec_sz;
        vec_sz size = homework.size();
        if (size == 0) {
            cout << endl << "You must enter your grades. "
                            "Please try again." << endl;
            return 1;
        }

        // sort the grades
        sort(homework.begin(), homework.end());

        // compute the median homework grade
        vec_sz mid = size / 2;
        double median;
        median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
                            : homework[mid];

        names.push_back(name);
        grades.push_back(0.2 * midterm + 0.4 * final + 0.4 * median);
    }

    cout.precision(3);
    for (unsigned int i = 0; i < names.size(); i++) {
        cout << "Name: " << names[i] << ", grade: " << grades[i] << endl;
    }

    return 0;
}