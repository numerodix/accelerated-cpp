#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    int y;

    cout << "Please enter your first number: ";
    cin >> x;
    cout << "Please enter your second number: ";
    cin >> y;

    int greatest = x > y ? x : y;

    cout << greatest << " is greatest" << endl;

    return 0;
}