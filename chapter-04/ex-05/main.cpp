#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> seen;
    std::vector<std::string> words;
    std::string word;

    while (std::cin >> word) {
        words.push_back(word);
    }

    for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); ++it) {
        // haven't seen it yet - count it!
        if (std::find(seen.begin(), seen.end(), *it) == seen.end()) {
            seen.push_back(*it);
            int count = std::count(words.begin(), words.end(), *it);
            std::cout << std::setw(20) << *it
                      << std::setw(4) << count << std::endl;
        }
    }

    std::cout << "#words in input: " << words.size() << std::endl;

    return 0;
}