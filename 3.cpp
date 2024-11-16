#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;
int wordsCounter(const std::string& str) {
    std::set<std::string> a;
    std::stringstream ss(str);
    std::string word;
    while (ss >> word) {
        while (!word.empty() && (word.back() == ' ' || word.back() == ',' || word.back() == '.')) {
            word.pop_back();
        }
        while (!word.empty() && (word.front() == ' ' || word.front() == ',' || word.front() == '.')) {
            word.erase(word.begin());
        }
        if (!word.empty()) {
            a.insert(word);
        }
    }

    return a.size();
}

int main() {
    int words = wordsCounter("can you can");
    cout<<words;
}
