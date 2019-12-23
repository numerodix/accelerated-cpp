#include "student_info.h"
#include "grade.h"

using std::istream;
using std::vector;

bool compare(const Student_info& x, const Student_info& y) {
    return x.name < y.name;
}

istream& read(istream& is, Student_info& s) {
    double midterm, final;
    vector<double> homework;

    is >> s.name >> midterm >> final;

    read_hw(is, homework);

    s.final_grade = 0;
    if (homework.size() > 0)
        s.final_grade = grade(midterm, final, homework);

    return is;
}

istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        // get rid of previous contents
        hw.clear();

        // read homework grades
        double x;
        while (in >> x)
            hw.push_back(x);

        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}