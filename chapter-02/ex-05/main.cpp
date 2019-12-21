#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void square() {
    const unsigned size = 5;

    for (unsigned int y = 0; y < size; y++) {
        if (y == 0 || y == size - 1) {
            string stars(size, '*');
            cout << stars << endl;
        } else {
            string spaces((size - 2), ' ');
            string line = "*" + spaces + "*";
            cout << line << endl;
        }
    }
}

void rectangle() {
    const unsigned int width = 12;
    const unsigned int height = 5;

    for (unsigned int y = 0; y < height; y++) {
        if (y == 0 || y == height - 1) {
            string stars(width, '*');
            cout << stars << endl;
        } else {
            string spaces(width - 2, ' ');
            cout << "*" << spaces << "*" << endl;
        }
    }
}

void triangle()
{
    const unsigned int scale = 7;

    const unsigned int rows = 1 * scale;
    const unsigned int cols = (rows * 2) - 1;
    const unsigned int mid = (cols - 1) / 2;

    for (unsigned int r = 0; r < rows; r++) {
        if (r == rows - 1) {
            string stars(cols, '*');
            cout << stars << endl;
        } else if (r == 0) {
            string spaces(mid, ' ');
            cout << spaces;
            cout << "*";
            cout << spaces;
            cout << endl;
        } else {
            const unsigned int outside = mid - r;
            const unsigned int inside = (mid - outside - 1) * 2 + 1;

            string spaces_outside(outside, ' ');
            string spaces_inside(inside, ' ');

            cout << spaces_outside;
            cout << "*";
            cout << spaces_inside;
            cout << "*";
            cout << endl;
        }
    }
}

int main() {
    square();
    rectangle();
    triangle();

    return 0;
}