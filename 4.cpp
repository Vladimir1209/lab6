#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;
map<string, int> wordsMapCounter(const std::string& str) {
    map<std::string, int> wordCount;
    stringstream ss(str);
    string word;

    // Разделение строки на слова по разделителям ' ', ',', и '.'
    while (ss >> word) {
        // Удаление разделителей с конца слова
        while (!word.empty() && (word.back() == ' ' || word.back() == ',' || word.back() == '.')) {
            word.pop_back();
        }
        // Удаление разделителей с начала слова
        while (!word.empty() && (word.front() == ' ' || word.front() == ',' || word.front() == '.')) {
            word.erase(word.begin());
        }
        // Увеличение счетчика для слова
        if (!word.empty()) {
            wordCount[word]++;
        }
    }

    return wordCount;
}

int main() {
    string sentence = "can you can";
    map<string, int> words = wordsMapCounter(sentence);
    for (const auto& pair : words) {
        cout << "Word " << pair.first << " == " << pair.second << std::endl;
    }

}
