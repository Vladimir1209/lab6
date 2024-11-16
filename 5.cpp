#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <sstream>
using namespace std;
vector<string> uniqueWords(const std::string& str) {
    set<string> uniqueSet;
    stringstream ss(str);
    string word;


    while (ss >> word) {
        while (!word.empty() && (word.back() == ' ' || word.back() == ',' || word.back() == '.')) {
            word.pop_back();
        }
        while (!word.empty() && (word.front() == ' ' || word.front() == ',' || word.front() == '.')) {
            word.erase(word.begin());
        }
        if (!word.empty()) {
            uniqueSet.insert(word);
        }
    }

    vector<string> uniqueVector(uniqueSet.begin(), uniqueSet.end());
    return uniqueVector;
}

int main() {
    string sentence = "Can you can";
    vector<string> unique = uniqueWords(sentence);
    for (const auto& word : unique) {
        cout << word << endl;
    }

}
