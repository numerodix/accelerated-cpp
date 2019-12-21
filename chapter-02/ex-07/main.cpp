#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int c = 10;

    // invariant: c is the number that is printed
    while (c > -6) {
        cout << c << endl;
        c--;
    }

    return 0;
}