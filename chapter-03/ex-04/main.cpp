#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
    std::string shortest;
    std::string longest;
    std::string word;

    while (std::cin >> word) {
        if (word.size() < shortest.size()) {
            shortest = word;
        }
        if (word.size() > longest.size()) {
            longest = word;
        }
    }

    std::cout << "shortest word: " << shortest << endl;
    std::cout << "longest word: " << longest << endl;

    return 0;
}