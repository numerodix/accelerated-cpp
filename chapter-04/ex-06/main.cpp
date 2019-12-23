#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "student_info.h"

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    int nrecord = 1;
    try {
        // read and store all the records, and find the length of the longest name
        while (read(cin, record)) {
            maxlen = max(maxlen, record.name.size());
            students.push_back(record);
            nrecord++;
        }
    } catch (domain_error e) {
        cout << "failed to read record " << nrecord << ": " << e.what() << endl;
    }

    // alphabetize the records
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i) {

        // write the name, padded on the right to maxlen + 1 characters
        cout << students[i].name
             << string(maxlen + 1 - students[i].name.size(), ' ');

        // compute and write the grade
        streamsize prec = cout.precision();
        cout << setprecision(3) << students[i].final_grade
                << setprecision(prec);
    
        cout << endl;
    }

    return 0;
}