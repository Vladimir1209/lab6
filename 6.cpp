#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <sstream>
using namespace std;
int diffWordsCounter(const std::string& str) {
    set<string> uniqueWords;
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
           uniqueWords.insert(word);
        }
    }

    return uniqueWords.size();
}

int main() {
    string sentence = "can you can a can";
    int words = diffWordsCounter(sentence);
    cout << words << endl;

}
