#include <iostream>
#include <vector>
using namespace std;
void plusesDeleter(std::vector<int>& v) {

    auto it = v.begin();

    while (it != v.end()) {
        if (*it > 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
}

int main() {
    vector<int> v = {1, 0, -8, -9, 0, 10, 23, -7};
    plusesDeleter(v);
    for (const auto& num : v) {
        cout << num << " ";
    }
}
