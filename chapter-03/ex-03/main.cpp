#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;

int main() {
    std::string word;
    std::map<std::string, int> dct;

    while (std::cin >> word) {
        if (dct.find(word) == dct.end()) {
            dct[word] = 0;
        }
        dct[word]++;
    }

    for (auto it = dct.begin(); it != dct.end(); it++) {
        auto key = it->first;
        auto value = it->second;
        std::cout << key << ": " << value << std::endl;
    }

    return 0;
}